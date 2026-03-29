#ifndef Microgrid_with_Utility_Connection_private_h_
#define Microgrid_with_Utility_Connection_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include <stddef.h>
#include <float.h>
#include "mwmathutil.h"
#include "Microgrid_with_Utility_Connection.h"
#include "Microgrid_with_Utility_Connection_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
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
void * rt_TDelayCreateBuf ( int_T numBuffer , int_T bufSz , int_T elemSz ) ;
boolean_T rt_TDelayUpdateTailOrGrowBuf ( int_T * bufSzPtr , int_T * tailPtr ,
int_T * headPtr , int_T * lastPtr , real_T tMinusDelay , real_T * * uBufPtr ,
boolean_T isfixedbuf , boolean_T istransportdelay , int_T * maxNewBufSzPtr )
; real_T rt_TDelayInterpolate ( real_T tMinusDelay , real_T tStart , real_T *
uBuf , int_T bufSz , int_T * lastIdx , int_T oldestIdx , int_T newIdx ,
real_T initOutput , boolean_T discrete , boolean_T
minorStepAndTAtLastMajorOutput ) ; void rt_TDelayFreeBuf ( void * buf ) ;
extern real_T look1_binlcpw ( real_T u0 , const real_T bp0 [ ] , const real_T
table [ ] , uint32_T maxIndex ) ; extern void sfun_discreteVariableDelay ( SimStruct * rts ) ; extern void k1cyjjthan ( ggaiosjvf2 * localDW , eap0kti25e * localP , jl0m24xehf * localX ) ; extern void dlbyptkmso ( SimStruct * rtS_p , ggaiosjvf2 * localDW , eap0kti25e * localP , cmoybd515s * localXdis ) ; extern void dk3lvqj1dy ( lvnb54qgr2 * localB , ggaiosjvf2 * localDW , gemwkalucd * localXdot ) ; extern void fjhedkonrp ( ggaiosjvf2 * localDW ) ; extern void lr4wcd5wwn ( SimStruct * rtS_m , lvnb54qgr2 * localB , ggaiosjvf2 * localDW , eap0kti25e * localP ) ; extern void dcv1n5znmu ( SimStruct * rtS_i , boolean_T moogfdzkf3 , real_T bqyddgvegn , lvnb54qgr2 * localB , ggaiosjvf2 * localDW , eap0kti25e * localP , jl0m24xehf * localX , cmoybd515s * localXdis ) ; extern void hgsifvpm2y ( ko3spaxozf * localDW , eihibnekho * localP , ma2fogayey * localX ) ; extern void orogeq5p4h ( SimStruct * rtS_j , ko3spaxozf * localDW , eihibnekho * localP , chcq0jrzxu * localXdis ) ; extern void fhmyrrnbbz ( f3peczma5t * localB , ko3spaxozf * localDW , ay22dub31i * localXdot ) ; extern void o0nfda4b5d ( f3peczma5t * localB , ko3spaxozf * localDW , eihibnekho * localP , bc5epsbr1g * localZCSV ) ; extern void dqi0wz5ido ( ko3spaxozf * localDW ) ; extern void jm4z1qidd2 ( SimStruct * rtS_c , f3peczma5t * localB , ko3spaxozf * localDW , eihibnekho * localP ) ; extern void niwklhwsx3 ( SimStruct * rtS_m , boolean_T dc1nbelsak , real_T pz4p0v43kh , f3peczma5t * localB , ko3spaxozf * localDW , eihibnekho * localP , ma2fogayey * localX , chcq0jrzxu * localXdis ) ; extern void pht2ifgm0c ( ggaiosjvf2 * localDW ) ; extern void ovvfxheqfn ( ko3spaxozf * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
