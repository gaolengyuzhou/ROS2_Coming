#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
from communication_interfaces_topic.msg import AHRS

class AHRSDataSubscriber(Node):
    def __init__(self):
        super().__init__('ahrs_subscriber_node')
        self.subscription = self.create_subscription(
            AHRS,
            'ahrs_data',
            self.listener_callback,
            10)
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info('接收到: "%s"' % msg.ahrs_data)

def main(args=None):
    rclpy.init(args=args)
    ahrs_subscriber = AHRSDataSubscriber()
    rclpy.spin(ahrs_subscriber)
    ahrs_subscriber.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
