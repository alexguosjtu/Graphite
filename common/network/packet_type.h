#ifndef __PACKET_TYPE_H__
#define __PACKET_TYPE_H__

#include <string>

enum PacketType
{
   INVALID_PACKET_TYPE,
   USER,
   SHARED_MEM,
   DVFS_SET_REQUEST,
   DVFS_SET_REPLY,
   DVFS_GET_REQUEST,
   DVFS_GET_REPLY,
   GET_TILE_ENERGY_REQUEST,
   GET_TILE_ENERGY_REPLY,
   SIM_THREAD_TERMINATE_THREADS,
   MCP_REQUEST_TYPE,
   MCP_RESPONSE_TYPE,
   MCP_SYSTEM_TYPE,
   MCP_SYSTEM_RESPONSE_TYPE,
   MCP_THREAD_SPAWN_REPLY_FROM_MASTER_TYPE,
   MCP_THREAD_YIELD_REPLY_FROM_MASTER_TYPE,
   MCP_THREAD_EXIT_REPLY_FROM_MASTER_TYPE,
   MCP_THREAD_GETAFFINITY_REPLY_FROM_MASTER_TYPE,
   MCP_THREAD_QUERY_INDEX_REPLY_FROM_MASTER_TYPE,
   MCP_THREAD_JOIN_REPLY,
   LCP_COMM_ID_UPDATE_REPLY,
   LCP_TOGGLE_PERFORMANCE_COUNTERS_ACK,
   SYSTEM_INITIALIZATION_NOTIFY,
   SYSTEM_INITIALIZATION_ACK,
   SYSTEM_INITIALIZATION_FINI,
   CLOCK_SKEW_MINIMIZATION,
   REMOTE_QUERY,
   REMOTE_QUERY_RESPONSE,
   NUM_PACKET_TYPES
};

// This defines the different static network types
enum EStaticNetwork
{
   STATIC_NETWORK_USER,
   STATIC_NETWORK_MEMORY,
   STATIC_NETWORK_SYSTEM,
   STATIC_NETWORK_DVFS,
   NUM_STATIC_NETWORKS
};

// This gives the list of names for the static networks
static std::string g_static_network_name_list[] __attribute__((unused)) =
{
   "User",
   "Memory",
   "System",
   "DVFS"
};

// Packets are routed to a static network based on their type. This
// gives the static network to use for a given packet type.
static EStaticNetwork g_type_to_static_network_map[] __attribute__((unused)) =
{
   STATIC_NETWORK_SYSTEM,        // INVALID_PACKET_TYPE
   STATIC_NETWORK_USER,          // USER
   STATIC_NETWORK_MEMORY,        // SHARED_MEM
   STATIC_NETWORK_DVFS,          // DVFS_SET_REQUEST
   STATIC_NETWORK_DVFS,          // DVFS_SET_REPLY
   STATIC_NETWORK_DVFS,          // DVFS_GET_REQUEST
   STATIC_NETWORK_DVFS,          // DVFS_GET_REPLY
   STATIC_NETWORK_DVFS,          // GET_TILE_ENERGY_REQUEST
   STATIC_NETWORK_DVFS,          // GET_TILE_ENERGY_REPLY
   STATIC_NETWORK_SYSTEM,        // ST_TERMINATE_THREADS
   STATIC_NETWORK_USER,          // MCP_REQ
   STATIC_NETWORK_USER,          // MCP_RESP
   STATIC_NETWORK_SYSTEM,        // MCP_SYSTEM
   STATIC_NETWORK_SYSTEM,        // MCP_SYSTEM_RESP
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_SPAWN
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_YIELD
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_EXIT
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_GETAFFINITY
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_QUERY_INDEX
   STATIC_NETWORK_SYSTEM,        // MCP_THREAD_JOIN
   STATIC_NETWORK_SYSTEM,        // LCP_COMM_ID
   STATIC_NETWORK_SYSTEM,        // LCP_TOGGLE_PERFORMANCE_COUNTERS_ACK
   STATIC_NETWORK_SYSTEM,        // SYSTEM_INITIALIZATION_NOTIFY
   STATIC_NETWORK_SYSTEM,        // SYSTEM_INITIALIZATION_ACK
   STATIC_NETWORK_SYSTEM,        // SYSTEM_INITIALIZATION_FINI
   STATIC_NETWORK_SYSTEM,        // CLOCK_SKEW_MINIMIZATION
   STATIC_NETWORK_SYSTEM,        // REMOTE_QUERY
   STATIC_NETWORK_SYSTEM         // REMOTE_QUERY_RESPONSE
};

#endif
