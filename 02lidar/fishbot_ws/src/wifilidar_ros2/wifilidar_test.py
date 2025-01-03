#!/usr/bin/env python3

import subprocess
import os
import pty
import socket
import select
import argparse
import subprocess
import time

class LaserScanRos2():

    def __init__(self) -> None:
        self.laser_pro = None
    

class SocketServer():
    def __init__(self,lport=8889,uart_name="/tmp/fishbot_laser") -> None:
        self.lport = lport
        self.uart_name = uart_name
        self.laser_ros2 = LaserScanRos2()
        self.main()

    def main(self):
        s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
        s.bind(('0.0.0.0', self.lport))
        s.listen(5)
        master, slave = pty.openpty()
        if os.path.exists(self.uart_name):
            os.remove(self.uart_name)
        os.symlink(os.ttyname(slave), self.uart_name)
        print(f"UART2SOCKET:{self.lport}->{self.uart_name}")
        mypoll = select.poll()
        mypoll.register(master, select.POLLIN)
        try:
            while True:
                print("Prepare to Accept connect!")
                client, client_address = s.accept()
                mypoll.register(client.fileno(), select.POLLIN)
                print(s.fileno(), client, master)
                print('PTY: Opened {} for {}:{}'.format(
                    os.ttyname(slave), '0.0.0.0', self.lport))
                is_connect = True
                try:
                    while is_connect:
                        fdlist = mypoll.poll(256)
                        for fd, event in fdlist:
                            data = os.read(fd, 256)
                            write_fd = client.fileno() if fd == master else master
                            if len(data) == 0:
                                is_connect = False
                                break
                            os.write(write_fd, data)
                            # print(fd, event, data)
                except ConnectionResetError:
                    is_connect = False
                    print("远程被迫断开链接")
                finally:
                    mypoll.unregister(client.fileno())
        finally:
            s.close()
            os.close(master)
            os.close(slave)
            os.remove(self.uart_name)

def main():
    SocketServer()


if __name__ == "__main__":
    main()

