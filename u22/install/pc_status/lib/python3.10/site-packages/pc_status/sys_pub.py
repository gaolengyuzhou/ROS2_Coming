#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from communication_interfaces.msg import SystemStatus
import psutil
import platform
from builtin_interfaces.msg import Time


class SystemStatusPublisher(Node):
    def __init__(self):
        super().__init__('system_status_publisher')
        self.publisher_ = self.create_publisher(SystemStatus,'system_status', 10)
        timer_period = 1.0 # 1 秒
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        time_msg, host_name, cpu_percent, memory_percent, memory_total, memory_available, net_sent, net_recv = self.get_system_status()

        status_msg = SystemStatus()
        status_msg.stamp = time_msg
        status_msg.host_name = host_name
        status_msg.cpu_percent = cpu_percent
        status_msg.memory_percent = memory_percent
        status_msg.memory_total = memory_total
        status_msg.memory_available = memory_available
        status_msg.net_sent = net_sent
        status_msg.net_recv = net_recv

        self.publisher_.publish(status_msg)
        self.get_logger().info('已发布系统状态信息')

    def get_system_status(self):
        """获取系统状态信息"""
        # 获取当前时间
        time_msg = self.get_clock().now().to_msg()

        # 获取主机名
        host_name = platform.node()

        # 获取 CPU 使用率
        cpu_percent = psutil.cpu_percent(interval=1)

        # 获取内存信息
        memory = psutil.virtual_memory()
        memory_percent = memory.percent
        memory_total = memory.total / (1024.0 ** 3) # 转换为 GB
        memory_available = memory.available / (1024.0 ** 3) # 转换为 GB

        # 获取网络信息
        net_io_counters = psutil.net_io_counters()
        net_sent = net_io_counters.bytes_sent / (1024.0 ** 2) # 转换为 MB
        net_recv = net_io_counters.bytes_recv / (1024.0 ** 2) # 转换为 MB

        return time_msg, host_name, cpu_percent, memory_percent, memory_total, memory_available, net_sent, net_recv


def main(args=None):
    rclpy.init(args=args)
    system_status_publisher = SystemStatusPublisher()
    system_status_publisher.get_logger().info('系统状态发布节点已启动')
    try:
        rclpy.spin(system_status_publisher)
    except KeyboardInterrupt:
        system_status_publisher.get_logger().info('节点被用户中断')
    finally:
        system_status_publisher.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

