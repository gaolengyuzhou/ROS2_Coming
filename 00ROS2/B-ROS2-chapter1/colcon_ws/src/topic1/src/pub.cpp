#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <chrono>
#include <string>
#include <iostream>

class Publisher_1 : public rclcpp::Node
{public:
    Publisher_1(std::string name) : Node(name)
    {
        // 创建发布者
        counter_publisher_ = this->create_publisher<std_msgs::msg::String>("counter_info", 10);
        // 创建定时器定时发布，周期为1000ms
        timer_ = this->create_wall_timer(std::chrono::milliseconds(1000), 
                                        std::bind(&Publisher_1::timer_callback, this));
        num = 0;
    }

private:
    int num;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr counter_publisher_;
    void timer_callback() // 回调函数
    {
        std_msgs::msg::String message;
        std::time_t now = std::time(nullptr);
        std::string current_time = std::asctime(std::localtime(&now));
        message.data = std::string("计数器:") + std::to_string(num) + "\t当前时间:" + current_time;

        RCLCPP_INFO(this->get_logger(), message.data.c_str());
        counter_publisher_->publish(message);
        num++;
        if(num>=100){num=0;}
    }
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    auto node = std::make_shared<Publisher_1>("pub");
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}