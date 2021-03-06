/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef task_TYPES_H
#define task_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct TaskCondition {
  enum type {
    MIN = 0,
    KILL_MOB = 1,
    kill_COLLECT = 2,
    PICK = 3,
    TALK = 4,
    USE_ITEM = 5,
    COLLECT_ITEM = 6,
    WAITE_TIME = 7,
    EQUIP_STRENGHT = 8,
    EQUIP_REFINE = 9,
    DIVINE_GEM = 10,
    SPIRIT_FEED = 11,
    EQUIP_INLAY = 12,
    SOUL_FEED = 13,
    EQUIP_SOUL = 14,
    ROLE_LV = 15,
    PASS_PLAYING = 16,
    PROTECT_TASK = 17,
    ANSWER_TASK = 18,
    SPORTS_TASK_1 = 19,
    SPORTS_TASK_2 = 20,
    SOUL_APPEAR = 21,
    EQUIPMENT = 22,
    CONSTELLATION_UP = 23,
    SUMMON_NPC = 24,
    GET_RESOURCE = 25,
    SPEND_RESOURCE = 26,
    ROB = 27,
    WATERING = 28,
    KILL_ACTOR = 29,
    KILL_MOB_LEVEL = 30,
    KILL_MOB_TYPE = 31,
    FINISH_TASK_TYPE = 32,
    GET_VIP_PRIVILEGE = 33,
    TRANSPORT = 34,
    MAX = 35
  };
};

extern const std::map<int, const char*> _TaskCondition_VALUES_TO_NAMES;

struct TaskCircleRefulshType {
  enum type {
    INVALID = 0,
    REFULSH_ROUND = 1,
    REFULSH_TASK_CONDITION = 2,
    REFULSH_CIRCLE = 3,
    REQUEST_FINISH_ROUND = 4,
    REQUEST_FINISH_CIRCLE = 5,
    REQUEST_OPEN_ROUND = 6
  };
};

extern const std::map<int, const char*> _TaskCircleRefulshType_VALUES_TO_NAMES;

struct TaskType {
  enum type {
    INVALID = 0,
    TASK_MAIN = 1,
    TASK_CIRCLE = 2,
    TASK_RISK = 3,
    TASK_TRIP = 4,
    TASK_DAILY = 5,
    TASK_TRANSPORT = 6
  };
};

extern const std::map<int, const char*> _TaskType_VALUES_TO_NAMES;

struct TaskCircleRoundState {
  enum type {
    INVALID = 0,
    ACTIVE = 1,
    FINISH = 2,
    PICKED_AWARD = 3
  };
};

extern const std::map<int, const char*> _TaskCircleRoundState_VALUES_TO_NAMES;

struct TaskTripOptType {
  enum type {
    INVALID = 0,
    REQUEST_FINISH = 1,
    REQUEST_GIVE_UP = 2,
    SPENT_FINISH = 3
  };
};

extern const std::map<int, const char*> _TaskTripOptType_VALUES_TO_NAMES;

struct RobTaskType {
  enum type {
    SUCCESS = 0,
    SUCCESS_AND_FAILED = 1
  };
};

extern const std::map<int, const char*> _RobTaskType_VALUES_TO_NAMES;

struct WateringTaskType {
  enum type {
    SELF = 0,
    OTHER = 1,
    SELF_AND_OTHER = 2
  };
};

extern const std::map<int, const char*> _WateringTaskType_VALUES_TO_NAMES;

struct TaskTransportStatus {
  enum type {
    MIN = 0,
    IDOL = 1,
    TRANSPORT = 2,
    FAILURE = 3,
    MAX = 4
  };
};

extern const std::map<int, const char*> _TaskTransportStatus_VALUES_TO_NAMES;

} // namespace

#endif
