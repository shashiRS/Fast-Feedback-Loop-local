// Attention, this file is generated!

#ifdef ECO_C_TYPES_USED
#ifndef ECO_ALLOW_INTERFACE_MIXING
#error eco C and C++ types mixed
#endif
#endif
#define ECO_CPP_TYPES_USED

#ifndef FDP_BASE_CEM_TP_T_OBJECT_LIST_H_
#define FDP_BASE_CEM_TP_T_OBJECT_LIST_H_

#include "cem_algo_interface_version_number_t.h"
#include "cem_signal_header_t.h"
#include "cem_tp_t_obj_list_attributes.h"
#include "cem_tp_t_obj_list_header.h"
#include "cem_tp_t_object.h"

namespace fdp_base {

/// Object list properties.
struct CEM_TP_t_ObjectList {
  /**
  Interface version number. Generated by (TP_OBJECT_LIST_INTFVER
| TP_OBJECT_INTFVER). Starts at 0x00010000 (65536).

  */
  CEM_AlgoInterfaceVersionNumber_t uiVersionNumber;
  /**
  Signal header with common signal information

  */
  CEM_SignalHeader_t sSigHeader;
  /**
  Available attributes in CEM_TP_t_ObjectList and CEM_TP_t_Object

  */
  CEM_TP_t_ObjListAttributes eAttributes;
  /**
  Header Object list properties

  */
  CEM_TP_t_ObjListHeader HeaderObjList;
  /**
  Objects

  */
  CEM_TP_t_Object aObject[100];
};

} // namespace fdp_base

#endif // FDP_BASE_CEM_TP_T_OBJECT_LIST_H_