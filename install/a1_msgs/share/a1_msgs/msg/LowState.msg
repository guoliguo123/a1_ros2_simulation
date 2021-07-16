uint8 levelflag
uint16 commversion              # Old version Aliengo does not have
uint16 robotid                  # Old version Aliengo does not have
uint32 sn                       # Old version Aliengo does not have
uint8 bandwidth                 # Old version Aliengo does not have
IMU imu
MotorState[20] motorstate
int16[4] footforce              # force sensors     # Old version Aliengo is different
int16[4] footforceest           # force sensors     # Old version Aliengo does not have
uint32 tick                     # reference real-time from motion controller (unit: us)
uint8[40] wirelessremote        # wireless commands
uint32 reserve                  # Old version Aliengo does not have
uint32 crc

# Old version Aliengo does not have:
Cartesian[4] eeforceraw
Cartesian[4] eeforce          #it's a 1-DOF force infact, but we use 3-DOF here just for visualization
Cartesian position            # will delete
Cartesian velocity            # will delete
Cartesian velocity_w            # will delete
