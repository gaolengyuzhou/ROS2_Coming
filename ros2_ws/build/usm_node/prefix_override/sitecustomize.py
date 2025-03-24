import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/u20/rov-ros-2/ROS2_Coming/ros2_ws/install/usm_node'
