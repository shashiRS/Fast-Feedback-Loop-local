// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_BASICINFO_PROFILER_H_
#define FLATBUFFERS_GENERATED_BASICINFO_PROFILER_H_

#include "flatbuffers/flatbuffers.h"

namespace profiler {

struct Basic;
struct BasicBuilder;
struct BasicT;

struct BasicInformation;
struct BasicInformationBuilder;
struct BasicInformationT;

struct BasicT : public flatbuffers::NativeTable {
  typedef Basic TableType;
  std::string name{};
};

struct Basic FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BasicT NativeTableType;
  typedef BasicBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           verifier.EndTable();
  }
  BasicT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(BasicT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<Basic> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BasicT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct BasicBuilder {
  typedef Basic Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Basic::VT_NAME, name);
  }
  explicit BasicBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Basic> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Basic>(end);
    return o;
  }
};

inline flatbuffers::Offset<Basic> CreateBasic(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0) {
  BasicBuilder builder_(_fbb);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Basic> CreateBasicDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return profiler::CreateBasic(
      _fbb,
      name__);
}

flatbuffers::Offset<Basic> CreateBasic(flatbuffers::FlatBufferBuilder &_fbb, const BasicT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct BasicInformationT : public flatbuffers::NativeTable {
  typedef BasicInformation TableType;
  std::string name{};
  std::string status{};
  uint64_t timestamp = 0;
  std::string location{};
};

struct BasicInformation FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BasicInformationT NativeTableType;
  typedef BasicInformationBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_STATUS = 6,
    VT_TIMESTAMP = 8,
    VT_LOCATION = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::String *status() const {
    return GetPointer<const flatbuffers::String *>(VT_STATUS);
  }
  uint64_t timestamp() const {
    return GetField<uint64_t>(VT_TIMESTAMP, 0);
  }
  const flatbuffers::String *location() const {
    return GetPointer<const flatbuffers::String *>(VT_LOCATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_STATUS) &&
           verifier.VerifyString(status()) &&
           VerifyField<uint64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyOffset(verifier, VT_LOCATION) &&
           verifier.VerifyString(location()) &&
           verifier.EndTable();
  }
  BasicInformationT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(BasicInformationT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<BasicInformation> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BasicInformationT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct BasicInformationBuilder {
  typedef BasicInformation Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(BasicInformation::VT_NAME, name);
  }
  void add_status(flatbuffers::Offset<flatbuffers::String> status) {
    fbb_.AddOffset(BasicInformation::VT_STATUS, status);
  }
  void add_timestamp(uint64_t timestamp) {
    fbb_.AddElement<uint64_t>(BasicInformation::VT_TIMESTAMP, timestamp, 0);
  }
  void add_location(flatbuffers::Offset<flatbuffers::String> location) {
    fbb_.AddOffset(BasicInformation::VT_LOCATION, location);
  }
  explicit BasicInformationBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<BasicInformation> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<BasicInformation>(end);
    return o;
  }
};

inline flatbuffers::Offset<BasicInformation> CreateBasicInformation(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::String> status = 0,
    uint64_t timestamp = 0,
    flatbuffers::Offset<flatbuffers::String> location = 0) {
  BasicInformationBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_location(location);
  builder_.add_status(status);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<BasicInformation> CreateBasicInformationDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *status = nullptr,
    uint64_t timestamp = 0,
    const char *location = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto status__ = status ? _fbb.CreateString(status) : 0;
  auto location__ = location ? _fbb.CreateString(location) : 0;
  return profiler::CreateBasicInformation(
      _fbb,
      name__,
      status__,
      timestamp,
      location__);
}

flatbuffers::Offset<BasicInformation> CreateBasicInformation(flatbuffers::FlatBufferBuilder &_fbb, const BasicInformationT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline BasicT *Basic::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<BasicT>(new BasicT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void Basic::UnPackTo(BasicT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
}

inline flatbuffers::Offset<Basic> Basic::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BasicT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateBasic(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<Basic> CreateBasic(flatbuffers::FlatBufferBuilder &_fbb, const BasicT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BasicT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  return profiler::CreateBasic(
      _fbb,
      _name);
}

inline BasicInformationT *BasicInformation::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<BasicInformationT>(new BasicInformationT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void BasicInformation::UnPackTo(BasicInformationT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = name(); if (_e) _o->name = _e->str(); }
  { auto _e = status(); if (_e) _o->status = _e->str(); }
  { auto _e = timestamp(); _o->timestamp = _e; }
  { auto _e = location(); if (_e) _o->location = _e->str(); }
}

inline flatbuffers::Offset<BasicInformation> BasicInformation::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BasicInformationT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateBasicInformation(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<BasicInformation> CreateBasicInformation(flatbuffers::FlatBufferBuilder &_fbb, const BasicInformationT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BasicInformationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _name = _o->name.empty() ? 0 : _fbb.CreateString(_o->name);
  auto _status = _o->status.empty() ? 0 : _fbb.CreateString(_o->status);
  auto _timestamp = _o->timestamp;
  auto _location = _o->location.empty() ? 0 : _fbb.CreateString(_o->location);
  return profiler::CreateBasicInformation(
      _fbb,
      _name,
      _status,
      _timestamp,
      _location);
}

inline const profiler::BasicInformation *GetBasicInformation(const void *buf) {
  return flatbuffers::GetRoot<profiler::BasicInformation>(buf);
}

inline const profiler::BasicInformation *GetSizePrefixedBasicInformation(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<profiler::BasicInformation>(buf);
}

inline const char *BasicInformationIdentifier() {
  return "BI01";
}

inline bool BasicInformationBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, BasicInformationIdentifier());
}

inline bool SizePrefixedBasicInformationBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, BasicInformationIdentifier(), true);
}

inline bool VerifyBasicInformationBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<profiler::BasicInformation>(BasicInformationIdentifier());
}

inline bool VerifySizePrefixedBasicInformationBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<profiler::BasicInformation>(BasicInformationIdentifier());
}

inline void FinishBasicInformationBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<profiler::BasicInformation> root) {
  fbb.Finish(root, BasicInformationIdentifier());
}

inline void FinishSizePrefixedBasicInformationBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<profiler::BasicInformation> root) {
  fbb.FinishSizePrefixed(root, BasicInformationIdentifier());
}

inline std::unique_ptr<profiler::BasicInformationT> UnPackBasicInformation(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<profiler::BasicInformationT>(GetBasicInformation(buf)->UnPack(res));
}

inline std::unique_ptr<profiler::BasicInformationT> UnPackSizePrefixedBasicInformation(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<profiler::BasicInformationT>(GetSizePrefixedBasicInformation(buf)->UnPack(res));
}

}  // namespace profiler

#endif  // FLATBUFFERS_GENERATED_BASICINFO_PROFILER_H_
