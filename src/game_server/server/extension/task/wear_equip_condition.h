//
// Summary: buzz source code.
//
// Author: LuXuefeng.
// Email: lxf@gmail.com.
// Last modify: 2013-10-11 22:50:27.
// File name: wear_equip_condition.h
//
// Description:
//
#ifndef __GAME__SERVER__TASK__WEAR_EQUIP__CONDITION__H
#define __GAME__SERVER__TASK__WEAR_EQUIP__CONDITION__H

#include "core/base/types.h"
#include "game_server/server/event/game_event_types.h"
#include "game_server/server/extension/task/condition.h"

namespace game {

namespace server {

namespace task {

class WearEquipCondition : public Condition {
 public:
  WearEquipCondition();
  virtual ~WearEquipCondition();

  virtual bool Initialize(Task *task, core::uint32 param1, core::uint32 param2,
      core::uint32 value = 0);
  virtual void Finalize();

  virtual bool ExportConditionVar(core::uint32 &var, core::uint32 &value);

  virtual entity::TaskCondition::type GetType() const {
    return entity::TaskCondition::EQUIPMENT;
  }

  virtual bool CheckCondition();
  virtual void Synchronize();

  virtual void OnEvent(event::EventType::type type,
      const void *data, size_t size);

 private:
  void OnEventWearEquip(const void *data, size_t size);
 
  // 需要数目
  core::int32 require_num_;
  // 当前数目
  core::uint32 count_;
};

}  // namespace task

}  // namespace server

}  // namespace game

#endif  // __GAME__SERVER__TASK__REFINE_EQUIP__CONDITION__H

