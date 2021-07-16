// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from a1_msgs:msg/HighState.idl
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
#include "a1_msgs/msg/detail/high_state__struct.h"
#include "a1_msgs/msg/detail/high_state__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "a1_msgs/msg/detail/cartesian__functions.h"
// end nested array functions include
bool a1_msgs__msg__imu__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__imu__convert_to_py(void * raw_ros_message);
bool a1_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool a1_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);
bool a1_msgs__msg__cartesian__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * a1_msgs__msg__cartesian__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool a1_msgs__msg__high_state__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[34];
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
    assert(strncmp("a1_msgs.msg._high_state.HighState", full_classname_dest, 33) == 0);
  }
  a1_msgs__msg__HighState * ros_message = _ros_message;
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
  {  // mode
    PyObject * field = PyObject_GetAttrString(_pymsg, "mode");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->mode = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // imu
    PyObject * field = PyObject_GetAttrString(_pymsg, "imu");
    if (!field) {
      return false;
    }
    if (!a1_msgs__msg__imu__convert_from_py(field, &ros_message->imu)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // forwardspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "forwardspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forwardspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sidespeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "sidespeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sidespeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // rotatespeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "rotatespeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->rotatespeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // bodyheight
    PyObject * field = PyObject_GetAttrString(_pymsg, "bodyheight");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->bodyheight = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // updownspeed
    PyObject * field = PyObject_GetAttrString(_pymsg, "updownspeed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->updownspeed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // forwardposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "forwardposition");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->forwardposition = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // sideposition
    PyObject * field = PyObject_GetAttrString(_pymsg, "sideposition");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->sideposition = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // footposition2body
    PyObject * field = PyObject_GetAttrString(_pymsg, "footposition2body");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'footposition2body'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    a1_msgs__msg__Cartesian * dest = ros_message->footposition2body;
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
  {  // footspeed2body
    PyObject * field = PyObject_GetAttrString(_pymsg, "footspeed2body");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'footspeed2body'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    a1_msgs__msg__Cartesian * dest = ros_message->footspeed2body;
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
  {  // footforce
    PyObject * field = PyObject_GetAttrString(_pymsg, "footforce");
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
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    Py_ssize_t size = 4;
    int16_t * dest = ros_message->footforce;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // footforceest
    PyObject * field = PyObject_GetAttrString(_pymsg, "footforceest");
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
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    Py_ssize_t size = 4;
    int16_t * dest = ros_message->footforceest;
    for (Py_ssize_t i = 0; i < size; ++i) {
      int16_t tmp = *(npy_int16 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(int16_t));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // tick
    PyObject * field = PyObject_GetAttrString(_pymsg, "tick");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->tick = PyLong_AsUnsignedLong(field);
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
  {  // eeforce
    PyObject * field = PyObject_GetAttrString(_pymsg, "eeforce");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'eeforce'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = 4;
    a1_msgs__msg__Cartesian * dest = ros_message->eeforce;
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
  {  // jointp
    PyObject * field = PyObject_GetAttrString(_pymsg, "jointp");
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
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    Py_ssize_t size = 12;
    float * dest = ros_message->jointp;
    for (Py_ssize_t i = 0; i < size; ++i) {
      float tmp = *(npy_float32 *)PyArray_GETPTR1(seq_field, i);
      memcpy(&dest[i], &tmp, sizeof(float));
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * a1_msgs__msg__high_state__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of HighState */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("a1_msgs.msg._high_state");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "HighState");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  a1_msgs__msg__HighState * ros_message = (a1_msgs__msg__HighState *)raw_ros_message;
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
  {  // mode
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->mode);
    {
      int rc = PyObject_SetAttrString(_pymessage, "mode", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imu
    PyObject * field = NULL;
    field = a1_msgs__msg__imu__convert_to_py(&ros_message->imu);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "imu", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forwardspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forwardspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forwardspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sidespeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sidespeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sidespeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rotatespeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->rotatespeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "rotatespeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // bodyheight
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->bodyheight);
    {
      int rc = PyObject_SetAttrString(_pymessage, "bodyheight", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // updownspeed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->updownspeed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "updownspeed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // forwardposition
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->forwardposition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "forwardposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sideposition
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->sideposition);
    {
      int rc = PyObject_SetAttrString(_pymessage, "sideposition", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footposition2body
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->footposition2body[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "footposition2body", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footspeed2body
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->footspeed2body[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "footspeed2body", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // footforce
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "footforce");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->footforce[0]);
    memcpy(dst, src, 4 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // footforceest
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "footforceest");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_INT16);
    assert(sizeof(npy_int16) == sizeof(int16_t));
    npy_int16 * dst = (npy_int16 *)PyArray_GETPTR1(seq_field, 0);
    int16_t * src = &(ros_message->footforceest[0]);
    memcpy(dst, src, 4 * sizeof(int16_t));
    Py_DECREF(field);
  }
  {  // tick
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->tick);
    {
      int rc = PyObject_SetAttrString(_pymessage, "tick", field);
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
  {  // eeforce
    PyObject * field = NULL;
    size_t size = 4;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    a1_msgs__msg__Cartesian * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->eeforce[i]);
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
      int rc = PyObject_SetAttrString(_pymessage, "eeforce", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // jointp
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "jointp");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "numpy.ndarray") == 0);
    PyArrayObject * seq_field = (PyArrayObject *)field;
    assert(PyArray_NDIM(seq_field) == 1);
    assert(PyArray_TYPE(seq_field) == NPY_FLOAT32);
    assert(sizeof(npy_float32) == sizeof(float));
    npy_float32 * dst = (npy_float32 *)PyArray_GETPTR1(seq_field, 0);
    float * src = &(ros_message->jointp[0]);
    memcpy(dst, src, 12 * sizeof(float));
    Py_DECREF(field);
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
