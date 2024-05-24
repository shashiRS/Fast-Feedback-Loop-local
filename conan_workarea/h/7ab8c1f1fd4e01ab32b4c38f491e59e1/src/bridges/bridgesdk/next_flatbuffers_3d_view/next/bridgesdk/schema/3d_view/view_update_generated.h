// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_VIEWUPDATE_GUISCHEMA_H_
#define FLATBUFFERS_GENERATED_VIEWUPDATE_GUISCHEMA_H_

#include "flatbuffers/flatbuffers.h"

#include "next/bridgesdk/schema/3d_view/groundline_generated.h"
#include "next/bridgesdk/schema/3d_view/meta_info_generated.h"
#include "next/bridgesdk/schema/3d_view/pointcloud_generated.h"
#include "next/bridgesdk/schema/3d_view/trafficparticipant_generated.h"
#include "next/bridgesdk/schema/3d_view/primitive_generated.h"
#include "next/bridgesdk/schema/3d_view/egovehicle_generated.h"

namespace GuiSchema {

struct ViewUpdate;
struct ViewUpdateBuilder;
struct ViewUpdateT;

struct ViewUpdateT : public flatbuffers::NativeTable {
  typedef ViewUpdate TableType;
  std::unique_ptr<Core::MetaInformationT> meta{};
  std::unique_ptr<GuiSchema::PrimitiveListT> primitives{};
  std::unique_ptr<GuiSchema::TrafficParticipantListT> traffic_objects{};
  std::unique_ptr<GuiSchema::PointCloudListT> point_clouds{};
  std::unique_ptr<GuiSchema::GroundLineListT> ground_lines{};
  std::unique_ptr<GuiSchema::EgoVehicleListT> ego_vehicles{};
  ViewUpdateT() = default;
  ViewUpdateT(const ViewUpdateT &o);
  ViewUpdateT(ViewUpdateT&&) FLATBUFFERS_NOEXCEPT = default;
  ViewUpdateT &operator=(ViewUpdateT o) FLATBUFFERS_NOEXCEPT;
};

struct ViewUpdate FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ViewUpdateT NativeTableType;
  typedef ViewUpdateBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_META = 4,
    VT_PRIMITIVES = 6,
    VT_TRAFFIC_OBJECTS = 8,
    VT_POINT_CLOUDS = 10,
    VT_GROUND_LINES = 12,
    VT_EGO_VEHICLES = 14
  };
  const Core::MetaInformation *meta() const {
    return GetPointer<const Core::MetaInformation *>(VT_META);
  }
  const GuiSchema::PrimitiveList *primitives() const {
    return GetPointer<const GuiSchema::PrimitiveList *>(VT_PRIMITIVES);
  }
  const GuiSchema::TrafficParticipantList *traffic_objects() const {
    return GetPointer<const GuiSchema::TrafficParticipantList *>(VT_TRAFFIC_OBJECTS);
  }
  const GuiSchema::PointCloudList *point_clouds() const {
    return GetPointer<const GuiSchema::PointCloudList *>(VT_POINT_CLOUDS);
  }
  const GuiSchema::GroundLineList *ground_lines() const {
    return GetPointer<const GuiSchema::GroundLineList *>(VT_GROUND_LINES);
  }
  const GuiSchema::EgoVehicleList *ego_vehicles() const {
    return GetPointer<const GuiSchema::EgoVehicleList *>(VT_EGO_VEHICLES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_META) &&
           verifier.VerifyTable(meta()) &&
           VerifyOffset(verifier, VT_PRIMITIVES) &&
           verifier.VerifyTable(primitives()) &&
           VerifyOffset(verifier, VT_TRAFFIC_OBJECTS) &&
           verifier.VerifyTable(traffic_objects()) &&
           VerifyOffset(verifier, VT_POINT_CLOUDS) &&
           verifier.VerifyTable(point_clouds()) &&
           VerifyOffset(verifier, VT_GROUND_LINES) &&
           verifier.VerifyTable(ground_lines()) &&
           VerifyOffset(verifier, VT_EGO_VEHICLES) &&
           verifier.VerifyTable(ego_vehicles()) &&
           verifier.EndTable();
  }
  ViewUpdateT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  void UnPackTo(ViewUpdateT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;
  static flatbuffers::Offset<ViewUpdate> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ViewUpdateT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);
};

struct ViewUpdateBuilder {
  typedef ViewUpdate Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_meta(flatbuffers::Offset<Core::MetaInformation> meta) {
    fbb_.AddOffset(ViewUpdate::VT_META, meta);
  }
  void add_primitives(flatbuffers::Offset<GuiSchema::PrimitiveList> primitives) {
    fbb_.AddOffset(ViewUpdate::VT_PRIMITIVES, primitives);
  }
  void add_traffic_objects(flatbuffers::Offset<GuiSchema::TrafficParticipantList> traffic_objects) {
    fbb_.AddOffset(ViewUpdate::VT_TRAFFIC_OBJECTS, traffic_objects);
  }
  void add_point_clouds(flatbuffers::Offset<GuiSchema::PointCloudList> point_clouds) {
    fbb_.AddOffset(ViewUpdate::VT_POINT_CLOUDS, point_clouds);
  }
  void add_ground_lines(flatbuffers::Offset<GuiSchema::GroundLineList> ground_lines) {
    fbb_.AddOffset(ViewUpdate::VT_GROUND_LINES, ground_lines);
  }
  void add_ego_vehicles(flatbuffers::Offset<GuiSchema::EgoVehicleList> ego_vehicles) {
    fbb_.AddOffset(ViewUpdate::VT_EGO_VEHICLES, ego_vehicles);
  }
  explicit ViewUpdateBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<ViewUpdate> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<ViewUpdate>(end);
    return o;
  }
};

inline flatbuffers::Offset<ViewUpdate> CreateViewUpdate(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Core::MetaInformation> meta = 0,
    flatbuffers::Offset<GuiSchema::PrimitiveList> primitives = 0,
    flatbuffers::Offset<GuiSchema::TrafficParticipantList> traffic_objects = 0,
    flatbuffers::Offset<GuiSchema::PointCloudList> point_clouds = 0,
    flatbuffers::Offset<GuiSchema::GroundLineList> ground_lines = 0,
    flatbuffers::Offset<GuiSchema::EgoVehicleList> ego_vehicles = 0) {
  ViewUpdateBuilder builder_(_fbb);
  builder_.add_ego_vehicles(ego_vehicles);
  builder_.add_ground_lines(ground_lines);
  builder_.add_point_clouds(point_clouds);
  builder_.add_traffic_objects(traffic_objects);
  builder_.add_primitives(primitives);
  builder_.add_meta(meta);
  return builder_.Finish();
}

flatbuffers::Offset<ViewUpdate> CreateViewUpdate(flatbuffers::FlatBufferBuilder &_fbb, const ViewUpdateT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

inline ViewUpdateT::ViewUpdateT(const ViewUpdateT &o)
      : meta((o.meta) ? new Core::MetaInformationT(*o.meta) : nullptr),
        primitives((o.primitives) ? new GuiSchema::PrimitiveListT(*o.primitives) : nullptr),
        traffic_objects((o.traffic_objects) ? new GuiSchema::TrafficParticipantListT(*o.traffic_objects) : nullptr),
        point_clouds((o.point_clouds) ? new GuiSchema::PointCloudListT(*o.point_clouds) : nullptr),
        ground_lines((o.ground_lines) ? new GuiSchema::GroundLineListT(*o.ground_lines) : nullptr),
        ego_vehicles((o.ego_vehicles) ? new GuiSchema::EgoVehicleListT(*o.ego_vehicles) : nullptr) {
}

inline ViewUpdateT &ViewUpdateT::operator=(ViewUpdateT o) FLATBUFFERS_NOEXCEPT {
  std::swap(meta, o.meta);
  std::swap(primitives, o.primitives);
  std::swap(traffic_objects, o.traffic_objects);
  std::swap(point_clouds, o.point_clouds);
  std::swap(ground_lines, o.ground_lines);
  std::swap(ego_vehicles, o.ego_vehicles);
  return *this;
}

inline ViewUpdateT *ViewUpdate::UnPack(const flatbuffers::resolver_function_t *_resolver) const {
  auto _o = std::unique_ptr<ViewUpdateT>(new ViewUpdateT());
  UnPackTo(_o.get(), _resolver);
  return _o.release();
}

inline void ViewUpdate::UnPackTo(ViewUpdateT *_o, const flatbuffers::resolver_function_t *_resolver) const {
  (void)_o;
  (void)_resolver;
  { auto _e = meta(); if (_e) { if(_o->meta) { _e->UnPackTo(_o->meta.get(), _resolver); } else { _o->meta = std::unique_ptr<Core::MetaInformationT>(_e->UnPack(_resolver)); } } }
  { auto _e = primitives(); if (_e) { if(_o->primitives) { _e->UnPackTo(_o->primitives.get(), _resolver); } else { _o->primitives = std::unique_ptr<GuiSchema::PrimitiveListT>(_e->UnPack(_resolver)); } } }
  { auto _e = traffic_objects(); if (_e) { if(_o->traffic_objects) { _e->UnPackTo(_o->traffic_objects.get(), _resolver); } else { _o->traffic_objects = std::unique_ptr<GuiSchema::TrafficParticipantListT>(_e->UnPack(_resolver)); } } }
  { auto _e = point_clouds(); if (_e) { if(_o->point_clouds) { _e->UnPackTo(_o->point_clouds.get(), _resolver); } else { _o->point_clouds = std::unique_ptr<GuiSchema::PointCloudListT>(_e->UnPack(_resolver)); } } }
  { auto _e = ground_lines(); if (_e) { if(_o->ground_lines) { _e->UnPackTo(_o->ground_lines.get(), _resolver); } else { _o->ground_lines = std::unique_ptr<GuiSchema::GroundLineListT>(_e->UnPack(_resolver)); } } }
  { auto _e = ego_vehicles(); if (_e) { if(_o->ego_vehicles) { _e->UnPackTo(_o->ego_vehicles.get(), _resolver); } else { _o->ego_vehicles = std::unique_ptr<GuiSchema::EgoVehicleListT>(_e->UnPack(_resolver)); } } }
}

inline flatbuffers::Offset<ViewUpdate> ViewUpdate::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ViewUpdateT* _o, const flatbuffers::rehasher_function_t *_rehasher) {
  return CreateViewUpdate(_fbb, _o, _rehasher);
}

inline flatbuffers::Offset<ViewUpdate> CreateViewUpdate(flatbuffers::FlatBufferBuilder &_fbb, const ViewUpdateT *_o, const flatbuffers::rehasher_function_t *_rehasher) {
  (void)_rehasher;
  (void)_o;
  struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ViewUpdateT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;
  auto _meta = _o->meta ? CreateMetaInformation(_fbb, _o->meta.get(), _rehasher) : 0;
  auto _primitives = _o->primitives ? CreatePrimitiveList(_fbb, _o->primitives.get(), _rehasher) : 0;
  auto _traffic_objects = _o->traffic_objects ? CreateTrafficParticipantList(_fbb, _o->traffic_objects.get(), _rehasher) : 0;
  auto _point_clouds = _o->point_clouds ? CreatePointCloudList(_fbb, _o->point_clouds.get(), _rehasher) : 0;
  auto _ground_lines = _o->ground_lines ? CreateGroundLineList(_fbb, _o->ground_lines.get(), _rehasher) : 0;
  auto _ego_vehicles = _o->ego_vehicles ? CreateEgoVehicleList(_fbb, _o->ego_vehicles.get(), _rehasher) : 0;
  return GuiSchema::CreateViewUpdate(
      _fbb,
      _meta,
      _primitives,
      _traffic_objects,
      _point_clouds,
      _ground_lines,
      _ego_vehicles);
}

inline const GuiSchema::ViewUpdate *GetViewUpdate(const void *buf) {
  return flatbuffers::GetRoot<GuiSchema::ViewUpdate>(buf);
}

inline const GuiSchema::ViewUpdate *GetSizePrefixedViewUpdate(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<GuiSchema::ViewUpdate>(buf);
}

inline const char *ViewUpdateIdentifier() {
  return "SU01";
}

inline bool ViewUpdateBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ViewUpdateIdentifier());
}

inline bool SizePrefixedViewUpdateBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ViewUpdateIdentifier(), true);
}

inline bool VerifyViewUpdateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<GuiSchema::ViewUpdate>(ViewUpdateIdentifier());
}

inline bool VerifySizePrefixedViewUpdateBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<GuiSchema::ViewUpdate>(ViewUpdateIdentifier());
}

inline void FinishViewUpdateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<GuiSchema::ViewUpdate> root) {
  fbb.Finish(root, ViewUpdateIdentifier());
}

inline void FinishSizePrefixedViewUpdateBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<GuiSchema::ViewUpdate> root) {
  fbb.FinishSizePrefixed(root, ViewUpdateIdentifier());
}

inline std::unique_ptr<GuiSchema::ViewUpdateT> UnPackViewUpdate(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<GuiSchema::ViewUpdateT>(GetViewUpdate(buf)->UnPack(res));
}

inline std::unique_ptr<GuiSchema::ViewUpdateT> UnPackSizePrefixedViewUpdate(
    const void *buf,
    const flatbuffers::resolver_function_t *res = nullptr) {
  return std::unique_ptr<GuiSchema::ViewUpdateT>(GetSizePrefixedViewUpdate(buf)->UnPack(res));
}

}  // namespace GuiSchema

#endif  // FLATBUFFERS_GENERATED_VIEWUPDATE_GUISCHEMA_H_
