import sys
import rclpy
from rclpy.node import Node
from communication_interfaces.msg import SystemStatus
from PyQt5.QtWidgets import QApplication, QWidget, QVBoxLayout, QLabel
from PyQt5.QtGui import QPalette, QColor


class SystemStatusWidget(QWidget):
    def __init__(self):
        super().__init__()

        self.init_ui()

        self.status_subscriber = None
        self.node = None

    def init_ui(self):
        self.setWindowTitle('系统状态可视化')
        self.layout = QVBoxLayout()

        # 设置背景颜色为白色
        palette = QPalette()
        palette.setColor(QPalette.Background, QColor(255, 255, 255))
        self.setPalette(palette)

        self.timestamp_label = QLabel('时间戳: ')
        self.layout.addWidget(self.timestamp_label)

        self.host_name_label = QLabel('主机名: ')
        self.layout.addWidget(self.host_name_label)

        self.cpu_percent_label = QLabel('CPU 使用率: ')
        self.layout.addWidget(self.cpu_percent_label)

        self.memory_percent_label = QLabel('内存使用率: ')
        self.layout.addWidget(self.memory_percent_label)

        self.memory_total_label = QLabel('内存总大小: ')
        self.layout.addWidget(self.memory_total_label)

        self.memory_available_label = QLabel('内存可用大小: ')
        self.layout.addWidget(self.memory_available_label)

        self.net_sent_label = QLabel('网络发送数据总量: ')
        self.layout.addWidget(self.net_sent_label)

        self.net_recv_label = QLabel('网络数据接收总量: ')
        self.layout.addWidget(self.net_recv_label)

        self.setLayout(self.layout)

        # 设置标签字体颜色为黑色
        for label in [self.timestamp_label, self.host_name_label, self.cpu_percent_label,
                      self.memory_percent_label, self.memory_total_label, self.memory_available_label,
                      self.net_sent_label, self.net_recv_label]:
            label.setStyleSheet("color: black;")

    def update_status(self, msg):
        timestamp = f"{msg.stamp.sec}.{msg.stamp.nanosec}"
        self.timestamp_label.setText(f'时间戳: {timestamp}')
        self.host_name_label.setText(f'主机名: {msg.host_name}')
        self.cpu_percent_label.setText(f'CPU 使用率: {msg.cpu_percent}%')
        self.memory_percent_label.setText(f'内存使用率: {msg.memory_percent}%')
        self.memory_total_label.setText(f'内存总大小: {msg.memory_total} GB')
        self.memory_available_label.setText(f'内存可用大小: {msg.memory_available} GB')
        self.net_sent_label.setText(f'网络发送数据总量: {msg.net_sent} MB')
        self.net_recv_label.setText(f'网络数据接收总量: {msg.net_recv} MB')

    def start_subscriber(self):
        self.node = Node('system_status_visualizer')
        self.status_subscriber = self.node.create_subscription(
            SystemStatus,
           'system_status',
            self.update_status,
            10
        )


def main(args=None):
    rclpy.init(args=args)

    app = QApplication(sys.argv)
    status_widget = SystemStatusWidget()
    status_widget.start_subscriber()
    status_widget.show()

    try:
        rclpy.spin(status_widget.node)
    except KeyboardInterrupt:
        pass
    finally:
        status_widget.node.destroy_node()
        rclpy.shutdown()
        sys.exit(app.exec_())


if __name__ == '__main__':
    main()