#include <Arduino.h>
#include <micro_ros_platformio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h> //话题传输的消息类型

rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

// 用于发布的话题对象
rcl_publisher_t publisher;
// 定义计数器
int counter = 0;
std_msgs__msg__Int32 msg;

// 话题发布回调函数，用于发布计数器的值
void publish_count_callback()
{
    rcl_publish(&publisher, &msg, NULL);
}

void setup()
{
  Serial.begin(115200);
  // 设置通过串口进行MicroROS通信
  set_microros_serial_transports(Serial);
  // 延时时一段时间，等待设置完成
  delay(2000);
  // 初始化内存分配器
  allocator = rcl_get_default_allocator();
  // 创建初始化选项
  rclc_support_init(&support, 0, NULL, &allocator);
  // 创建节点 hello_microros
  rclc_node_init_default(&node, "hello_microros", "", &support);
  // 创建发布者
  rclc_publisher_init_default(
      &publisher,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
      "count");
}

void loop()
{
    delay(1000);

    msg.data = counter++;
    // 调用话题发布回调函数，发布计数器的值
    publish_count_callback();
}
