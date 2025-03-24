#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
from usm_interface.msg import AllCabinsMsg
from communication_interfaces.msg import CabinMsg
import random


class AllCabinsPublisher(Node):
    def __init__(self):
        super().__init__('all_cabins_publisher')
        self.publisher_ = self.create_publisher(AllCabinsMsg, 'all_cabins_topic', 10)
        timer_period = 1.0  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = AllCabinsMsg()
        num_cabins = random.randint(1, 5)
        for _ in range(num_cabins):
            cabin = CabinMsg()
            cabin.cabin_id = random.randint(1, 10)
            cabin.temperature = random.uniform(20.0, 30.0)
            cabin.humidity = random.uniform(40.0, 60.0)
            cabin.pressure = random.uniform(980.0, 1020.0)
            cabin.name = f'Cabin_{cabin.cabin_id}'
            msg.cabin_msgs.append(cabin)

        self.publisher_.publish(msg)
        self.get_logger().info('Publishing AllCabinsMsg with %d cabins' % len(msg.cabin_msgs))


def main(args=None):
    rclpy.init(args=args)
    all_cabins_publisher = AllCabinsPublisher()
    rclpy.spin(all_cabins_publisher)
    all_cabins_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
