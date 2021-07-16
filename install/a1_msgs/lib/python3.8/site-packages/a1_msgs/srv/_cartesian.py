# generated from rosidl_generator_py/resource/_idl.py.em
# with input from a1_msgs:srv/Cartesian.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Cartesian_Request(type):
    """Metaclass of message 'Cartesian_Request'."""

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
                'a1_msgs.srv.Cartesian_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartesian__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartesian__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartesian__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartesian__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartesian__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Cartesian_Request(metaclass=Metaclass_Cartesian_Request):
    """Message class 'Cartesian_Request'."""

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

# already imported above
# import rosidl_parser.definition


class Metaclass_Cartesian_Response(type):
    """Metaclass of message 'Cartesian_Response'."""

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
                'a1_msgs.srv.Cartesian_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartesian__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartesian__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartesian__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartesian__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartesian__response

            from a1_msgs.msg import Cartesian
            if Cartesian.__class__._TYPE_SUPPORT is None:
                Cartesian.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Cartesian_Response(metaclass=Metaclass_Cartesian_Response):
    """Message class 'Cartesian_Response'."""

    __slots__ = [
        '_footposition2body',
        '_footspeed2body',
    ]

    _fields_and_field_types = {
        'footposition2body': 'a1_msgs/Cartesian[4]',
        'footspeed2body': 'a1_msgs/Cartesian[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'Cartesian'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['a1_msgs', 'msg'], 'Cartesian'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from a1_msgs.msg import Cartesian
        self.footposition2body = kwargs.get(
            'footposition2body',
            [Cartesian() for x in range(4)]
        )
        from a1_msgs.msg import Cartesian
        self.footspeed2body = kwargs.get(
            'footspeed2body',
            [Cartesian() for x in range(4)]
        )

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
        if self.footposition2body != other.footposition2body:
            return False
        if self.footspeed2body != other.footspeed2body:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def footposition2body(self):
        """Message field 'footposition2body'."""
        return self._footposition2body

    @footposition2body.setter
    def footposition2body(self, value):
        if __debug__:
            from a1_msgs.msg import Cartesian
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
                 all(isinstance(v, Cartesian) for v in value) and
                 True), \
                "The 'footposition2body' field must be a set or sequence with length 4 and each value of type 'Cartesian'"
        self._footposition2body = value

    @property
    def footspeed2body(self):
        """Message field 'footspeed2body'."""
        return self._footspeed2body

    @footspeed2body.setter
    def footspeed2body(self, value):
        if __debug__:
            from a1_msgs.msg import Cartesian
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
                 all(isinstance(v, Cartesian) for v in value) and
                 True), \
                "The 'footspeed2body' field must be a set or sequence with length 4 and each value of type 'Cartesian'"
        self._footspeed2body = value


class Metaclass_Cartesian(type):
    """Metaclass of service 'Cartesian'."""

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
                'a1_msgs.srv.Cartesian')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cartesian

            from a1_msgs.srv import _cartesian
            if _cartesian.Metaclass_Cartesian_Request._TYPE_SUPPORT is None:
                _cartesian.Metaclass_Cartesian_Request.__import_type_support__()
            if _cartesian.Metaclass_Cartesian_Response._TYPE_SUPPORT is None:
                _cartesian.Metaclass_Cartesian_Response.__import_type_support__()


class Cartesian(metaclass=Metaclass_Cartesian):
    from a1_msgs.srv._cartesian import Cartesian_Request as Request
    from a1_msgs.srv._cartesian import Cartesian_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
