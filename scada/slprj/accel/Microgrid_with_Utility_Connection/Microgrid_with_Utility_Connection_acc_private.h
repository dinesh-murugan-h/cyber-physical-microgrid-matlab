#ifndef Microgrid_with_Utility_Connection_acc_private_h_
#define Microgrid_with_Utility_Connection_acc_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include <stddef.h>
#include <float.h>
#include "mwmathutil.h"
#include "Microgrid_with_Utility_Connection_acc.h"
#include "Microgrid_with_Utility_Connection_acc_types.h"
#if !defined(ss_VALIDATE_MEMORY)
#define ss_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(S, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef rtInterpolate
#define rtInterpolate(v1,v2,f1,f2)     (((v1)==(v2))?((double)(v1)):    (((f1)*((double)(v1)))+((f2)*((double)(v2)))))
#endif
#ifndef rtRound
#define rtRound(v) ( ((v) >= 0) ?     muDoubleScalarFloor((v) + 0.5) :     muDoubleScalarCeil((v) - 0.5) )
#endif
#ifndef __RTW_UTFREE__
extern void * utMalloc ( size_t ) ; extern void utFree ( void * ) ;
#endif
boolean_T Microgrid_with_Utility_Connection_acc_rt_TDelayUpdateTailOrGrowBuf
( int_T * bufSzPtr , int_T * tailPtr , int_T * headPtr , int_T * lastPtr ,
real_T tMinusDelay , real_T * * uBufPtr , boolean_T isfixedbuf , boolean_T
istransportdelay , int_T * maxNewBufSzPtr ) ; real_T
Microgrid_with_Utility_Connection_acc_rt_TDelayInterpolate ( real_T
tMinusDelay , real_T tStart , real_T * uBuf , int_T bufSz , int_T * lastIdx ,
int_T oldestIdx , int_T newIdx , real_T initOutput , boolean_T discrete ,
boolean_T minorStepAndTAtLastMajorOutput ) ; extern real_T look1_binlcpw ( real_T u0 , const real_T bp0 [ ] , const real_T table [ ] , uint32_T maxIndex ) ; void Microgrid_with_Utility_Connection_RMS_Init ( SimStruct * S , DW_RMS_Microgrid_with_Utility_Connection_T * localDW , P_RMS_Microgrid_with_Utility_Connection_T * localP , X_RMS_Microgrid_with_Utility_Connection_T * localX ) ; void Microgrid_with_Utility_Connection_RMS_Deriv ( SimStruct * S , B_RMS_Microgrid_with_Utility_Connection_T * localB , DW_RMS_Microgrid_with_Utility_Connection_T * localDW , XDot_RMS_Microgrid_with_Utility_Connection_T * localXdot ) ; void Microgrid_with_Utility_Connection_RMS_Disable ( SimStruct * S , DW_RMS_Microgrid_with_Utility_Connection_T * localDW ) ; void Microgrid_with_Utility_Connection_RMS_Update ( SimStruct * S , B_RMS_Microgrid_with_Utility_Connection_T * localB , DW_RMS_Microgrid_with_Utility_Connection_T * localDW , P_RMS_Microgrid_with_Utility_Connection_T * localP ) ; void Microgrid_with_Utility_Connection_RMS ( SimStruct * S , boolean_T rtu_Enable , real_T rtu_In , B_RMS_Microgrid_with_Utility_Connection_T * localB , DW_RMS_Microgrid_with_Utility_Connection_T * localDW , P_RMS_Microgrid_with_Utility_Connection_T * localP , X_RMS_Microgrid_with_Utility_Connection_T * localX , XDis_RMS_Microgrid_with_Utility_Connection_T * localXdis ) ; void Microgrid_with_Utility_Connection_TrueRMS_Init ( SimStruct * S , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW , P_TrueRMS_Microgrid_with_Utility_Connection_T * localP , X_TrueRMS_Microgrid_with_Utility_Connection_T * localX ) ; void Microgrid_with_Utility_Connection_TrueRMS_Deriv ( SimStruct * S , B_TrueRMS_Microgrid_with_Utility_Connection_T * localB , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW , XDot_TrueRMS_Microgrid_with_Utility_Connection_T * localXdot ) ; void Microgrid_with_Utility_Connection_TrueRMS_ZC ( SimStruct * S , B_TrueRMS_Microgrid_with_Utility_Connection_T * localB , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW , P_TrueRMS_Microgrid_with_Utility_Connection_T * localP , ZCV_TrueRMS_Microgrid_with_Utility_Connection_T * localZCSV ) ; void Microgrid_with_Utility_Connection_TrueRMS_Disable ( SimStruct * S , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW ) ; void Microgrid_with_Utility_Connection_TrueRMS_Update ( SimStruct * S , B_TrueRMS_Microgrid_with_Utility_Connection_T * localB , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW , P_TrueRMS_Microgrid_with_Utility_Connection_T * localP ) ; void Microgrid_with_Utility_Connection_TrueRMS ( SimStruct * S , boolean_T rtu_Enable , real_T rtu_In , B_TrueRMS_Microgrid_with_Utility_Connection_T * localB , DW_TrueRMS_Microgrid_with_Utility_Connection_T * localDW , P_TrueRMS_Microgrid_with_Utility_Connection_T * localP , X_TrueRMS_Microgrid_with_Utility_Connection_T * localX , XDis_TrueRMS_Microgrid_with_Utility_Connection_T * localXdis ) ; void Microgrid_with_Utility_Connection_RMS_Term ( SimStruct * const S ) ; void Microgrid_with_Utility_Connection_TrueRMS_Term ( SimStruct * const S ) ;
#endif
