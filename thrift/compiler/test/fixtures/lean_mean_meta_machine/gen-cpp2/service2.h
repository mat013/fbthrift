/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/ServiceIncludes.h>
#include <thrift/lib/cpp2/async/AsyncClient.h>
#include <thrift/lib/cpp2/async/HeaderChannel.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/async/FutureRequest.h>
#include <folly/futures/Future.h>



#include "thrift/compiler/test/fixtures/lean_mean_meta_machine/gen-cpp2/module_types.h"

namespace folly {
  class IOBuf;
  class IOBufQueue;
}
namespace apache { namespace thrift {
  class Cpp2RequestContext;
  class BinaryProtocolReader;
  class CompactProtocolReader;
  namespace transport { class THeader; }
}}

namespace test_cpp2 { namespace cpp_reflection {

class service2SvAsyncIf {
 public:
  virtual ~service2SvAsyncIf() {}
  virtual void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) = 0;
  virtual folly::Future<folly::Unit> future_methodA() = 0;
  virtual void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual folly::Future<folly::Unit> future_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) = 0;
  virtual void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) = 0;
  virtual folly::Future<int32_t> future_methodC() = 0;
  virtual void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual folly::Future<int32_t> future_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) = 0;
  virtual void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) = 0;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodE() = 0;
  virtual void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
  virtual folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) = 0;
};

class service2AsyncProcessor;

class service2SvIf : public service2SvAsyncIf, public apache::thrift::ServerInterface {
 public:
  typedef service2AsyncProcessor ProcessorType;
  std::unique_ptr<apache::thrift::AsyncProcessor> getProcessor() override;
  virtual void methodA();
  folly::Future<folly::Unit> future_methodA() override;
  void async_tm_methodA(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) override;
  virtual void methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/);
  folly::Future<folly::Unit> future_methodB(int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  void async_tm_methodB(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback, int32_t x, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> y, double z) override;
  virtual int32_t methodC();
  folly::Future<int32_t> future_methodC() override;
  void async_tm_methodC(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) override;
  virtual int32_t methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/);
  folly::Future<int32_t> future_methodD(int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  void async_tm_methodD(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback, int32_t i, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> j, double k) override;
  virtual void methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodE() override;
  void async_tm_methodE(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback) override;
  virtual void methodF( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/);
  folly::Future<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>> future_methodF(int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
  void async_tm_methodF(std::unique_ptr<apache::thrift::HandlerCallback<std::unique_ptr< ::test_cpp2::cpp_reflection::struct2>>> callback, int32_t l, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> m, double n) override;
};

class service2SvNull : public service2SvIf {
 public:
  void methodA() override;
  void methodB(int32_t /*x*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*y*/, double /*z*/) override;
  int32_t methodC() override;
  int32_t methodD(int32_t /*i*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*j*/, double /*k*/) override;
  void methodE( ::test_cpp2::cpp_reflection::struct2& /*_return*/) override;
  void methodF( ::test_cpp2::cpp_reflection::struct2& /*_return*/, int32_t /*l*/, std::unique_ptr< ::test_cpp2::cpp_reflection::struct1> /*m*/, double /*n*/) override;
};

class service2AsyncProcessor : public ::apache::thrift::GeneratedAsyncProcessor {
 public:
  const char* getServiceName() override;
  using BaseAsyncProcessor = void;
  using HasFrozen2 = std::false_type;
 protected:
  service2SvIf* iface_;
  folly::Optional<std::string> getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) override;
 public:
  void process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) override;
 protected:
  bool isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) override;
 private:
  static std::unordered_set<std::string> onewayMethods_;
  static std::unordered_map<std::string, int16_t> cacheKeyMap_;
 public:
  using BinaryProtocolProcessFunc = ProcessFunc<service2AsyncProcessor, apache::thrift::BinaryProtocolReader>;
  using BinaryProtocolProcessMap = ProcessMap<BinaryProtocolProcessFunc>;
  static const service2AsyncProcessor::BinaryProtocolProcessMap& getBinaryProtocolProcessMap();
 private:
  static const service2AsyncProcessor::BinaryProtocolProcessMap binaryProcessMap_;
 public:
  using CompactProtocolProcessFunc = ProcessFunc<service2AsyncProcessor, apache::thrift::CompactProtocolReader>;
  using CompactProtocolProcessMap = ProcessMap<CompactProtocolProcessFunc>;
  static const service2AsyncProcessor::CompactProtocolProcessMap& getCompactProtocolProcessMap();
 private:
  static const service2AsyncProcessor::CompactProtocolProcessMap compactProcessMap_;
 private:
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodA(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodA(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodA(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodA(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodB(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodB(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodB(int32_t protoSeqId, apache::thrift::ContextStack* ctx);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodB(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodC(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodC(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodC(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodC(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodD(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodD(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodD(int32_t protoSeqId, apache::thrift::ContextStack* ctx, int32_t const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodD(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodE(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodE(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodE(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodE(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void _processInThread_methodF(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot, apache::thrift::Cpp2RequestContext* ctx, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <typename ProtocolIn_, typename ProtocolOut_>
  void process_methodF(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, std::unique_ptr<ProtocolIn_> iprot,apache::thrift::Cpp2RequestContext* ctx,folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm);
  template <class ProtocolIn_, class ProtocolOut_>
  static folly::IOBufQueue return_methodF(int32_t protoSeqId, apache::thrift::ContextStack* ctx,  ::test_cpp2::cpp_reflection::struct2 const& _return);
  template <class ProtocolIn_, class ProtocolOut_>
  static void throw_wrapped_methodF(std::unique_ptr<apache::thrift::ResponseChannel::Request> req,int32_t protoSeqId,apache::thrift::ContextStack* ctx,folly::exception_wrapper ew,apache::thrift::Cpp2RequestContext* reqCtx);
 public:
  service2AsyncProcessor(service2SvIf* iface) :
      iface_(iface) {}

  virtual ~service2AsyncProcessor() {}
};

class service2AsyncClient : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "service2";
  }
  virtual void methodA(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodA(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void methodAImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_methodA();
  virtual void sync_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<folly::Unit> future_methodA();
  virtual folly::Future<folly::Unit> future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodA(apache::thrift::RpcOptions& rpcOptions);
  virtual void methodA(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
  static void recv_methodA(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodA(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodA(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodAT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodAT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_methodAT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void methodB(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void methodB(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
 private:
  virtual void methodBImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
 public:
  virtual void sync_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void sync_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<folly::Unit> future_methodB(int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<folly::Unit> future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodB(apache::thrift::RpcOptions& rpcOptions, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  virtual void methodB(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  static folly::exception_wrapper recv_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
  static void recv_methodB(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodB(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodB(::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodBT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t x, const  ::test_cpp2::cpp_reflection::struct1& y, double z);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodBT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_methodBT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void methodC(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodC(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void methodCImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual int32_t sync_methodC();
  virtual int32_t sync_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<int32_t> future_methodC();
  virtual folly::Future<int32_t> future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodC(apache::thrift::RpcOptions& rpcOptions);
  virtual void methodC(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_methodC(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_methodC(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodC(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodCT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodCT(Protocol_* prot, int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static int32_t recv_methodCT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void methodD(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual void methodD(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
 private:
  virtual void methodDImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
 public:
  virtual int32_t sync_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual int32_t sync_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<int32_t> future_methodD(int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<int32_t> future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual folly::Future<std::pair<int32_t, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodD(apache::thrift::RpcOptions& rpcOptions, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  virtual void methodD(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  static folly::exception_wrapper recv_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  static int32_t recv_methodD(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual int32_t recv_instance_methodD(::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodD(int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodDT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t i, const  ::test_cpp2::cpp_reflection::struct1& j, double k);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodDT(Protocol_* prot, int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static int32_t recv_methodDT(Protocol_* prot, ::apache::thrift::ClientReceiveState& state);
  virtual void methodE(std::unique_ptr<apache::thrift::RequestCallback> callback);
  virtual void methodE(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 private:
  virtual void methodEImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 public:
  virtual void sync_methodE( ::test_cpp2::cpp_reflection::struct2& _return);
  virtual void sync_methodE(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodE();
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodE(apache::thrift::RpcOptions& rpcOptions);
  virtual void methodE(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);
  static folly::exception_wrapper recv_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodE( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodET(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodET(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_methodET(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual void methodF(std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void methodF(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
 private:
  virtual void methodFImpl(bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
 public:
  virtual void sync_methodF( ::test_cpp2::cpp_reflection::struct2& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void sync_methodF(apache::thrift::RpcOptions& rpcOptions,  ::test_cpp2::cpp_reflection::struct2& _return, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodF(int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future< ::test_cpp2::cpp_reflection::struct2> future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual folly::Future<std::pair< ::test_cpp2::cpp_reflection::struct2, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_methodF(apache::thrift::RpcOptions& rpcOptions, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  virtual void methodF(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  static folly::exception_wrapper recv_wrapped_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  static void recv_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  virtual void recv_instance_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  virtual folly::exception_wrapper recv_instance_wrapped_methodF( ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  void methodFT(Protocol_* prot, bool useSync, apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, int32_t l, const  ::test_cpp2::cpp_reflection::struct1& m, double n);
  template <typename Protocol_>
  static folly::exception_wrapper recv_wrapped_methodFT(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
  template <typename Protocol_>
  static void recv_methodFT(Protocol_* prot,  ::test_cpp2::cpp_reflection::struct2& _return, ::apache::thrift::ClientReceiveState& state);
};

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
