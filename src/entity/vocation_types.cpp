/**
 * Autogenerated by Thrift Compiler (0.9.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "vocation_types.h"

#include <algorithm>

namespace entity {

int _kVocationTypeValues[] = {
  VocationType::MIN,
  VocationType::AXE,
  VocationType::SHOOT,
  VocationType::MAGIC,
  VocationType::MAX
};
const char* _kVocationTypeNames[] = {
  "MIN",
  "AXE",
  "SHOOT",
  "MAGIC",
  "MAX"
};
const std::map<int, const char*> _VocationType_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(5, _kVocationTypeValues, _kVocationTypeNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));

} // namespace
