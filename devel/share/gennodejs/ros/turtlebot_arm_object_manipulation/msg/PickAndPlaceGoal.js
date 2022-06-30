// Auto-generated. Do not edit!

// (in-package turtlebot_arm_object_manipulation.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');
let geometry_msgs = _finder('geometry_msgs');

//-----------------------------------------------------------

class PickAndPlaceGoal {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.frame = null;
      this.obj_name = null;
      this.header = null;
      this.pick_pose = null;
      this.place_pose = null;
    }
    else {
      if (initObj.hasOwnProperty('frame')) {
        this.frame = initObj.frame
      }
      else {
        this.frame = '';
      }
      if (initObj.hasOwnProperty('obj_name')) {
        this.obj_name = initObj.obj_name
      }
      else {
        this.obj_name = '';
      }
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('pick_pose')) {
        this.pick_pose = initObj.pick_pose
      }
      else {
        this.pick_pose = new geometry_msgs.msg.Pose();
      }
      if (initObj.hasOwnProperty('place_pose')) {
        this.place_pose = initObj.place_pose
      }
      else {
        this.place_pose = new geometry_msgs.msg.Pose();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PickAndPlaceGoal
    // Serialize message field [frame]
    bufferOffset = _serializer.string(obj.frame, buffer, bufferOffset);
    // Serialize message field [obj_name]
    bufferOffset = _serializer.string(obj.obj_name, buffer, bufferOffset);
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [pick_pose]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.pick_pose, buffer, bufferOffset);
    // Serialize message field [place_pose]
    bufferOffset = geometry_msgs.msg.Pose.serialize(obj.place_pose, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PickAndPlaceGoal
    let len;
    let data = new PickAndPlaceGoal(null);
    // Deserialize message field [frame]
    data.frame = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [obj_name]
    data.obj_name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [pick_pose]
    data.pick_pose = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    // Deserialize message field [place_pose]
    data.place_pose = geometry_msgs.msg.Pose.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.frame.length;
    length += object.obj_name.length;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 120;
  }

  static datatype() {
    // Returns string type for a message object
    return 'turtlebot_arm_object_manipulation/PickAndPlaceGoal';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '1bcb111268b41ca6dd486e805ddf52aa';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
    # goal definition
    
    string frame
    string obj_name
    std_msgs/Header header
    geometry_msgs/Pose pick_pose
    geometry_msgs/Pose place_pose
    
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: geometry_msgs/Pose
    # A representation of pose in free space, composed of position and orientation. 
    Point position
    Quaternion orientation
    
    ================================================================================
    MSG: geometry_msgs/Point
    # This contains the position of a point in free space
    float64 x
    float64 y
    float64 z
    
    ================================================================================
    MSG: geometry_msgs/Quaternion
    # This represents an orientation in free space in quaternion form.
    
    float64 x
    float64 y
    float64 z
    float64 w
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PickAndPlaceGoal(null);
    if (msg.frame !== undefined) {
      resolved.frame = msg.frame;
    }
    else {
      resolved.frame = ''
    }

    if (msg.obj_name !== undefined) {
      resolved.obj_name = msg.obj_name;
    }
    else {
      resolved.obj_name = ''
    }

    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.pick_pose !== undefined) {
      resolved.pick_pose = geometry_msgs.msg.Pose.Resolve(msg.pick_pose)
    }
    else {
      resolved.pick_pose = new geometry_msgs.msg.Pose()
    }

    if (msg.place_pose !== undefined) {
      resolved.place_pose = geometry_msgs.msg.Pose.Resolve(msg.place_pose)
    }
    else {
      resolved.place_pose = new geometry_msgs.msg.Pose()
    }

    return resolved;
    }
};

module.exports = PickAndPlaceGoal;