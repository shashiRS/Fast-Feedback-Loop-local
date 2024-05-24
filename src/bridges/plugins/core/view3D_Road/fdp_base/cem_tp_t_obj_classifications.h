// Attention, this file is generated!

#ifdef ECO_C_TYPES_USED
#ifndef ECO_ALLOW_INTERFACE_MIXING
#error eco C and C++ types mixed
#endif
#endif
#define ECO_CPP_TYPES_USED

#ifndef FDP_BASE_CEM_TP_T_OBJ_CLASSIFICATIONS_H_
#define FDP_BASE_CEM_TP_T_OBJ_CLASSIFICATIONS_H_

#include "eco/deprecation.h"

#include "Platform_Types.h"

// PRQA S 2180 ++
/* date: 2020-03-31, reviewer: PR reviewers of https://github-am.geo.conti.de/ADAS/eco/pull/1100, CCBIssueId:
 * https://jira-adas.zone2.agileci.conti.de/browse/SEP-1137, reason: implicit construction is desired here */

namespace fdp_base {
/// \cond HIDDEN_ENUMS
/// This signal indicates the class of the object. values: enum {
/// TP_OBJECT_CLASS_POINT=0,TP_OBJECT_CLASS_CAR=1,TP_OBJECT_CLASS_TRUCK=2
/// ,TP_OBJECT_CLASS_PEDESTRIAN=3,TP_OBJECT_CLASS_MOTORCYCLE=4,TP_OBJECT_CLASS_BICYCLE=5
/// ,TP_OBJECT_CLASS_WIDE=6,TP_OBJECT_CLASS_UNCLASSIFIED=7,TP_OBJECT_CLASS_OTHER_VEHICLE=8
/// ,TP_OBJECT_CLASS_TL=9,TP_OBJECT_CLASS_MAX_DIFF_TYPES=10,}
/// @range{0,10}
class CEM_TP_t_ObjClassifications {
public:
  typedef uint8 underlying_type;
  enum do_not_use {
    TP_OBJECT_CLASS_POINT = 0U,
    TP_OBJECT_CLASS_CAR = 1U,
    TP_OBJECT_CLASS_TRUCK = 2U,
    TP_OBJECT_CLASS_PEDESTRIAN = 3U,
    TP_OBJECT_CLASS_MOTORCYCLE = 4U,
    TP_OBJECT_CLASS_BICYCLE = 5U,
    TP_OBJECT_CLASS_WIDE = 6U,
    TP_OBJECT_CLASS_UNCLASSIFIED = 7U,
    TP_OBJECT_CLASS_OTHER_VEHICLE = 8U,
    TP_OBJECT_CLASS_TL = 9U,
    TP_OBJECT_CLASS_MAX_DIFF_TYPES = 10U
  };

  CEM_TP_t_ObjClassifications() : value(static_cast<underlying_type>(TP_OBJECT_CLASS_POINT)) {}

  CEM_TP_t_ObjClassifications(const do_not_use v) : value(static_cast<const underlying_type>(v)) {}

  CEM_TP_t_ObjClassifications(const CEM_TP_t_ObjClassifications &v) : value(static_cast<const underlying_type>(v)) {}

  DEPRECATED_BEGIN DEPRECATED_END CEM_TP_t_ObjClassifications(const underlying_type v) : value(v) {}

  operator underlying_type() const { return value; }

  CEM_TP_t_ObjClassifications &operator|=(const do_not_use v) {
    value |= static_cast<const underlying_type>(v);
    return *this;
  }

  DEPRECATED(CEM_TP_t_ObjClassifications &) operator|=(const underlying_type v) {
    value |= v;
    return *this;
  }

  CEM_TP_t_ObjClassifications &operator=(const do_not_use v) {
    value = static_cast<const underlying_type>(v);
    return *this;
  }

  CEM_TP_t_ObjClassifications &operator=(const CEM_TP_t_ObjClassifications &v) {
    value = static_cast<const underlying_type>(v);
    return *this;
  }

  DEPRECATED(CEM_TP_t_ObjClassifications &) operator=(const underlying_type v) {
    value = v;
    return *this;
  }

  template <typename T>
  bool operator==(const T v) const {
    return value == static_cast<const underlying_type>(v);
  }
  /// \endcond

private:
  underlying_type value;
};
} // namespace fdp_base

// PRQA S 2180 --

#endif // FDP_BASE_CEM_TP_T_OBJ_CLASSIFICATIONS_H_
