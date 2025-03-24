#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
from usm_interface.msg import AllCabinsMsg


class AllCabinsSubscriber(Node):
    def __init__(self):
        super().__init__('all_cabins_subscriber')
        self.subscription = self.create_subscription(
            AllCabinsMsg,
            'all_cabins_topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('Received AllCabinsMsg with %d cabins' % len(msg.cabin_msgs))
        for cabin in msg.cabin_msgs:
            self.get_logger().info('Cabin ID: %d, Temperature: %.2f, Humidity: %.2f, Pressure: %.2f, Name: %s' %
                                   (cabin.cabin_id, cabin.temperature, cabin.humidity, cabin.pressure, cabin.name))


def main(args=None):
    rclpy.init(args=args)
    all_cabins_subscriber = AllCabinsSubscriber()
    rclpy.spin(all_cabins_subscriber)
    all_cabins_subscriber.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
