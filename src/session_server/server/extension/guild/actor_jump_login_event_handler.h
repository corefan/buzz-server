#ifndef __SESSION__SERVER__GUILD__ACTOR__JUMP__LOGIN__EVENT__HANDLER__H
#define __SESSION__SERVER__GUILD__ACTOR__JUMP__LOGIN__EVENT__HANDLER__H

#include <cstddef>

#include "core/base/noncopyable.h"
#include "core/base/types.h"
#include "coresh/communicator.h"

namespace session {

namespace server {

namespace guild {

class ActorJumpLoginEventHandler : public core::Noncopyable {
 public:
  ActorJumpLoginEventHandler();
  ~ActorJumpLoginEventHandler();

  bool Initialize();
  void Finalize();

 private:
  void OnEvent(core::uint64 channel, core::uint8 channel_type,
      const void *message, size_t size);

  coresh::Communicator::Connection conn_;
};

}  // namespace guild

}  // namespace server

}  // namespace session

#endif  // __SESSION__SERVER__GUILD__ACTOR__JUMP__LOGIN__EVENT__HANDLER__H 

