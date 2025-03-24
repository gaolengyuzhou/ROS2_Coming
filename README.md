# 这是两个ROS之间的通信
> 分别是u20-foxy、u22-humble
## 对于自定义消息
### 包名communication_interfaces消息类型SystemStatus
```
/?/src/communication_interfaces$ tree
.
├── CMakeLists.txt
├── include
│   └── communication_interfaces
├── msg
│   └── SystemStatus.msg
├── package.xml
└── src
```
### 消息格式
```
builtin_interfaces/Time stamp # 记录时间戳 
string host_name # 主机名字
float32 cpu_percent # CPU使用率
float32 memory_percent #内存使用率 
float32 memory_total #内存总大小
float32 memory_available #内存总大小
float64 net_sent #网络发送数据总量 1MB=8Mb 
float64 net_recv #网络数据接受总量 MB
```
### 主要指令
1. 创建c++功能包communication_interfaces
```
ros2 pkg create communication_interfaces --build-type ament_cmake --dependencies std_msgs sensor_msgs builtin_interfaces rosidl_default_generators
```
2. 配置package
```
<member_of_group>rosidl_interface_packages</member_of_group>
```
3. 配置cmake`***`代表其他可能需要依赖的库
```
set(msg_files
  "msg/SystemStatus.msg"
)
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  DEPENDENCIES builtin_interfaces *** ***
)
```
4. 编译
```
colcon build --packages-select communication_interfaces
```
## 对于py包
### 构建包 ,一定要加上`communication_interfaces`
```
ros2 pkg create pc_status --build-type ament_python --dependencies rclpy std_msgs sensor_msgs communication_interfaces
```
### 实现发布系统信息
1. 引用
```
from communication_interfaces.msg import SystemStatus
```
2. 构建节点类
```
class SystemStatusPublisher(Node):
    def __init__(self):
        super().__init__('system_status_publisher')
        self.publisher_ = self.create_publisher(SystemStatus,'system_status', 10)
```
> 节点名称：system_status_publisher
> 话题名词：system_status
> 订阅消息类型：SystemStatus
### 配置setup
```
'system_status_publisher = pc_status.sys_pub:main',
```
## 对于c++包
### 构建包 ,一定要加上`communication_interfaces`
```
ros2 pkg create status_sub --build-type ament_cmake --dependencies rclcpp std_msgs sensor_msgs communication_interfaces
```
### 实现订阅系统信息
1. 引用
```
#include <communication_interfaces/msg/system_status.hpp>
```
2. 构建订阅类
```
class SystemStatusSubscriber : public rclcpp::Node {
public:
    SystemStatusSubscriber() : Node("system_status_subscriber") {
        subscription_ = this->create_subscription<communication_interfaces::msg::SystemStatus>(
            "system_status", 10, std::bind(&SystemStatusSubscriber::statusCallback, this, std::placeholders::_1));
    }
```
> 节点名称：system_status_subscriber
> 话题名词：system_status
> 订阅消息类型：SystemStatus
### 配置cmake
```
add_executable(status_ui src/status_ui.cpp)
target_link_libraries(status_ui Qt5::Widgets)
ament_target_dependencies(status_ui
  rclcpp
  communication_interfaces
)

install(TARGETS status_ui ***
DESTINATION lib/${PROJECT_NAME})
```
> ***表示其他可执行文件
> 运行时候直接 `ros2 run status_sub status_ui`
# 多机ros2
```
export ROS_IP=192.168.***.?
export ROS_DOMAIN_ID=0
```
> 分别配置好对方网段，ID=0
# 配置c++头文件路径
```
opt/ros/humble/include/**
usr/include/x86_64 - linux - gnu/qt5/**
```