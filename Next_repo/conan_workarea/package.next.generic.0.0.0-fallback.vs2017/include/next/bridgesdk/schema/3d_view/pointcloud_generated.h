// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POINTCLOUD_GUISCHEMA_H_
#define FLATBUFFERS_GENERATED_POINTCLOUD_GUISCHEMA_H_

#include "flatbuffers/flatbuffers.h"

namespace GuiSchema {

struct PointCloud;
struct PointCloudBuilder;
struct PointCloudT;

struct PointCloudList;
struct PointCloudListBuilder;
struct PointCloudListT;

struct PointCloudT : public flatbuffers::NativeTable {
  typedef PointCloud TableType;
  std::vector<float> points{};
  std::vector<float> pointColors{};
  std::string color{};
  std::vector<float> pointSize{};
};

struct PointCloud FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PointCloudT NativeTableType;
  typedef PointCloudBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POINTS = 4,
    VT_POINTCOLORS = 6,
    VT_COLOR = 8,
    VT_POINTSIZE = 10
  };
  const flatbuffers::Vector<float> *points() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_POINTS);
  }
  const flatbuffers::Vector<float> *pointColors() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_POINTCOLORS);
  }
  const flatbuffers::String *color() const {
    return GetPointer<const flatbuffers::String *>(VT_COLOR);
  }
  const flatbuffers::Vector<float> *pointSize() const {
    return GetPointer<const flatbuffers::Vector<float> *>(VT_POINTSIZE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_POINTS) &&
           verifier.VerifyVector(points()) &&
           VerifyOffset(verifier, VT_POINTCOLORS) &&
           verifier.VerifyVector(pointColors()) &&
           VerifyOffset(verifier, VT_COLOR) &&
           verifier.VerifyString(color()) &&
           VerifyOffset(verifier, VT_POINTSIZE) &&
           verifier.VerifyVector(pointSize()) &&
           verifier.EndTable();
  }
  PointCloudT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(PointCloudT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<PointCloud> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct PointCloudBuilder {
  typedef PointCloud Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_points(flatbuffers::Offset<flatbuffers::Vector<float>> points) {
    fbb_.AddOffset(PointCloud::VT_POINTS, points);
  }
  void add_pointColors(flatbuffers::Offset<flatbuffers::Vector<float>> pointColors) {
    fbb_.AddOffset(PointCloud::VT_POINTCOLORS, pointColors);
  }
  void add_color(flatbuffers::Offset<flatbuffers::String> color) {
    fbb_.AddOffset(PointCloud::VT_COLOR, color);
  }
  void add_pointSize(flatbuffers::Offset<flatbuffers::Vector<float>> pointSize) {
    fbb_.AddOffset(PointCloud::VT_POINTSIZE, pointSize);
  }
  explicit PointCloudBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PointCloud> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PointCloud>(end);
    return o;
  }
};

inline flatbuffers::Offset<PointCloud> CreatePointCloud(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<float>> points = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> pointColors = 0,
    flatbuffers::Offset<flatbuffers::String> color = 0,
    flatbuffers::Offset<flatbuffers::Vector<float>> pointSize = 0) {
  PointCloudBuilder builder_(_fbb);
  builder_.add_pointSize(pointSize);
  builder_.add_color(color);
  builder_.add_pointColors(pointColors);
  builder_.add_points(points);
  return builder_.Finish();
}

inline flatbuffers::Offset<PointCloud> CreatePointCloudDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<float> *points = nullptr,
    const std::vector<float> *pointColors = nullptr,
    const char *color = nullptr,
    const std::vector<float> *pointSize = nullptr) {
  auto points__ = points ? _fbb.CreateVector<float>(*points) : 0;
  auto pointColors__ = pointColors ? _fbb.CreateVector<float>(*pointColors) : 0;
  auto color__ = color ? _fbb.CreateString(color) : 0;
  auto pointSize__ = pointSize ? _fbb.CreateVector<float>(*pointSize) : 0;
  return GuiSchema::CreatePointCloud(
      _fbb,
      points__,
      pointColors__,
      color__,
      pointSize__);
}

flatbuffers::Offset<PointCloud> CreatePointCloud(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

struct PointCloudListT : public flatbuffers::NativeTable {
  typedef PointCloudList TableType;
  std::vector<std::unique_ptr<GuiSchema::PointCloudT>> pointClouds{};
  PointCloudListT() = default;
  PointCloudListT(const PointCloudListT &o);
  PointCloudListT(PointCloudListT&&) FLATBUFFERS_NOEXCEPT = default;
  PointCloudListT &operator=(PointCloudListT o) FLATBUFFERS_NOEXCEPT;
};

struct PointCloudList FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PointCloudListT NativeTableType;
  typedef PointCloudListBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POINTCLOUDS = 4
  };
  const flatbuffers::Vector<flatbuffers::Offset<GuiSchema::PointCloud>> *pointClouds() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<GuiSchema::PointCloud>> *>(VT_POINTCLOUDS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_POINTCLOUDS) &&
           verifier.VerifyVector(pointClouds()) &&
           verifier.VerifyVectorOfTables(pointClouds()) &&
           verifier.EndTable();
  }
  PointCloudListT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(PointCloudListT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<PointCloudList> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudListT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct PointCloudListBuilder {
  typedef PointCloudList Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pointClouds(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<GuiSchema::PointCloud>>> pointClouds) {
    fbb_.AddOffset(PointCloudList::VT_POINTCLOUDS, pointClouds);
  }
  explicit PointCloudListBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PointCloudList> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PointCloudList>(end);
    return o;
  }
};

inline flatbuffers::Offset<PointCloudList> CreatePointCloudList(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<GuiSchema::PointCloud>>> pointClouds = 0) {
  PointCloudListBuilder builder_(_fbb);
  builder_.add_pointClouds(pointClouds);
  return builder_.Finish();
}

inline flatbuffers::Offset<PointCloudList> CreatePointCloudListDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<flatbuffers::Offset<GuiSchema::PointCloud>> *pointClouds = nullptr) {
  auto pointClouds__ = pointClouds ? _fbb.CreateVector<flatbuffers::Offset<GuiSchema::PointCloud>>(*pointClouds) : 0;
  return GuiSchema::CreatePointCloudList(
      _fbb,
      pointClouds__);
}

flatbuffers::Offset<PointCloudList> CreatePointCloudList(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudListT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline PointCloudT *PointCloud::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<PointCloudT>(new PointCloudT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void PointCloud::UnPackTo(PointCloudT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = points(); if (_e) { _o->points.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->points[_i] = _e->Get(_i); } } }
  { auto _e = pointColors(); if (_e) { _o->pointColors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->pointColors[_i] = _e->Get(_i); } } }
  { auto _e = color(); if (_e) _o->color = _e->str(); }
  { auto _e = pointSize(); if (_e) { _o->pointSize.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->pointSize[_i] = _e->Get(_i); } } }
}

inline flatbuffers::Offset<PointCloud> PointCloud::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePointCloud(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<PointCloud> CreatePointCloud(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PointCloudT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _points = _o->points.size() ? _fbb.CreateVector(_o->points) : 0;
  auto _pointColors = _o->pointColors.size() ? _fbb.CreateVector(_o->pointColors) : 0;
  auto _color = _o->color.empty() ? 0 : _fbb.CreateString(_o->color);
  auto _pointSize = _o->pointSize.size() ? _fbb.CreateVector(_o->pointSize) : 0;
  return GuiSchema::CreatePointCloud(
      _fbb,
      _points,
      _pointColors,
      _color,
      _pointSize);
}

inline PointCloudListT::PointCloudListT(const PointCloudListT &o) {
  pointClouds.reserve(o.pointClouds.size());
  for (const auto &v : o.pointClouds) { pointClouds.emplace_back((v) ? new GuiSchema::PointCloudT(*v) : nullptr); }
}

inline PointCloudListT &PointCloudListT::operator=(PointCloudListT o) FLATBUFFERS_NOEXCEPT {
  std::swap(pointClouds, o.pointClouds);
  return *this;
}

inline PointCloudListT *PointCloudList::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<PointCloudListT>(new PointCloudListT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void PointCloudList::UnPackTo(PointCloudListT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = pointClouds(); if (_e) { _o->pointClouds.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { if(_o->pointClouds[_i]) { _e->Get(_i)->UnPackTo(_o->pointClouds[_i].get(), _resolver); } else { _o->pointClouds[_i] = std::unique_ptr<GuiSchema::PointCloudT>(_e->Get(_i)->UnPack(_resolver)); }; } } }
}

inline flatbuffers::Offset<PointCloudList> PointCloudList::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudListT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreatePointCloudList(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<PointCloudList> CreatePointCloudList(flatbuffers::FlatBufferBuilder &_fbb, const PointCloudListT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PointCloudListT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _pointClouds = _o->pointClouds.size() ? _fbb.CreateVector<flatbuffers::Offset<GuiSchema::PointCloud>> (_o->pointClouds.size(), [](size_t i, _VectorArgs *__va) { return CreatePointCloud(*__va->__fbb, __va->__o->pointClouds[i].get(), __va->__rehasher); }, &_va ) : 0;
  return GuiSchema::CreatePointCloudList(
      _fbb,
      _pointClouds);
}

inline const GuiSchema::PointCloudList *GetPointCloudList(const void *buf) {
  return flatbuffers::GetRoot<GuiSchema::PointCloudList>(buf);
}

inline const GuiSchema::PointCloudList *GetSizePrefixedPointCloudList(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<GuiSchema::PointCloudList>(buf);
}

inline const char *PointCloudListIdentifier() {
  return "PC01";
}

inline bool PointCloudListBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, PointCloudListIdentifier());
}

inline bool SizePrefixedPointCloudListBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, PointCloudListIdentifier(), true);
}

inline bool VerifyPointCloudListBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<GuiSchema::PointCloudList>(PointCloudListIdentifier());
}

inline bool VerifySizePrefixedPointCloudListBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<GuiSchema::PointCloudList>(PointCloudListIdentifier());
}

inline void FinishPointCloudListBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<GuiSchema::PointCloudList> root) {
  fbb.Finish(root, PointCloudListIdentifier());
}

inline void FinishSizePrefixedPointCloudListBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<GuiSchema::PointCloudList> root) {
  fbb.FinishSizePrefixed(root, PointCloudListIdentifier());
}

inline std::unique_ptr<GuiSchema::PointCloudListT> UnPackPointCloudList(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<GuiSchema::PointCloudListT>(GetPointCloudList(buf)->UnPack(res));
}

inline std::unique_ptr<GuiSchema::PointCloudListT> UnPackSizePrefixedPointCloudList(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<GuiSchema::PointCloudListT>(GetSizePrefixedPointCloudList(buf)->UnPack(res));
}

}  // namespace GuiSchema

#endif  // FLATBUFFERS_GENERATED_POINTCLOUD_GUISCHEMA_H_