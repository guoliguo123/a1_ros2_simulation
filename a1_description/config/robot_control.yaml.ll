controller_manager:
  ros__parameters:
    update_rate: 1000
    # Publish all joint states -----------------------------------
    joint_state_broadcaster:
      type: joint_state_broadcaster/JointStateBroadcaster


    # FL Controllers ---------------------------------------
    FL_hip_controller:
      type: unitree_legged_control/UnitreeJointController
FL_hip_controller:
  ros__parameters:
    update_rate: 100
    joints:
      - FL_hip_joint
    interface_name: position
    command_interface:
      - position
    state_interface:
      - position
      - velocity
    pid: {p: 300.0, i: 0.0, d: 8.0}
        #type: unitree_legged_control/UnitreeJointController
        #joint: FL_hip_joint
        #pid: {p: 100.0, i: 0.0, d: 5.0}

    FL_thigh_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: FL_thigh_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    FL_calf_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: FL_calf_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    # FR Controllers ---------------------------------------
    FR_hip_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: FR_hip_joint
        pid: {p: 100.0, i: 0.0, d: 5.0}

    FR_thigh_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: FR_thigh_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    FR_calf_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: FR_calf_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    # RL Controllers ---------------------------------------
    RL_hip_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RL_hip_joint
        pid: {p: 100.0, i: 0.0, d: 5.0}

    RL_thigh_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RL_thigh_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    RL_calf_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RL_calf_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    # RR Controllers ---------------------------------------
    RR_hip_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RR_hip_joint
        pid: {p: 100.0, i: 0.0, d: 5.0}

    RR_thigh_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RR_thigh_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}

    RR_calf_controller:
        type: unitree_legged_control/UnitreeJointController
        joint: RR_calf_joint
        pid: {p: 300.0, i: 0.0, d: 8.0}
