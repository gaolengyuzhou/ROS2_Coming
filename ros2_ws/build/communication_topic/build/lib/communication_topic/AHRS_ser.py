#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
import numpy as np
from communication_interfaces_topic.srv import GetAHRS
from builtin_interfaces.msg import Time

class AHRSDataServer(Node):
    def __init__(self):
        super().__init__('ahrs_data_server')
        self.srv = self.create_service(GetAHRS, 'get_ahrs_data', self.get_ahrs_data_callback)

    def get_ahrs_data_callback(self, request, response):
        ahrs_data = np.random.rand(6).tolist()
        
        stamp = self.get_clock().now().to_msg()
        response.stamp = stamp
        response.ahrs_data = ahrs_data
        self.get_logger().info('提供了 AHRS 数据: "%s"' % response.ahrs_data)
        return response

def main(args=None):
    rclpy.init(args=args)
    ahrs_data_server = AHRSDataServer()
    rclpy.spin(ahrs_data_server)
    ahrs_data_server.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
