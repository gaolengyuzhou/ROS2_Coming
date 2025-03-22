// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from communication_interfaces_topic:msg/Altitude.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "communication_interfaces_topic/msg/detail/altitude__struct.h"
#include "communication_interfaces_topic/msg/detail/altitude__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool communication_interfaces_topic__msg__altitude__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[54];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("communication_interfaces_topic.msg._altitude.Altitude", full_classname_dest, 53) == 0);
  }
  communication_interfaces_topic__msg__Altitude * ros_message = _ros_message;
  {  // p_row
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_row");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_row = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_pitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_pitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_pitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_yaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_row_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_row_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_row_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_pitch_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_pitch_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_pitch_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_yaw_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_yaw_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_yaw_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_x_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_x_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_x_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_y_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_y_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_y_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_z_set
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_z_set");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_z_set = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_row_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_row_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_row_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_pitch_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_pitch_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_pitch_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_yaw_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_yaw_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_yaw_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_x_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_x_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_x_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_y_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_y_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_y_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p_z_e
    PyObject * field = PyObject_GetAttrString(_pymsg, "p_z_e");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p_z_e = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // tau
    PyObject * field = PyObject_GetAttrString(_pymsg, "tau");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->tau), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->tau.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'tau'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->tau), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->tau.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // f_thr
    PyObject * field = PyObject_GetAttrString(_pymsg, "f_thr");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->f_thr), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->f_thr.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'f_thr'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->f_thr), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->f_thr.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // p1
    PyObject * field = PyObject_GetAttrString(_pymsg, "p1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // p2
    PyObject * field = PyObject_GetAttrString(_pymsg, "p2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->p2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * communication_interfaces_topic__msg__altitude__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Altitude */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("communication_interfaces_topic.msg._altitude");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Altitude");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  communication_interfaces_topic__msg__Altitude * ros_message = (communication_interfaces_topic__msg__Altitude *)raw_ros_message;
  {  // p_row
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_row);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_row", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_pitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_pitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_pitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_row_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_row_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_row_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_pitch_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_pitch_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_pitch_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_yaw_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_yaw_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_yaw_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_x_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_x_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_x_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_y_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_y_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_y_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_z_set
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_z_set);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_z_set", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_row_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_row_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_row_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_pitch_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_pitch_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_pitch_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_yaw_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_yaw_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_yaw_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_x_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_x_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_x_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_y_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_y_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_y_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p_z_e
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p_z_e);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p_z_e", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // tau
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "tau");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->tau.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->tau.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->tau.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // f_thr
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "f_thr");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->f_thr.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->f_thr.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->f_thr.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // p1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // p2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->p2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "p2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
