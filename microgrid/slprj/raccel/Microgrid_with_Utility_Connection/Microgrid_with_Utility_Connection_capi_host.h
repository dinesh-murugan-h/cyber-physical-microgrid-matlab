#ifndef Microgrid_with_Utility_Connection_cap_host_h__
#define Microgrid_with_Utility_Connection_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
Microgrid_with_Utility_Connection_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void Microgrid_with_Utility_Connection_host_InitializeDataMapInfo ( Microgrid_with_Utility_Connection_host_DataMapInfo_T * dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
