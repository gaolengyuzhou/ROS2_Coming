#include <Arduino.h>
#include <micro_ros_platformio.h>    // 包含用于 ESP32 的 micro-ROS PlatformIO 库
#include <WiFi.h>                    // 包含 ESP32 的 WiFi 库
#include <rcl/rcl.h>                 // 包含 ROS 客户端库 (RCL)
#include <rclc/rclc.h>               // 包含用于 C 的 ROS 客户端库 (RCLC)
#include <rclc/executor.h>           // 包含 RCLC 执行程序库，用于执行订阅和发布

/*1、包含microROS消息头文件*/
#include <micro_ros_utilities/string_utilities.h>
/*imu*/
#include <sensor_msgs/msg/imu.h>

/*2、声明发布者、订阅者*/
rclc_executor_t executor;          // 创建一个 RCLC 执行程序对象，用于处理订阅和发布
rclc_support_t support;            // 创建一个 RCLC 支持对象，用于管理 ROS2 上下文和节点
rcl_allocator_t allocator;         // 创建一个 RCL 分配器对象，用于分配内存
rcl_node_t node;                   // 创建一个 RCL 节点对象，用于此基于 ESP32 的机器人小车
rcl_timer_t timer;

rcl_publisher_t imu_publisher;   // 用于发布机器人的imu信息
sensor_msgs__msg__Imu imu_msg;    // 机器人的imu消息


/*imu*/
#include "IMU.h"
MPU6050 mpu(Wire); // 初始化MPU6050对象
IMU imu(mpu);      // 初始化IMU对象
imu_t imu_data;
#include <math.h>

/*oled*/
// #include "Wire.h"
#include <Adafruit_GFX.h>     // 加载Adafruit_GFX库
#include <Adafruit_SSD1306.h> // 加载Adafruit_SSD1306库
Adafruit_SSD1306 display;     // 声明对象

// 定义定时器接收回调函数
void timer_callback(rcl_timer_t *timer, int64_t last_call_time)
{
  RCLC_UNUSED(last_call_time);
  if (timer != NULL)
  {
    // 发布imu消息
    rcl_publish(&imu_publisher, &imu_msg, NULL);
  }
}


void setup()
{
  // 初始化串口通信，波特率为115200
  Serial.begin(115200);
  /*========================OLED初始化====================================*/
  Wire.begin(18, 19);
  /*========================OLED初始化====================================*/
  display = Adafruit_SSD1306(128, 64, &Wire);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); // 设置OLED的I2C地址
  display.clearDisplay();                    // 清空屏幕
  display.setTextSize(2);                    // 设置字体大小
  display.setCursor(0, 0);                   // 设置开始显示文字的坐标
  display.setTextColor(SSD1306_WHITE);       // 设置字体颜色
  display.println("hello oled!");            // 输出的字符
  display.display();

  /*========================IMU初始化====================================*/
  imu.begin(18, 19); // 初始化IMU,使用18，19引脚
  /*========================IMU初始化====================================*/
  // 设置 micro-ROS 代理的 IP 地址。
  IPAddress agent_ip;
  agent_ip.fromString("192.168.22.36");
  // 使用 WiFi 网络和代理 IP 设置 micro-ROS 传输层。
  set_microros_wifi_transports("glyz", "85856666", agent_ip, 8888);
  // 等待 2 秒，以便网络连接得到建立。
  delay(2000);

  // 设置 micro-ROS 支持结构、节点和订阅。
  allocator = rcl_get_default_allocator();
  rclc_support_init(&support, 0, NULL, &allocator);
  rclc_node_init_default(&node, "esp32_car", "", &support);
  /*添加发布IMU*/
  rclc_publisher_init_best_effort(
    &imu_publisher,
    &node,
    ROSIDL_GET_MSG_TYPE_SUPPORT(sensor_msgs, msg, Imu),
    "imu");

  // 创建定时器，200ms发一次
  const unsigned int timer_timeout = 200;
  rclc_timer_init_default(
      &timer,
      &support,
      RCL_MS_TO_NS(timer_timeout),
      timer_callback);
  
  // 设置 micro-ROS 执行器，并将订阅添加到其中。
  rclc_executor_init(&executor, &support.context, 1, &allocator);
  // 给执行器添加定时器
  rclc_executor_add_timer(&executor, &timer);
}

void loop()
{
  delay(100);
  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
  /*imu*/
  imu.update();
  imu.getImuData(imu_data); // 获取IMU数据结构体

  imu_msg.header.frame_id =  micro_ros_string_utilities_set(imu_msg.header.frame_id, "imu_frame");
  int64_t current_time = rmw_uros_epoch_millis();
  imu_msg.header.stamp.sec = current_time * 1e-3;
  imu_msg.header.stamp.nanosec = current_time - imu_msg.header.stamp.sec * 1000;

  for (int i = 0; i < 9; ++i) {
    imu_msg.orientation_covariance[i] = 0.0;
      imu_msg.linear_acceleration_covariance[i] = 0.0;
      imu_msg.angular_velocity_covariance[i] = 0.0;
  }
  // 填充线性加速度数据
  imu_msg.linear_acceleration.x = imu_data.linear_acceleration.x;
  imu_msg.linear_acceleration.y = imu_data.linear_acceleration.y;
  imu_msg.linear_acceleration.z = imu_data.linear_acceleration.z;

  // imu_msg.linear_acceleration_covariance = [0]

  // 填充角速度数据
  imu_msg.angular_velocity.x = imu_data.angular_velocity.x* M_PI / 180.0;
  imu_msg.angular_velocity.y = imu_data.angular_velocity.y* M_PI / 180.0;
  imu_msg.angular_velocity.z = imu_data.angular_velocity.z* M_PI / 180.0;

  // imu_msg.angular_velocity_covariance = [0]

  // 填充姿态四元数数据
  imu_msg.orientation.w = imu_data.orientation.w;
  imu_msg.orientation.x = imu_data.orientation.x;
  imu_msg.orientation.y = imu_data.orientation.y;
  imu_msg.orientation.z = imu_data.orientation.z;

  // imu_msg.orientation_covariance = [0]

  // 发布imu消息
  rcl_publish(&imu_publisher, &imu_msg, NULL);

  /*==========================OLED显示===========================*/
  display.clearDisplay();  // 清空屏幕
  display.setCursor(0, 0); // 设置开始显示文字的坐标
  display.print("X=");   // 输出X
  display.println(imu_data.angle_euler.x);
  display.print("Y="); // 输出Y
  display.println(imu_data.angle_euler.y);
  display.print("Z="); // 输出Z
  display.println(imu_data.angle_euler.z);
  display.display();   
  Serial.printf("6050:%f,%f,%f\r\n", imu_data.angle_euler.x,imu_data.angle_euler.y, imu_data.angle_euler.z); 
}
