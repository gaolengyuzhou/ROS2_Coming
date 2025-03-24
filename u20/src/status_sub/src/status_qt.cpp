#include <QApplication>       //提供了Qt应用类QApplication
#include <QLabel>             //Qt中用于显示文本的组件
#include <QString>            //用于存储字符串
#include "rclcpp/rclcpp.hpp"
#include <communication_interfaces/msg/system_status.hpp>  //引入消息接口
 
//使用using关键字把消息接口替换成SystemStatus，简化代码
using SystemStatus = communication_interfaces::msg::SystemStatus;
//定义SysStatusDisplay类，继承rclcpp的node节点并将这个节点命名为sys_status_display
class SysStatusDisplay : public rclcpp::Node {
 public:
  SysStatusDisplay() : Node("status_ui") {
    //创建一个订阅者subscription_，<>里面是消息接口，传入参数为（话题名称， 历史队列长度， 回调函数）
    //这里的回调函数是一个lambda表达式，&符号表示可以通过引用的方式直接捕获外部变量
    subscription_ = this->create_subscription<SystemStatus>(
        "sys_status", 10, [&](const SystemStatus::SharedPtr msg) -> void {
          label_->setText(get_qstr_from_msg(msg));    
        }); 
  	// 初始化label_
    label_ = new QLabel(get_qstr_from_msg(std::make_shared<SystemStatus>()));
    label_->show();
  }
  //定义消息接口的共享指针命名为msg，通过get_qstr_from_msg转化为QString类型，然后调用std::stringstream显示文本
QString get_qstr_from_msg(const SystemStatus::SharedPtr msg) {
    std::stringstream show_str;
    show_str
        << "===========系统状态可视化显示工具============\n"
        << "数 据 时 间:\t" << msg->stamp.sec << "\ts\n"
        << "用  户  名:\t" << msg->host_name << "\t\n"
        << "CPU使用率:\t" << msg->cpu_percent << "\t%\n"
        << "内存使用率:\t" << msg->memory_percent << "\t%\n"
        << "内存总大小:\t" << msg->memory_total << "\tMB\n"
        << "剩余有效内存:\t" << msg->memory_available << "\tMB\n"
        << "网络发送量:\t" << msg->net_sent << "\tMB\n"
        << "网络接收量:\t" << msg->net_recv << "\tMB\n"
        << "==========================================";
    //通过成员方法str()转化为std::string格式，然后给到QString::fromStdString函数生成一个QString类型
    return QString::fromStdString(show_str.str());
  }
 
 
 private:
  rclcpp::Subscription<SystemStatus>::SharedPtr subscription_;
  QLabel* label_;
};
 
 
int main(int argc, char* argv[]) {
  rclcpp::init(argc, argv);
  QApplication app(argc, argv);
  auto node = std::make_shared<SysStatusDisplay>();
  //由于rclcpp::spin和app.exec()都会阻碍程序运行，所以只能使用多线程来保证程序的正常运行
  std::thread spin_thread([&]() -> void { rclcpp::spin(node); });
  spin_thread.detach(); //当一个线程被detach后，它可以独立于主线程和其它线程运行。这意味着即使创建它的线程已经结束，被detach的线程仍然会继续执行，直到其任务完成
  app.exec();
  rclcpp::shutdown();
  return 0;
}