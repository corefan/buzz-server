/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef inform_TYPES_H
#define inform_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>



namespace entity {

struct InformType {
  enum type {
    MIN = 0,
    SKILL_KILL_ACTOR = 1,
    SKILL_KILLED_BY_ACTOR = 2,
    SKILL_KILLED_BY_NPC = 3,
    GEM_GET_ORANGE_GEM = 4,
    GEM_HIGH_LEVEL = 5,
    GEM_TOP_LEVEL = 6,
    EQUIPMENT_INTENSIFY_HIGH_LEVEL = 7,
    EQUIPMENT_INTENSIFY_TOP_LEVEL = 8,
    EQUIPMENT_UPGRADE = 9,
    EQUIPMENT_REFINE = 10,
    SOUL_TOP_LEVEL = 11,
    TASK_CIRCLE_QUICK_FINISH_ROUND = 12,
    ATTR_NOBLE_ENABLE_FUNC = 13,
    ATTR_NOBLE_UPGRADE_LEVEL = 14,
    ATTR_NOBLE_TOP_LEVEL = 15,
    ATTR_ELEMENT_UPGRADE = 16,
    ATTR_ELEMENT_TOP_LEVEL = 17,
    ATTR_SPIRIT_HIGH_LEVEL = 18,
    ATTR_SPIRIT_TOP_LEVEL = 19,
    ATTR_SWORD_ENABLE_FUNC = 20,
    ATTR_SWORD_UPGRADE_LEVEL = 21,
    ATTR_SWORD_TOP_LEVEL = 22,
    PLAYING_MEMBER_PERIOD_COUNT_ERROR = 23,
    PLAYING_MEMBER_LEVEL_ERROR = 24,
    PLAYING_MEMBER_NUMBER_ERROR = 25,
    PLAYING_MEMBER_PLAYING_ERROR = 26,
    GUILD_CREATE = 27,
    GUILD_REFUSE_INVITE = 28,
    GUILD_REFUSE_JOIN = 29,
    GUILD_JOIN = 30,
    GUILD_LEAVE = 31,
    GUILD_SET_MEMBER_POSITION = 32,
    GUILD_RESET_MEMBER_POSITION = 33,
    GUILD_GIVE_UP_POSITION = 34,
    GUILD_GIVE_UP_LEADER_POSITION = 35,
    GUILD_UPGRADE = 36,
    GUILD_SHOP_UPGRADE = 37,
    GUILD_COLLEGE_UPGRADE = 38,
    GUILD_BARRACK_UPGRADE = 39,
    GUILD_DONATE = 40,
    GUILD_HIGH_LEVEL = 41,
    ACTOR_ALTER_VIP_LEVEL3 = 42,
    SCENE_BOSS_SUMMON = 43,
    MAX = 44
  };
};

extern const std::map<int, const char*> _InformType_VALUES_TO_NAMES;

} // namespace

#endif