// Attention, this file is generated!

#ifdef ECO_C_TYPES_USED
#ifndef ECO_ALLOW_INTERFACE_MIXING
#error eco C and C++ types mixed
#endif
#endif
#define ECO_CPP_TYPES_USED

#ifndef FDP_BASE_INTERPOLATION_TYPE_ENUM_H_
#define FDP_BASE_INTERPOLATION_TYPE_ENUM_H_

#include "eco/deprecation.h"

#include "Platform_Types.h"

// PRQA S 2180 ++
/* date: 2020-03-31, reviewer: PR reviewers of https://github-am.geo.conti.de/ADAS/eco/pull/1100, CCBIssueId:
 * https://jira-adas.zone2.agileci.conti.de/browse/SEP-1137, reason: implicit construction is desired here */

namespace fdp_base {
/// \cond HIDDEN_ENUMS
class interpolationTypeEnum {
public:
  typedef uint8 underlying_type;
  enum do_not_use { RMF_ARIT_DISCRETE = 0U, RMF_ARIT_LINEAR = 1U, RMF_ARIT_UNKNOWN = 2U };

  interpolationTypeEnum() : value(static_cast<underlying_type>(RMF_ARIT_DISCRETE)) {}

  interpolationTypeEnum(const do_not_use v) : value(static_cast<const underlying_type>(v)) {}

  interpolationTypeEnum(const interpolationTypeEnum &v) : value(static_cast<const underlying_type>(v)) {}

  DEPRECATED_BEGIN DEPRECATED_END interpolationTypeEnum(const underlying_type v) : value(v) {}

  operator underlying_type() const { return value; }

  interpolationTypeEnum &operator|=(const do_not_use v) {
    value |= static_cast<const underlying_type>(v);
    return *this;
  }

  DEPRECATED(interpolationTypeEnum &) operator|=(const underlying_type v) {
    value |= v;
    return *this;
  }

  interpolationTypeEnum &operator=(const do_not_use v) {
    value = static_cast<const underlying_type>(v);
    return *this;
  }

  interpolationTypeEnum &operator=(const interpolationTypeEnum &v) {
    value = static_cast<const underlying_type>(v);
    return *this;
  }

  DEPRECATED(interpolationTypeEnum &) operator=(const underlying_type v) {
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

#endif // FDP_BASE_INTERPOLATION_TYPE_ENUM_H_