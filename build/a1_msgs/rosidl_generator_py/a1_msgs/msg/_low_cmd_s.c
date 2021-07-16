// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from a1_msgs:msg/LowCmd.idl
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
#include "a1_msgs/msg/detail/low_cmd__struct.h"
#include "a1_msgs/msg/detail/low_cmd__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "a1_msgs/msg/detail/cartesian__functions.h"
#include "a1_msgs/msg/detail/led__functions.h"
#include "a1_msgs/msg/detail/motor_cmd__functions.h"
// end nested array functions include
bool a1_msgs__msg__motor_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__motor_cmd__convert_to_py(void * raw_ros_message);
bool a1_msgs__msg__led__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__led__convert_to_py(void * raw_ros_message);
bool a1_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool a1_msgs__msg__low_cmd__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
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
    assert(strncmp("a1_msgs.msg._low_cmd.LowCmd", full_classname_dest, 27) == 0);
  }
  a1_msgs__msg__LowCmd * ros_message = _ros_message;
  {  // levelflag
    PyObject * field = PyObject_GetAttrString(_pymsg, "levelflag");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->levelflag = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // commversion
    PyObject * field = PyObject_GetAttrString(_pymsg, "commversion");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->commversion = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // robotid
    PyObject * field = PyObject_GetAttrString(_pymsg, "robotid");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->robotid = (uint16_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // sn
    PyObject * field = PyObject_GetAttrString(_pymsg, "sn");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->sn = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // bandwidth
    PyObject * field = PyObject_GetAttrString(_pymsg, "bandwidth");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->bandwidth = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // motorcmd
    PyObject * field = PyObject_GetAttrString(_pymsg, "motorcmd");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'motorcmd'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 20;
    a1_msgs__msg__MotorCmd * dest = ros_message->motorcmd;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!a1_msgs__msg__motor_cmd__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // led
    PyObject * field = PyObject_GetAttrString(_pymsg, "led");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'led'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    a1_msgs__msg__LED * dest = ros_message->led;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!a1_msgs__msg__led__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // wirelessremote
    PyObject * field = PyObject_GetAttrString(_pymsg, "wirelessremote");
    if (!field) {
      return false;
    }
    // TODO(dirk-thomas) use a better way to check the type before casting
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    Py_INCREF(seq_field);
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    Py_ssize_t size = 40;
    uint8_t * dest = ros_message->wirelessremote;
    for (Py_ssize_t i = 0; i < size; ++i) {
      uint8_t tmp = *(npy_uint8 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(uint8_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // reserve
    PyObject * field = PyObject_GetAttrString(_pymsg, "reserve");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->reserve = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // crc
    PyObject * field = PyObject_GetAttrString(_pymsg, "crc");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->crc = PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // ff
    PyObject * field = PyObject_GetAttrString(_pymsg, "ff");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ff'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    a1_msgs__msg__Cartesian * dest = ros_message->ff;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!a1_msgs__msg__cartesian__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * a1_msgs__msg__low_cmd__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LowCmd */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("a1_msgs.msg._low_cmd");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LowCmd");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  a1_msgs__msg__LowCmd * ros_message = (a1_msgs__msg__LowCmd *)raw_ros_message;
  {  // levelflag
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->levelflag);
    {
      int rc = PyObject_SetAttrString(_pymessage, "levelflag", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // commversion
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->commversion);
    {
      int rc = PyObject_SetAttrString(_pymessage, "commversion", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // robotid
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->robotid);
    {
      int rc = PyObject_SetAttrString(_pymessage, "robotid", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sn
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->sn);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sn", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bandwidth
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->bandwidth);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bandwidth", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // motorcmd
    PyObject * field = NULL;
    size_t size = 20;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__MotorCmd * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->motorcmd[i]);
      PyObject * pyitem = a1_msgs__msg__motor_cmd__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "motorcmd", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // led
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__LED * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->led[i]);
      PyObject * pyitem = a1_msgs__msg__led__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "led", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // wirelessremote
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "wirelessremote");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_UINT8);
    assert(sizeof(npy_uint8) == sizeof(uint8_t));
    npy_uint8 * dst = (npy_uint8 *)PyArray_GETPTR1(seq_field, 0);
    uint8_t * src = &(ros_message->wirelessremote[0]);
    memcpy(dst, src, 40 * sizeof(uint8_t));
    Py_DECREF(field);
  }
  {  // reserve
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->reserve);
    {
      int rc = PyObject_SetAttrString(_pymessage, "reserve", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // crc
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->crc);
    {
      int rc = PyObject_SetAttrString(_pymessage, "crc", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ff
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->ff[i]);
      PyObject * pyitem = a1_msgs__msg__cartesian__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "ff", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
