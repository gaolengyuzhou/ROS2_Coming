#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import rclpy
from rclpy.node import Node
import numpy as np
from communication_interfaces_topic.msg import AHRS

class AHRSDataPublisher(Node):
    def __init__(self):
        super().__init__('ahrs_publisher_node') # 节点
        self.publisher_ = self.create_publisher(AHRS, 
                                                'ahrs_data', 
                                                10)
        timer_period = 0.1  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        # 【获取数据】      生成 6 个 随机数
        ahrs_data = np.random.rand(6).tolist()


        # 【打包数据】      创建 AHRS 消息实例
        ahrs_data_msg = AHRS()
        ahrs_data_msg.stamp = self.get_clock().now().to_msg()
        ahrs_data_msg.ahrs_data = ahrs_data
        # 【发布消息】
        self.publisher_.publish(ahrs_data_msg)
        self.get_logger().info('发布了: "%s"' % ahrs_data_msg.ahrs_data)

def main(args=None):
    rclpy.init(args=args)
    ahrs_publisher = AHRSDataPublisher()
    rclpy.spin(ahrs_publisher)
    ahrs_publisher.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()