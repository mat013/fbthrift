/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/futures/Future.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include "src/gen-cpp2/module_types.h"
#include <yarpl/Flowable.h>

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;

  template <typename T>
  using Stream = yarpl::Reference<yarpl::flowable::Flowable<T>>;

  namespace transport { class THeader; }
}}

namespace cpp2 {

class PubSubStreamingServiceAsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "PubSubStreamingService";
  }

  virtual void client(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void client(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void clientImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_client(apache::thrift::Stream<int32_t> foo);
  virtual void sync_client(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_client(apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_client(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_client(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual void client(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foo);
  static folly::exception_wrapper recv_wrapped_client(::apache::thrift::ClientReceiveState& state);
  static void recv_client(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_client(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_client(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void clientT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 public:
  virtual void server(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void server(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void serverImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_server(apache::thrift::Stream<int32_t> foo);
  virtual void sync_server(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_server(apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_server(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_server(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual void server(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foo);
  static folly::exception_wrapper recv_wrapped_server(::apache::thrift::ClientReceiveState& state);
  static void recv_server(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_server(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_server(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void serverT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 public:
  virtual void both(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void both(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void bothImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_both(apache::thrift::Stream<int32_t> foo);
  virtual void sync_both(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_both(apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<folly::Unit> future_both(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_both(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foo);
  virtual void both(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foo);
  static folly::exception_wrapper recv_wrapped_both(::apache::thrift::ClientReceiveState& state);
  static void recv_both(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_both(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_both(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void bothT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foo);
 public:
 protected:
  virtual void returnstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
  virtual void returnstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 private:
  virtual void returnstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual apache::thrift::Stream<int32_t> returnstream(int32_t i32_from, int32_t i32_to);
  virtual apache::thrift::Stream<int32_t> returnstream(apache::thrift::RpcOptions& rpcOptions, int32_t i32_from, int32_t i32_to);
  static folly::exception_wrapper recv_wrapped_returnstream(::apache::thrift::ClientReceiveState& state);
  static void recv_returnstream(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void returnstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i32_from, int32_t i32_to);
 public:
  virtual void takesstream(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t other_param);
  virtual void takesstream(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t other_param);
 private:
  virtual void takesstreamImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t other_param);
 public:
  virtual void sync_takesstream(apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual void sync_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<folly::Unit> future_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_takesstream(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  virtual void takesstream(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
  static folly::exception_wrapper recv_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
  static void recv_takesstream(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_takesstream(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_takesstream(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void takesstreamT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> instream, int32_t other_param);
 public:
  virtual void clientthrows(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void clientthrows(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void clientthrowsImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_clientthrows(apache::thrift::Stream<int32_t> foostream);
  virtual void sync_clientthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foostream);
  virtual folly::Future<folly::Unit> future_clientthrows(apache::thrift::Stream<int32_t> foostream);
  virtual folly::Future<folly::Unit> future_clientthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foostream);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_clientthrows(apache::thrift::RpcOptions& rpcOptions, apache::thrift::Stream<int32_t> foostream);
  virtual void clientthrows(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, apache::thrift::Stream<int32_t> foostream);
  static folly::exception_wrapper recv_wrapped_clientthrows(::apache::thrift::ClientReceiveState& state);
  static void recv_clientthrows(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_clientthrows(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_clientthrows(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  void clientthrowsT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, apache::thrift::Stream<int32_t> foostream);
 public:
};

} // cpp2
