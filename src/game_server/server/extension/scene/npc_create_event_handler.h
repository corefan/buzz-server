//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-04-22 14:06:15.
// File name: npc_create_event_handler.h
//
// Description:
// Define class NpcCreateEventHandler.
//

#ifndef __GAME__SERVER__SCENE__NPC__CREATE__EVENT__HANDLER__H
#define __GAME__SERVER__SCENE__NPC__CREATE__EVENT__HANDLER__H

#include <stddef.h>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace game {

namespace server {

namespace scene {

class NpcCreateEventHandler : public core::Noncopyable {
 public:
  NpcCreateEventHandler();
  ~NpcCreateEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnCreateEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);
  void OnDestoryEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection connection_create_;
  coresh::Communicator::Connection connection_destory_;
};

}  // namespace scene

}  // namespace server

}  // namespace game

#endif  // __GAME__SERVER__SCENE__NPC__CREATE__EVENT__HANDLER__H

