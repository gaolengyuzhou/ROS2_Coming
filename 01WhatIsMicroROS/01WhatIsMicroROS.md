# 添加依赖platform.ini

```c
[env:featheresp32]
platform = espressif32
board = featheresp32
framework = arduino
lib_deps = 
    https://gitee.com/ohhuo/micro_ros_platformio.git
```

## rcl

提供了**ROS 2**用于创建和管理节点、发布和订阅消息、调用服务的功能

## rclc

**c语言**库。

其中rclc/executor部分主要用于管理和执行回调函数。在**ROS 2**系统中，当有消息到达订阅者或者服务请求到达时，会触发相应的回调函数。

## 节点1

```c
rcl_node_t node;
rcl_ret_t ret = rcl_init(0, NULL, &context);
ret = rcl_node_init(&node, "node_name", "", &context);
```

## 节点2

```c
rclc_support_t support;
rcl_allocator_t allocator;
rcl_node_t node;

allocator = rcl_get_default_allocator();
rclc_support_init(&support, 0, NULL, &allocator);
rclc_node_init_default(&node, "hello_microros", "", &support);
```

* $\color{red}{allocator}$主要用于内存分配,`allocator`首先通过 `rcl_get_default_allocator()`获取默认的内存分配器。
* `rclc_support_init()`函数用于初始化这个 `rclc_support_t`结构体，这个结构体包含了如内存分配器（$\color{red}{allocator}$）、执行器（$\color{green}{executor}$）等相关信息的引用，以及一些用于管理**ROS 2**节点运行环境的底层资源。

## 创建执行器
```c
rclc_executor_init(&executor, &support.context, 1, &allocator);
```
>什么是执行器？

执行器就像是一个 **$\color{FF00FF}{任务调度中心}$**，确保在合适的时间调用正确的回调函数来处理各种**ROS 2**相关的事件,执行器会不断监测各种**事件源**，如*消息队列、服务请求队列*等。当有新的事件发生，比如收到一条新的订阅消息，它会将对应的回调函数放入一个待执行的队列中。