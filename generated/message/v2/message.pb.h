// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message/v2/message.proto

#ifndef PROTOBUF_message_2fv2_2fmessage_2eproto__INCLUDED
#define PROTOBUF_message_2fv2_2fmessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protobuf_v2_benchmark {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_message_2fv2_2fmessage_2eproto();
void protobuf_AssignDesc_message_2fv2_2fmessage_2eproto();
void protobuf_ShutdownFile_message_2fv2_2fmessage_2eproto();

class Record;

// ===================================================================

class Record : public ::google::protobuf::Message {
 public:
  Record();
  virtual ~Record();

  Record(const Record& from);

  inline Record& operator=(const Record& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Record& default_instance();

  void Swap(Record* other);

  // implements Message ----------------------------------------------

  Record* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Record& from);
  void MergeFrom(const Record& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 ids = 1;
  inline int ids_size() const;
  inline void clear_ids();
  static const int kIdsFieldNumber = 1;
  inline ::google::protobuf::int64 ids(int index) const;
  inline void set_ids(int index, ::google::protobuf::int64 value);
  inline void add_ids(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      ids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_ids();

  // repeated string strings = 2;
  inline int strings_size() const;
  inline void clear_strings();
  static const int kStringsFieldNumber = 2;
  inline const ::std::string& strings(int index) const;
  inline ::std::string* mutable_strings(int index);
  inline void set_strings(int index, const ::std::string& value);
  inline void set_strings(int index, const char* value);
  inline void set_strings(int index, const char* value, size_t size);
  inline ::std::string* add_strings();
  inline void add_strings(const ::std::string& value);
  inline void add_strings(const char* value);
  inline void add_strings(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& strings() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_strings();

  // @@protoc_insertion_point(class_scope:protobuf_v2_benchmark.Record)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > ids_;
  ::google::protobuf::RepeatedPtrField< ::std::string> strings_;
  friend void  protobuf_AddDesc_message_2fv2_2fmessage_2eproto();
  friend void protobuf_AssignDesc_message_2fv2_2fmessage_2eproto();
  friend void protobuf_ShutdownFile_message_2fv2_2fmessage_2eproto();

  void InitAsDefaultInstance();
  static Record* default_instance_;
};
// ===================================================================


// ===================================================================

// Record

// repeated int64 ids = 1;
inline int Record::ids_size() const {
  return ids_.size();
}
inline void Record::clear_ids() {
  ids_.Clear();
}
inline ::google::protobuf::int64 Record::ids(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_v2_benchmark.Record.ids)
  return ids_.Get(index);
}
inline void Record::set_ids(int index, ::google::protobuf::int64 value) {
  ids_.Set(index, value);
  // @@protoc_insertion_point(field_set:protobuf_v2_benchmark.Record.ids)
}
inline void Record::add_ids(::google::protobuf::int64 value) {
  ids_.Add(value);
  // @@protoc_insertion_point(field_add:protobuf_v2_benchmark.Record.ids)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
Record::ids() const {
  // @@protoc_insertion_point(field_list:protobuf_v2_benchmark.Record.ids)
  return ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
Record::mutable_ids() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_v2_benchmark.Record.ids)
  return &ids_;
}

// repeated string strings = 2;
inline int Record::strings_size() const {
  return strings_.size();
}
inline void Record::clear_strings() {
  strings_.Clear();
}
inline const ::std::string& Record::strings(int index) const {
  // @@protoc_insertion_point(field_get:protobuf_v2_benchmark.Record.strings)
  return strings_.Get(index);
}
inline ::std::string* Record::mutable_strings(int index) {
  // @@protoc_insertion_point(field_mutable:protobuf_v2_benchmark.Record.strings)
  return strings_.Mutable(index);
}
inline void Record::set_strings(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protobuf_v2_benchmark.Record.strings)
  strings_.Mutable(index)->assign(value);
}
inline void Record::set_strings(int index, const char* value) {
  strings_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protobuf_v2_benchmark.Record.strings)
}
inline void Record::set_strings(int index, const char* value, size_t size) {
  strings_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protobuf_v2_benchmark.Record.strings)
}
inline ::std::string* Record::add_strings() {
  return strings_.Add();
}
inline void Record::add_strings(const ::std::string& value) {
  strings_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protobuf_v2_benchmark.Record.strings)
}
inline void Record::add_strings(const char* value) {
  strings_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protobuf_v2_benchmark.Record.strings)
}
inline void Record::add_strings(const char* value, size_t size) {
  strings_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protobuf_v2_benchmark.Record.strings)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Record::strings() const {
  // @@protoc_insertion_point(field_list:protobuf_v2_benchmark.Record.strings)
  return strings_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Record::mutable_strings() {
  // @@protoc_insertion_point(field_mutable_list:protobuf_v2_benchmark.Record.strings)
  return &strings_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_v2_benchmark

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_message_2fv2_2fmessage_2eproto__INCLUDED
