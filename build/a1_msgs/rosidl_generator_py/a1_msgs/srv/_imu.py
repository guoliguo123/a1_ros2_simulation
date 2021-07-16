# generated from rosidl_generator_py/resource/_idl.py.em
# with input from a1_msgs:srv/Imu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Imu_Request(type):
    """Metaclass of message 'Imu_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('a1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'a1_msgs.srv.Imu_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imu_Request(metaclass=Metaclass_Imu_Request):
    """Message class 'Imu_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# Member 'quaternion'
# Member 'gyroscope'
# Member 'accelerometer'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_Imu_Response(type):
    """Metaclass of message 'Imu_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('a1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'a1_msgs.srv.Imu_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__imu__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__imu__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__imu__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__imu__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__imu__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Imu_Response(metaclass=Metaclass_Imu_Response):
    """Message class 'Imu_Response'."""

    __slots__ = [
        '_quaternion',
        '_gyroscope',
        '_accelerometer',
        '_temperature',
    ]

    _fields_and_field_types = {
        'quaternion': 'float[4]',
        'gyroscope': 'float[3]',
        'accelerometer': 'float[3]',
        'temperature': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'quaternion' not in kwargs:
            self.quaternion = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.quaternion = numpy.array(kwargs.get('quaternion'), dtype=numpy.float32)
            assert self.quaternion.shape == (4, )
        if 'gyroscope' not in kwargs:
            self.gyroscope = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyroscope = numpy.array(kwargs.get('gyroscope'), dtype=numpy.float32)
            assert self.gyroscope.shape == (3, )
        if 'accelerometer' not in kwargs:
            self.accelerometer = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accelerometer = numpy.array(kwargs.get('accelerometer'), dtype=numpy.float32)
            assert self.accelerometer.shape == (3, )
        self.temperature = kwargs.get('temperature', int())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if all(self.quaternion != other.quaternion):
            return False
        if all(self.gyroscope != other.gyroscope):
            return False
        if all(self.accelerometer != other.accelerometer):
            return False
        if self.temperature != other.temperature:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def quaternion(self):
        """Message field 'quaternion'."""
        return self._quaternion

    @quaternion.setter
    def quaternion(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'quaternion' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'quaternion' numpy.ndarray() must have a size of 4"
            self._quaternion = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'quaternion' field must be a set or sequence with length 4 and each value of type 'float'"
        self._quaternion = numpy.array(value, dtype=numpy.float32)

    @property
    def gyroscope(self):
        """Message field 'gyroscope'."""
        return self._gyroscope

    @gyroscope.setter
    def gyroscope(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyroscope' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyroscope' numpy.ndarray() must have a size of 3"
            self._gyroscope = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'gyroscope' field must be a set or sequence with length 3 and each value of type 'float'"
        self._gyroscope = numpy.array(value, dtype=numpy.float32)

    @property
    def accelerometer(self):
        """Message field 'accelerometer'."""
        return self._accelerometer

    @accelerometer.setter
    def accelerometer(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accelerometer' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accelerometer' numpy.ndarray() must have a size of 3"
            self._accelerometer = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 True), \
                "The 'accelerometer' field must be a set or sequence with length 3 and each value of type 'float'"
        self._accelerometer = numpy.array(value, dtype=numpy.float32)

    @property
    def temperature(self):
        """Message field 'temperature'."""
        return self._temperature

    @temperature.setter
    def temperature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'temperature' field must be an integer in [-128, 127]"
        self._temperature = value


class Metaclass_Imu(type):
    """Metaclass of service 'Imu'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('a1_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'a1_msgs.srv.Imu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__imu

            from a1_msgs.srv import _imu
            if _imu.Metaclass_Imu_Request._TYPE_SUPPORT is None:
                _imu.Metaclass_Imu_Request.__import_type_support__()
            if _imu.Metaclass_Imu_Response._TYPE_SUPPORT is None:
                _imu.Metaclass_Imu_Response.__import_type_support__()


class Imu(metaclass=Metaclass_Imu):
    from a1_msgs.srv._imu import Imu_Request as Request
    from a1_msgs.srv._imu import Imu_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
