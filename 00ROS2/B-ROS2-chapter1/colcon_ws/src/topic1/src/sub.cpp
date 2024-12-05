#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
#include <string>
#include <iostream>

class Subscriber_1 : public rclcpp::Node
{public:
    Subscriber_1(std::string name) : Node(name)
    {   // 创建订阅者
        counter_subscriber_ = this->create_subscription<std_msgs::msg::String>("counter_info", 10, 
                                    std::bind(&Subscriber_1::c_callback, this, std::placeholders::_1));
    }

private:
    int clear_count = 0;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr counter_subscriber_;
    // 回调函数
    void c_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        size_t counter_start = msg->data.find("计数器:") + 10;
        size_t counter_end = msg->data.find("\t", counter_start);
        std::string counter_value = msg->data.substr(counter_start, counter_end - counter_start);
        size_t time_start = msg->data.find("当前时间:") + 13;
        std::string current_time = msg->data.substr(time_start);

        RCLCPP_INFO(this->get_logger(), "计数器:%s, 当前时间:%s", counter_value.c_str(), current_time.c_str());
        if (counter_value == "0")
        {
            clear_count++;
            RCLCPP_INFO(this->get_logger(), "嘿! 我已经被清空[%d]次了!", clear_count);
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    /*创建对应节点的共享指针对象*/
    auto node = std::make_shared<Subscriber_1>("sub");
    /* 运行节点，并检测退出信号*/
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}