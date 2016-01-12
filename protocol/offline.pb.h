// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: offline.proto

#ifndef PROTOBUF_offline_2eproto__INCLUDED
#define PROTOBUF_offline_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_offline_2eproto();
void protobuf_AssignDesc_offline_2eproto();
void protobuf_ShutdownFile_offline_2eproto();

class Offline;

// ===================================================================

class Offline : public ::google::protobuf::Message {
 public:
  Offline();
  virtual ~Offline();

  Offline(const Offline& from);

  inline Offline& operator=(const Offline& from) {
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
  static const Offline& default_instance();

  void Swap(Offline* other);

  // implements Message ----------------------------------------------

  Offline* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Offline& from);
  void MergeFrom(const Offline& from);
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

  // required uint32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint32 id() const;
  inline void set_id(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:Offline)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_offline_2eproto();
  friend void protobuf_AssignDesc_offline_2eproto();
  friend void protobuf_ShutdownFile_offline_2eproto();

  void InitAsDefaultInstance();
  static Offline* default_instance_;
};
// ===================================================================


// ===================================================================

// Offline

// required uint32 id = 1;
inline bool Offline::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Offline::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Offline::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Offline::clear_id() {
  id_ = 0u;
  clear_has_id();
}
inline ::google::protobuf::uint32 Offline::id() const {
  return id_;
}
inline void Offline::set_id(::google::protobuf::uint32 value) {
  set_has_id();
  id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_offline_2eproto__INCLUDED
