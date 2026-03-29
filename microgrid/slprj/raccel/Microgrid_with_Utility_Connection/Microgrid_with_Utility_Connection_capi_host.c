#include "Microgrid_with_Utility_Connection_capi_host.h"
static Microgrid_with_Utility_Connection_host_DataMapInfo_T root;
static int initialized = 0;
rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        Microgrid_with_Utility_Connection_host_InitializeDataMapInfo(&(root), "Microgrid_with_Utility_Connection");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
