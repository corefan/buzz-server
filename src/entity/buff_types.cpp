/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "buff_types.h"

#include <algorithm>

namespace entity {

int _kBuffTypeValues[] = {
  BuffType::MIN,
  BuffType::COMMON,
  BuffType::DOT_BUFF,
  BuffType::DOT_HURT,
  BuffType::CONDITION,
  BuffType::MAX
};
const char* _kBuffTypeNames[] = {
  "MIN",
  "COMMON",
  "DOT_BUFF",
  "DOT_HURT",
  "CONDITION",
  "MAX"
};
const std::map<int, const char*> _BuffType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(6, _kBuffTypeValues, _kBuffTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kBuffBroadcastTypeValues[] = {
  BuffBroadcastType::MIN,
  BuffBroadcastType::BROAD,
  BuffBroadcastType::SINGLE,
  BuffBroadcastType::NONE,
  BuffBroadcastType::MAX
};
const char* _kBuffBroadcastTypeNames[] = {
  "MIN",
  "BROAD",
  "SINGLE",
  "NONE",
  "MAX"
};
const std::map<int, const char*> _BuffBroadcastType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kBuffBroadcastTypeValues, _kBuffBroadcastTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kBuffEndConditionTypeValues[] = {
  BuffEndConditionType::MIN,
  BuffEndConditionType::DEAD,
  BuffEndConditionType::HURT,
  BuffEndConditionType::CURRENT_ENERGY_DEPLETED,
  BuffEndConditionType::MAX
};
const char* _kBuffEndConditionTypeNames[] = {
  "MIN",
  "DEAD",
  "HURT",
  "CURRENT_ENERGY_DEPLETED",
  "MAX"
};
const std::map<int, const char*> _BuffEndConditionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kBuffEndConditionTypeValues, _kBuffEndConditionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

int _kBuffConditionTypeValues[] = {
  BuffConditionType::MIN,
  BuffConditionType::HP_PERCENT_BELOW,
  BuffConditionType::HP_PERCENT_ABOVE,
  BuffConditionType::HP_PERCENT_EQUAL,
  BuffConditionType::MP_PERCENT_BELOW,
  BuffConditionType::MP_PERCENT_ABOVE,
  BuffConditionType::MP_PERCENT_EQUAL,
  BuffConditionType::HP_VALUE_BELOW,
  BuffConditionType::HP_VALUE_ABOVE,
  BuffConditionType::HP_VALUE_EQUAL,
  BuffConditionType::MP_VALUE_BELOW,
  BuffConditionType::MP_VALUE_ABOVE,
  BuffConditionType::MP_VALUE_EQUAL,
  BuffConditionType::ATTACK_HIT,
  BuffConditionType::ATTACK_DODGE,
  BuffConditionType::ATTACK_CRIT,
  BuffConditionType::ATTACK_IGNORE_DEFENCE,
  BuffConditionType::ATTACKED_HIT,
  BuffConditionType::ATTACKED_DODGE,
  BuffConditionType::ATTACKED_CRIT,
  BuffConditionType::ATTACKED_IGNORE_DEFENCE,
  BuffConditionType::SOUL_STATUS,
  BuffConditionType::NOT_SOUL_STATUS,
  BuffConditionType::FORBID_USE_SKILL,
  BuffConditionType::FORBID_MOVE,
  BuffConditionType::FORBID_USE_ITEM,
  BuffConditionType::BUFF,
  BuffConditionType::BUFF_GROUP,
  BuffConditionType::SKILL_USE,
  BuffConditionType::SKILL_GROUP_USE,
  BuffConditionType::MAX
};
const char* _kBuffConditionTypeNames[] = {
  "MIN",
  "HP_PERCENT_BELOW",
  "HP_PERCENT_ABOVE",
  "HP_PERCENT_EQUAL",
  "MP_PERCENT_BELOW",
  "MP_PERCENT_ABOVE",
  "MP_PERCENT_EQUAL",
  "HP_VALUE_BELOW",
  "HP_VALUE_ABOVE",
  "HP_VALUE_EQUAL",
  "MP_VALUE_BELOW",
  "MP_VALUE_ABOVE",
  "MP_VALUE_EQUAL",
  "ATTACK_HIT",
  "ATTACK_DODGE",
  "ATTACK_CRIT",
  "ATTACK_IGNORE_DEFENCE",
  "ATTACKED_HIT",
  "ATTACKED_DODGE",
  "ATTACKED_CRIT",
  "ATTACKED_IGNORE_DEFENCE",
  "SOUL_STATUS",
  "NOT_SOUL_STATUS",
  "FORBID_USE_SKILL",
  "FORBID_MOVE",
  "FORBID_USE_ITEM",
  "BUFF",
  "BUFF_GROUP",
  "SKILL_USE",
  "SKILL_GROUP_USE",
  "MAX"
};
const std::map<int, const char*> _BuffConditionType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(31, _kBuffConditionTypeValues, _kBuffConditionTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace
