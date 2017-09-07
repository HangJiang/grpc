/*
 * Copyright 2017 gRPC authors.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Automatically generated by tools/codegen/core/gen_stats_data.py
 */

#ifndef GRPC_CORE_LIB_DEBUG_STATS_DATA_H
#define GRPC_CORE_LIB_DEBUG_STATS_DATA_H

typedef enum {
  GRPC_STATS_COUNTER_CLIENT_CALLS_CREATED,
  GRPC_STATS_COUNTER_SERVER_CALLS_CREATED,
  GRPC_STATS_COUNTER_SYSCALL_WRITE,
  GRPC_STATS_COUNTER_SYSCALL_READ,
  GRPC_STATS_COUNTER_SYSCALL_POLL,
  GRPC_STATS_COUNTER_SYSCALL_WAIT,
  GRPC_STATS_COUNTER_COUNT
} grpc_stats_counters;
#define GRPC_STATS_INC_CLIENT_CALLS_CREATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_CLIENT_CALLS_CREATED)
#define GRPC_STATS_INC_SERVER_CALLS_CREATED(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SERVER_CALLS_CREATED)
#define GRPC_STATS_INC_SYSCALL_WRITE(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_WRITE)
#define GRPC_STATS_INC_SYSCALL_READ(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_READ)
#define GRPC_STATS_INC_SYSCALL_POLL(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_POLL)
#define GRPC_STATS_INC_SYSCALL_WAIT(exec_ctx) \
  GRPC_STATS_INC_COUNTER((exec_ctx), GRPC_STATS_COUNTER_SYSCALL_WAIT)
extern const char *grpc_stats_counter_name[GRPC_STATS_COUNTER_COUNT];

#endif /* GRPC_CORE_LIB_DEBUG_STATS_DATA_H */
