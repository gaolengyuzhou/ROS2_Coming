#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include "interfaces1/srv/sermsg.hpp"

class Countclienter : public rclcpp::Node
{
public:
    Countclienter(std::string name) : Node(name) {
        /*创建count_three_int客户端*/
        client_ = this->create_client<interfaces1::srv::Sermsg>("count_three_int");}
    void send_request()
    {
        int a, b, c;
        std::cout << "请输入第一个数: ";
        std::cin >> a;
        std::cout << "请输入第二个数: ";
        std::cin >> b;
        std::cout << "请输入第三个数: ";
        std::cin >> c;

        // 1.等待服务端上线
        while (!client_->wait_for_service(std::chrono::seconds(1))) {
        //等待时检测rclcpp的状态
        if (!rclcpp::ok()) {RCLCPP_ERROR(this->get_logger(), "等待服务的过程中被打断...");
                            return;}
        RCLCPP_INFO(this->get_logger(), "等待服务端上线中");
        }

        // 2.构造请求的
        auto request = std::make_shared<interfaces1::srv::Sermsg::Request>();
        request->a = a;
        request->b = b;
        request->c = c;
        // 3.发送异步请求，然后等待返回，返回时调用回调函数
        client_->async_send_request(
        request, std::bind(&Countclienter::result_callback_, this,
                            std::placeholders::_1));
        }
private:
    rclcpp::Client<interfaces1::srv::Sermsg>::SharedPtr client_;
    // 回调函数
    void result_callback_(
    rclcpp::Client<interfaces1::srv::Sermsg>::SharedFuture
      re) {
    auto response = re.get();
    RCLCPP_INFO(this->get_logger(), "和: %d, 积: %d", response->sum, response->prod);}
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Countclienter>("cli");
    //增加这一行，node->send_request(5, 6);，计算5+6结果
    node->send_request();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}