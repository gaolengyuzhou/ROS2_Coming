#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
from communication_interfaces_topic.srv import GetAHRS

class AHRSDataClient(Node):
    def __init__(self):
        super().__init__('ahrs_data_client')
        self.cli = self.create_client(GetAHRS, 'get_ahrs_data')
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('服务不可用，等待中...')
        self.req = GetAHRS.Request()

    def send_request(self):
        future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, future)
        if future.result() is not None:
            self.get_logger().info('接收到 AHRS 数据: "%s"' % future.result().ahrs_data)
        else:
            self.get_logger().error('服务调用失败')
        return future.result()

def main(args=None):
    rclpy.init(args=args)
    ahrs_data_client = AHRSDataClient()
    ahrs_data_client.send_request()
    ahrs_data_client.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
