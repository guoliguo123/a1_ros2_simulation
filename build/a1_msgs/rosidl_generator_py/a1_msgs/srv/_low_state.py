# generated from rosidl_generator_py/resource/_idl.py.em
# with input from a1_msgs:srv/LowState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LowState_Request(type):
    """Metaclass of message 'LowState_Request'."""

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
                'a1_msgs.srv.LowState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__low_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__low_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__low_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__low_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__low_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LowState_Request(metaclass=Metaclass_LowState_Request):
    """Message class 'LowState_Request'."""

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

# Member 'footforce'
# Member 'footforceest'
# Member 'wirelessremote'
import numpy  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_LowState_Response(type):
    """Metaclass of message 'LowState_Response'."""

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
                'a1_msgs.srv.LowState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__low_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__low_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__low_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__low_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__low_state__response

            from a1_msgs.msg import IMU
            if IMU.__class__._TYPE_SUPPORT is None:
                IMU.__class__.__import_type_support__()

            from a1_msgs.msg import MotorState
            if MotorState.__class__._TYPE_SUPPORT is None:
                MotorState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LowState_Response(metaclass=Metaclass_LowState_Response):
    """Message class 'LowState_Response'."""

    __slots__ = [
        '_levelflag',
        '_commversion',
        '_robotid',
        '_sn',
        '_bandwidth',
        '_imu',
        '_motorstate',
        '_footforce',
        '_footforceest',
        '_tick',
        '_wirelessremote',
        '_reserve',
        '_crc',
    ]

    _fields_and_field_types = {
        'levelflag': 'uint8',
        'commversion': 'uint16',
        'robotid': 'uint16',
        'sn': 'uint32',
        'bandwidth': 'uint8',
        'imu': 'a1_msgs/IMU',
        'motorstate': 'a1_msgs/MotorState[20]',
        'footforce': 'int16[4]',
        'footforceest': 'int16[4]',
        'tick': 'uint32',
        'wirelessremote': 'uint8[40]',
        'reserve': 'uint32',
        'crc': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'IMU'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'MotorState'), 20),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.levelflag = kwargs.get('levelflag', int())
        self.commversion = kwargs.get('commversion', int())
        self.robotid = kwargs.get('robotid', int())
        self.sn = kwargs.get('sn', int())
        self.bandwidth = kwargs.get('bandwidth', int())
        from a1_msgs.msg import IMU
        self.imu = kwargs.get('imu', IMU())
        from a1_msgs.msg import MotorState
        self.motorstate = kwargs.get(
            'motorstate',
            [MotorState() for x in range(20)]
        )
        if 'footforce' not in kwargs:
            self.footforce = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.footforce = numpy.array(kwargs.get('footforce'), dtype=numpy.int16)
            assert self.footforce.shape == (4, )
        if 'footforceest' not in kwargs:
            self.footforceest = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.footforceest = numpy.array(kwargs.get('footforceest'), dtype=numpy.int16)
            assert self.footforceest.shape == (4, )
        self.tick = kwargs.get('tick', int())
        if 'wirelessremote' not in kwargs:
            self.wirelessremote = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.wirelessremote = numpy.array(kwargs.get('wirelessremote'), dtype=numpy.uint8)
            assert self.wirelessremote.shape == (40, )
        self.reserve = kwargs.get('reserve', int())
        self.crc = kwargs.get('crc', int())

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
        if self.levelflag != other.levelflag:
            return False
        if self.commversion != other.commversion:
            return False
        if self.robotid != other.robotid:
            return False
        if self.sn != other.sn:
            return False
        if self.bandwidth != other.bandwidth:
            return False
        if self.imu != other.imu:
            return False
        if self.motorstate != other.motorstate:
            return False
        if all(self.footforce != other.footforce):
            return False
        if all(self.footforceest != other.footforceest):
            return False
        if self.tick != other.tick:
            return False
        if all(self.wirelessremote != other.wirelessremote):
            return False
        if self.reserve != other.reserve:
            return False
        if self.crc != other.crc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def levelflag(self):
        """Message field 'levelflag'."""
        return self._levelflag

    @levelflag.setter
    def levelflag(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'levelflag' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'levelflag' field must be an unsigned integer in [0, 255]"
        self._levelflag = value

    @property
    def commversion(self):
        """Message field 'commversion'."""
        return self._commversion

    @commversion.setter
    def commversion(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'commversion' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'commversion' field must be an unsigned integer in [0, 65535]"
        self._commversion = value

    @property
    def robotid(self):
        """Message field 'robotid'."""
        return self._robotid

    @robotid.setter
    def robotid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'robotid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'robotid' field must be an unsigned integer in [0, 65535]"
        self._robotid = value

    @property
    def sn(self):
        """Message field 'sn'."""
        return self._sn

    @sn.setter
    def sn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sn' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sn' field must be an unsigned integer in [0, 4294967295]"
        self._sn = value

    @property
    def bandwidth(self):
        """Message field 'bandwidth'."""
        return self._bandwidth

    @bandwidth.setter
    def bandwidth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'bandwidth' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'bandwidth' field must be an unsigned integer in [0, 255]"
        self._bandwidth = value

    @property
    def imu(self):
        """Message field 'imu'."""
        return self._imu

    @imu.setter
    def imu(self, value):
        if __debug__:
            from a1_msgs.msg import IMU
            assert \
                isinstance(value, IMU), \
                "The 'imu' field must be a sub message of type 'IMU'"
        self._imu = value

    @property
    def motorstate(self):
        """Message field 'motorstate'."""
        return self._motorstate

    @motorstate.setter
    def motorstate(self, value):
        if __debug__:
            from a1_msgs.msg import MotorState
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
                 len(value) == 20 and
                 all(isinstance(v, MotorState) for v in value) and
                 True), \
                "The 'motorstate' field must be a set or sequence with length 20 and each value of type 'MotorState'"
        self._motorstate = value

    @property
    def footforce(self):
        """Message field 'footforce'."""
        return self._footforce

    @footforce.setter
    def footforce(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'footforce' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'footforce' numpy.ndarray() must have a size of 4"
            self._footforce = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'footforce' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._footforce = numpy.array(value, dtype=numpy.int16)

    @property
    def footforceest(self):
        """Message field 'footforceest'."""
        return self._footforceest

    @footforceest.setter
    def footforceest(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'footforceest' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'footforceest' numpy.ndarray() must have a size of 4"
            self._footforceest = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'footforceest' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._footforceest = numpy.array(value, dtype=numpy.int16)

    @property
    def tick(self):
        """Message field 'tick'."""
        return self._tick

    @tick.setter
    def tick(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tick' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'tick' field must be an unsigned integer in [0, 4294967295]"
        self._tick = value

    @property
    def wirelessremote(self):
        """Message field 'wirelessremote'."""
        return self._wirelessremote

    @wirelessremote.setter
    def wirelessremote(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'wirelessremote' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 40, \
                "The 'wirelessremote' numpy.ndarray() must have a size of 40"
            self._wirelessremote = value
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
                 len(value) == 40 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'wirelessremote' field must be a set or sequence with length 40 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._wirelessremote = numpy.array(value, dtype=numpy.uint8)

    @property
    def reserve(self):
        """Message field 'reserve'."""
        return self._reserve

    @reserve.setter
    def reserve(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reserve' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'reserve' field must be an unsigned integer in [0, 4294967295]"
        self._reserve = value

    @property
    def crc(self):
        """Message field 'crc'."""
        return self._crc

    @crc.setter
    def crc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'crc' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'crc' field must be an unsigned integer in [0, 4294967295]"
        self._crc = value


class Metaclass_LowState(type):
    """Metaclass of service 'LowState'."""

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
                'a1_msgs.srv.LowState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__low_state

            from a1_msgs.srv import _low_state
            if _low_state.Metaclass_LowState_Request._TYPE_SUPPORT is None:
                _low_state.Metaclass_LowState_Request.__import_type_support__()
            if _low_state.Metaclass_LowState_Response._TYPE_SUPPORT is None:
                _low_state.Metaclass_LowState_Response.__import_type_support__()


class LowState(metaclass=Metaclass_LowState):
    from a1_msgs.srv._low_state import LowState_Request as Request
    from a1_msgs.srv._low_state import LowState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
