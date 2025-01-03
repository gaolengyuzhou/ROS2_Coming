#include <Arduino.h>
#include <micro_ros_platformio.h>

#include <rcl/rcl.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>

#include <std_msgs/msg/int32.h>

rclc_executor_t executor;
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;
// 声明话题订阅者
rcl_subscription_t subscriber;
// 声明消息文件
std_msgs__msg__Int32 sub_msg;
// 定义话题接收回调函数
void callback_subscription_(const void *msgin)
{
  const std_msgs__msg__Int32 *msg = (const std_msgs__msg__Int32 *)msgin;
  if (msg->data == 0)
  {
    digitalWrite(2, HIGH);
  }
  else
  {
    digitalWrite(2, LOW);
  }
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
  // 创建节点
  rclc_node_init_default(&node, "hello_microros", "", &support);
  // 订阅者初始化
  rclc_subscription_init_default(
      &subscriber,
      &node,
      ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, Int32),
      "led_control");
  // 创建执行器
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  // 为执行器添加一个订阅者
  rclc_executor_add_subscription(&executor, &subscriber, &sub_msg, &callback_subscription_, ON_NEW_DATA);
  
  
  // 初始化LED
  pinMode(2, OUTPUT);
}

void loop()
{
  delay(100);
  // 循环处理数据
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
}