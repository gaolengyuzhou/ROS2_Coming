#include <rclcpp/rclcpp.hpp>
#include <iostream>
#include "interfaces1/srv/sermsg.hpp"  // 服务接口头文件

class Countserver : public rclcpp::Node
{
public:
    Countserver(std::string name) : Node(name)
    {
        service_ = this->create_service<interfaces1::srv::Sermsg>(
            "count_three_int",
            std::bind(&Countserver::count_three_int, this, std::placeholders::_1, std::placeholders::_2));
    }

private:
    class Count {
    public:
        int sum(int num[], int n) {
            int s = 0;
            for (int i = 0; i < n; i++) {
                s += num[i];
            }
            return s;
        }

        int prod(int num[], int n) {
            int m = 1;
            for (int i = 0; i < n; i++) {
                m *= num[i];
            }
            return m;
        }
    };

    void count_three_int(
        const std::shared_ptr<interfaces1::srv::Sermsg::Request> request,
        std::shared_ptr<interfaces1::srv::Sermsg::Response> response)
    {
        Count counter;
        int num[3] = {request->a, request->b, request->c};

        int sum = counter.sum(num, 3);
        int prod = counter.prod(num, 3);

        response->sum = sum;
        response->prod = prod;

        RCLCPP_INFO(this->get_logger(), "计算完成: %d + %d + %d = %d, %d * %d * %d = %d", 
        request->a, request->b, request->c, sum, request->a, request->b, request->c, prod);
    }

    rclcpp::Service<interfaces1::srv::Sermsg>::SharedPtr service_;
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = std::make_shared<Countserver>("ser");
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}