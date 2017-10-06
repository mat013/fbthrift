/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp2/forward_compatibility_types.h"

#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp2/forward_compatibility_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "thrift/compiler/test/fixtures/forward_compatibility/gen-cpp2/forward_compatibility_data.h"



namespace cpp2 {

void OldStructure::__clear() {
  // clear all fields
  features.clear();
  __isset.__clear();
}

bool OldStructure::operator==(const OldStructure& rhs) const {
  if (!((features == rhs.features))) {
    return false;
  }
  return true;
}

const std::map<int16_t, double>& OldStructure::get_features() const& {
  return features;
}

std::map<int16_t, double> OldStructure::get_features() && {
  return std::move(features);
}

void OldStructure::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}

void swap(OldStructure& a, OldStructure& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template uint32_t OldStructure::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t OldStructure::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t OldStructure::read<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t OldStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t OldStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t OldStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void NewStructure::__clear() {
  // clear all fields
  features.clear();
  __isset.__clear();
}

bool NewStructure::operator==(const NewStructure& rhs) const {
  if (!((features == rhs.features))) {
    return false;
  }
  return true;
}

const std::map<int16_t, double>& NewStructure::get_features() const& {
  return features;
}

std::map<int16_t, double> NewStructure::get_features() && {
  return std::move(features);
}

void NewStructure::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}

void swap(NewStructure& a, NewStructure& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template uint32_t NewStructure::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure::read<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructure::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructure::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructure::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

void NewStructure2::__clear() {
  // clear all fields
  features.clear();
  __isset.__clear();
}

bool NewStructure2::operator==(const NewStructure2& rhs) const {
  if (!((features == rhs.features))) {
    return false;
  }
  return true;
}

const  ::cpp2::FloatFeatures& NewStructure2::get_features() const& {
  return features;
}

 ::cpp2::FloatFeatures NewStructure2::get_features() && {
  return std::move(features);
}

void NewStructure2::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "features") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}

void swap(NewStructure2& a, NewStructure2& b) {
  using ::std::swap;
  swap(a.features, b.features);
  swap(a.__isset, b.__isset);
}

template uint32_t NewStructure2::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t NewStructure2::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t NewStructure2::read<>(apache::thrift::SimpleJSONProtocolReader*);
template uint32_t NewStructure2::write<>(apache::thrift::SimpleJSONProtocolWriter*) const;
template uint32_t NewStructure2::serializedSize<>(apache::thrift::SimpleJSONProtocolWriter const*) const;
template uint32_t NewStructure2::serializedSizeZC<>(apache::thrift::SimpleJSONProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2