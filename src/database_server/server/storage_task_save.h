//
// Summary: buzz source code.
//
// Author: Tony.
// Email: tonyjobmails@gmail.com.
// Last modify: 2013-07-15 15:07:46.
// File name: storage_task_save.h
//
// Description:
// Define class StorageTaskSave.
//

#ifndef __DATABASE__SERVER__STORAGE__TASK__SAVE__H
#define __DATABASE__SERVER__STORAGE__TASK__SAVE__H

#include "core/base/noncopyable.h"
#include "database_server/protocol/async_request_types.h"
#include "database_server/protocol/database_protocol_types.h"
#include "database_server/protocol/storage_task_save_types.h"

namespace database {

namespace server {

class AsyncRequestLoop;

class StorageTaskSave : public core::Noncopyable {
 public:
  StorageTaskSave();
  ~StorageTaskSave();

  bool Initialize(AsyncRequestLoop *async_request_loop);

 private:
  void Request(const protocol::AsyncRequestMessage &message);

  void ResponseFailed(protocol::ResponseType::type result,
      const protocol::AsyncRequestMessage &request);

  void OnResponse(const protocol::StorageTaskSaveResponse &response,
      protocol::ResponseType::type result, const protocol::AsyncRequestMessage &request);

  AsyncRequestLoop *async_request_loop_;
};

}  // namespace server

}  // namespace database

#endif  // __DATABASE__SERVER__STORAGE__TASK__SAVE__H

