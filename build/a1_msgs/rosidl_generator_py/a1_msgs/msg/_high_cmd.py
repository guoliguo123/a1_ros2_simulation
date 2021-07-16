# generated from rosidl_generator_py/resource/_idl.py.em
# with input from a1_msgs:msg/HighCmd.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'wirelessremote'
# Member 'appremote'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HighCmd(type):
    """Metaclass of message 'HighCmd'."""

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
                'a1_msgs.msg.HighCmd')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__high_cmd
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__high_cmd
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__high_cmd
            cls._TYPE_SUPPORT = module.type_support_msg__msg__high_cmd
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__high_cmd

            from a1_msgs.msg import LED
            if LED.__class__._TYPE_SUPPORT is None:
                LED.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HighCmd(metaclass=Metaclass_HighCmd):
    """Message class 'HighCmd'."""

    __slots__ = [
        '_levelflag',
        '_commversion',
        '_robotid',
        '_sn',
        '_bandwidth',
        '_mode',
        '_forwardspeed',
        '_sidespeed',
        '_rotatespeed',
        '_bodyheight',
        '_footraiseheight',
        '_yaw',
        '_pitch',
        '_roll',
        '_led',
        '_wirelessremote',
        '_appremote',
        '_reserve',
        '_crc',
    ]

    _fields_and_field_types = {
        'levelflag': 'uint8',
        'commversion': 'uint16',
        'robotid': 'uint16',
        'sn': 'uint32',
        'bandwidth': 'uint8',
        'mode': 'uint8',
        'forwardspeed': 'float',
        'sidespeed': 'float',
        'rotatespeed': 'float',
        'bodyheight': 'float',
        'footraiseheight': 'float',
        'yaw': 'float',
        'pitch': 'float',
        'roll': 'float',
        'led': 'a1_msgs/LED[4]',
        'wirelessremote': 'uint8[40]',
        'appremote': 'uint8[40]',
        'reserve': 'uint32',
        'crc': 'int32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'LED'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 40),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.mode = kwargs.get('mode', int())
        self.forwardspeed = kwargs.get('forwardspeed', float())
        self.sidespeed = kwargs.get('sidespeed', float())
        self.rotatespeed = kwargs.get('rotatespeed', float())
        self.bodyheight = kwargs.get('bodyheight', float())
        self.footraiseheight = kwargs.get('footraiseheight', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch = kwargs.get('pitch', float())
        self.roll = kwargs.get('roll', float())
        from a1_msgs.msg import LED
        self.led = kwargs.get(
            'led',
            [LED() for x in range(4)]
        )
        if 'wirelessremote' not in kwargs:
            self.wirelessremote = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.wirelessremote = numpy.array(kwargs.get('wirelessremote'), dtype=numpy.uint8)
            assert self.wirelessremote.shape == (40, )
        if 'appremote' not in kwargs:
            self.appremote = numpy.zeros(40, dtype=numpy.uint8)
        else:
            self.appremote = numpy.array(kwargs.get('appremote'), dtype=numpy.uint8)
            assert self.appremote.shape == (40, )
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
        if self.mode != other.mode:
            return False
        if self.forwardspeed != other.forwardspeed:
            return False
        if self.sidespeed != other.sidespeed:
            return False
        if self.rotatespeed != other.rotatespeed:
            return False
        if self.bodyheight != other.bodyheight:
            return False
        if self.footraiseheight != other.footraiseheight:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch != other.pitch:
            return False
        if self.roll != other.roll:
            return False
        if self.led != other.led:
            return False
        if all(self.wirelessremote != other.wirelessremote):
            return False
        if all(self.appremote != other.appremote):
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @property
    def forwardspeed(self):
        """Message field 'forwardspeed'."""
        return self._forwardspeed

    @forwardspeed.setter
    def forwardspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'forwardspeed' field must be of type 'float'"
        self._forwardspeed = value

    @property
    def sidespeed(self):
        """Message field 'sidespeed'."""
        return self._sidespeed

    @sidespeed.setter
    def sidespeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sidespeed' field must be of type 'float'"
        self._sidespeed = value

    @property
    def rotatespeed(self):
        """Message field 'rotatespeed'."""
        return self._rotatespeed

    @rotatespeed.setter
    def rotatespeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotatespeed' field must be of type 'float'"
        self._rotatespeed = value

    @property
    def bodyheight(self):
        """Message field 'bodyheight'."""
        return self._bodyheight

    @bodyheight.setter
    def bodyheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'bodyheight' field must be of type 'float'"
        self._bodyheight = value

    @property
    def footraiseheight(self):
        """Message field 'footraiseheight'."""
        return self._footraiseheight

    @footraiseheight.setter
    def footraiseheight(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'footraiseheight' field must be of type 'float'"
        self._footraiseheight = value

    @property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
        self._yaw = value

    @property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
        self._pitch = value

    @property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
        self._roll = value

    @property
    def led(self):
        """Message field 'led'."""
        return self._led

    @led.setter
    def led(self, value):
        if __debug__:
            from a1_msgs.msg import LED
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
                 all(isinstance(v, LED) for v in value) and
                 True), \
                "The 'led' field must be a set or sequence with length 4 and each value of type 'LED'"
        self._led = value

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
    def appremote(self):
        """Message field 'appremote'."""
        return self._appremote

    @appremote.setter
    def appremote(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'appremote' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 40, \
                "The 'appremote' numpy.ndarray() must have a size of 40"
            self._appremote = value
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
                "The 'appremote' field must be a set or sequence with length 40 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._appremote = numpy.array(value, dtype=numpy.uint8)

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
            assert value >= -2147483648 and value < 2147483648, \
                "The 'crc' field must be an integer in [-2147483648, 2147483647]"
        self._crc = value
