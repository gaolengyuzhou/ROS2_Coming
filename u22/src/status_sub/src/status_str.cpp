#include <rclcpp/rclcpp.hpp>
#include <communication_interfaces/msg/system_status.hpp>

class SystemStatusSubscriber : public rclcpp::Node {
public:
    SystemStatusSubscriber() : Node("system_status_subscriber") {
        subscription_ = this->create_subscription<communication_interfaces::msg::SystemStatus>(
            "system_status", 10, std::bind(&SystemStatusSubscriber::statusCallback, this, std::placeholders::_1));
    }

private:
    void statusCallback(const communication_interfaces::msg::SystemStatus::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "接收到系统状态信息：");
        RCLCPP_INFO(this->get_logger(), "时间戳 - 秒: %d, 纳秒: %d", msg->stamp.sec, msg->stamp.nanosec);
        RCLCPP_INFO(this->get_logger(), "主机名: %s", msg->host_name.c_str());
        RCLCPP_INFO(this->get_logger(), "CPU使用率: %.2f%%", msg->cpu_percent);
        RCLCPP_INFO(this->get_logger(), "内存使用率: %.2f%%", msg->memory_percent);
        RCLCPP_INFO(this->get_logger(), "内存总大小: %.2f GB", msg->memory_total);
        RCLCPP_INFO(this->get_logger(), "内存可用大小: %.2f GB", msg->memory_available);
        RCLCPP_INFO(this->get_logger(), "网络发送数据总量: %.2f MB", msg->net_sent);
        RCLCPP_INFO(this->get_logger(), "网络数据接收总量: %.2f MB", msg->net_recv);
    }

    rclcpp::Subscription<communication_interfaces::msg::SystemStatus>::SharedPtr subscription_;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<SystemStatusSubscriber>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}