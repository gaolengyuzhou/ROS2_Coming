#include <iostream>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud.hpp"
#include "pcl_conversions/pcl_conversions.h"

#include <pcl/point_types.h>
#include <pcl/io/pcd_io.h>

class PointCloudShow: public rclcpp::Node
{
public:
    PointCloudShow(const std::string & file_name): Node("read_pcd")
    {
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("point_cloud_topic", 10);
        pcl::PointCloud<pcl::PointXYZ>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZ>);
        if(pcl::io::loadPCDFile<pcl::PointXYZ>(file_name, *cloud) == -1)
        {
            PCL_ERROR("无法读取文件 %s\n", file_name.c_str());
        }

        sensor_msgs::msg::PointCloud2 cloud_msg;
        pcl::toROSMsg(*cloud, cloud_msg);
        cloud_msg.header.frame_id = "point_cloud_frame";
        publisher_->publish(cloud_msg);
    }

private:
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
    if(argc<2)
    {
        std::cerr << "请在节点后输入要显示的pcd文件地址！" << std::endl;
        return 1;
    }

    rclcpp::init(argc, argv);
    auto node = std::make_shared<PointCloudShow>(argv[1]);
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
