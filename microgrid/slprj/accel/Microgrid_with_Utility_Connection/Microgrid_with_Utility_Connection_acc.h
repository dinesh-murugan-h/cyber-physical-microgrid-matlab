#ifndef Microgrid_with_Utility_Connection_acc_h_
#define Microgrid_with_Utility_Connection_acc_h_
#ifndef Microgrid_with_Utility_Connection_acc_COMMON_INCLUDES_
#define Microgrid_with_Utility_Connection_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif
#include "Microgrid_with_Utility_Connection_acc_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>
#include "rt_defines.h"
typedef struct { creal_T B_21_402_3104 [ 3 ] ; real_T B_21_405_3152 [ 3 ] ;
real_T B_21_408_3176 [ 3 ] ; real_T B_21_411_3200 ; real_T B_21_412_3208 [ 3
] ; real_T B_21_415_3232 [ 3 ] ; real_T B_21_418_3256 [ 3 ] ; real_T
B_21_421_3280 [ 3 ] ; real_T B_21_424_3304 ; real_T B_21_425_3312 [ 3 ] ;
real_T B_21_428_3336 [ 3 ] ; real_T B_21_431_3360 [ 3 ] ; real_T
B_21_434_3384 [ 3 ] ; real_T B_21_437_3408 [ 3 ] ; real_T B_20_440_3432 [ 3 ]
; real_T B_20_443_3456 [ 3 ] ; real_T B_19_446_3480 [ 3 ] ; real_T
B_19_449_3504 [ 3 ] ; } B_RMS_Microgrid_with_Utility_Connection_T ; typedef
struct { real_T Memory_PreviousInput [ 3 ] ; real_T Memory_PreviousInput_l [
3 ] ; struct { real_T modelTStart ; } TransportDelay_RWORK ; struct { real_T
modelTStart ; } TransportDelay_RWORK_f ; struct { void * TUbufferPtrs [ 6 ] ;
} TransportDelay_PWORK ; struct { void * TUbufferPtrs [ 6 ] ; }
TransportDelay_PWORK_e ; int32_T RMS_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_o ; struct { int_T Tail [ 3 ] ;
int_T Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK ; struct { int_T Tail [ 3 ] ; int_T
Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK_a ; int8_T RMS_SubsysRanBC ; boolean_T
RMS_MODE ; char_T pad_RMS_MODE [ 2 ] ; }
DW_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_l [ 3 ] ; real_T integrator_CSTATE_b [ 3 ] ; }
X_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_l [ 3 ] ; real_T integrator_CSTATE_b [ 3 ] ; }
XDot_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { boolean_T
integrator_CSTATE_l [ 3 ] ; boolean_T integrator_CSTATE_b [ 3 ] ; }
XDis_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_l [ 3 ] ; real_T integrator_CSTATE_b [ 3 ] ; }
XAbsTol_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_l [ 3 ] ; real_T integrator_CSTATE_b [ 3 ] ; }
XPtMin_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_l [ 3 ] ; real_T integrator_CSTATE_b [ 3 ] ; }
XPtMax_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
B_23_374_2880 [ 3 ] ; real_T B_23_377_2904 [ 3 ] ; real_T B_23_380_2928 ;
real_T B_23_381_2936 [ 3 ] ; real_T B_23_384_2960 [ 3 ] ; real_T
B_23_387_2984 [ 3 ] ; real_T B_23_390_3008 [ 3 ] ; real_T B_23_393_3032 [ 3 ]
; real_T B_22_396_3056 [ 3 ] ; real_T B_22_399_3080 [ 3 ] ; }
B_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
Memory_PreviousInput [ 3 ] ; struct { real_T modelTStart ; }
TransportDelay_RWORK ; struct { void * TUbufferPtrs [ 6 ] ; }
TransportDelay_PWORK ; int32_T TrueRMS_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; struct { int_T Tail [ 3 ] ;
int_T Head [ 3 ] ; int_T Last [ 3 ] ; int_T CircularBufSize [ 3 ] ; int_T
MaxNewBufSize ; } TransportDelay_IWORK ; int_T
Saturationtoavoidnegativesqrt_MODE [ 3 ] ; int8_T TrueRMS_SubsysRanBC ;
int8_T Sqrt_DWORK1 ; boolean_T TrueRMS_MODE ; char_T pad_TrueRMS_MODE [ 5 ] ;
} DW_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE [ 3 ] ; } X_TrueRMS_Microgrid_with_Utility_Connection_T ;
typedef struct { real_T integrator_CSTATE [ 3 ] ; }
XDot_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { boolean_T
integrator_CSTATE [ 3 ] ; } XDis_TrueRMS_Microgrid_with_Utility_Connection_T
; typedef struct { real_T integrator_CSTATE [ 3 ] ; }
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE [ 3 ] ; }
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE [ 3 ] ; }
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
Saturationtoavoidnegativesqrt_UprLim_ZC [ 3 ] ; real_T
Saturationtoavoidnegativesqrt_LwrLim_ZC [ 3 ] ; }
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { ZCSigState
Saturationtoavoidnegativesqrt_UprLim_ZCE [ 3 ] ; ZCSigState
Saturationtoavoidnegativesqrt_LwrLim_ZCE [ 3 ] ; }
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
B_29_0_0 ; real_T B_29_1_8 ; real_T B_29_2_16 ; real_T B_29_3_24 ; real_T
B_29_4_32 ; real_T B_29_5_40 ; real_T B_29_6_48 ; real_T B_29_7_56 [ 3 ] ;
real_T B_29_10_80 [ 4 ] ; real_T B_29_14_112 [ 4 ] ; real_T B_29_18_144 [ 4 ]
; real_T B_29_22_176 ; real_T B_29_23_184 ; real_T B_29_24_192 ; real_T
B_29_25_200 [ 4 ] ; real_T B_29_29_232 ; real_T B_29_30_240 [ 4 ] ; real_T
B_29_34_272 ; real_T B_29_35_280 [ 4 ] ; real_T B_29_39_312 ; real_T
B_29_40_320 [ 4 ] ; real_T B_29_44_352 [ 4 ] ; real_T B_29_48_384 [ 4 ] ;
real_T B_29_52_416 [ 4 ] ; real_T B_29_56_448 [ 4 ] ; real_T B_29_60_480 [ 4
] ; real_T B_29_64_512 ; real_T B_29_65_520 [ 4 ] ; real_T B_29_69_552 ;
real_T B_29_70_560 [ 4 ] ; real_T B_29_74_592 [ 32 ] ; real_T B_29_106_848 ;
real_T B_29_107_856 ; real_T B_29_108_864 ; real_T B_29_109_872 ; real_T
B_29_110_880 ; real_T B_29_111_888 ; real_T B_29_112_896 ; real_T
B_29_113_904 ; real_T B_29_114_912 ; real_T B_29_115_920 [ 4 ] ; real_T
B_29_119_952 ; real_T B_29_120_960 [ 4 ] ; real_T B_29_124_992 ; real_T
B_29_125_1000 [ 4 ] ; real_T B_29_129_1032 [ 4 ] ; real_T B_29_133_1064 ;
real_T B_29_134_1072 [ 4 ] ; real_T B_29_138_1104 ; real_T B_29_139_1112 [ 4
] ; real_T B_29_143_1144 ; real_T B_29_144_1152 [ 4 ] ; real_T B_29_148_1184
[ 12 ] ; real_T B_29_160_1280 ; real_T B_29_161_1288 ; real_T B_29_162_1296 ;
real_T B_29_163_1304 ; real_T B_29_164_1312 ; real_T B_29_165_1320 ; real_T
B_29_166_1328 ; real_T B_29_167_1336 ; real_T B_29_168_1344 ; real_T
B_29_169_1352 ; real_T B_29_170_1360 ; real_T B_29_171_1368 ; real_T
B_29_172_1376 ; real_T B_29_173_1384 ; real_T B_29_174_1392 ; real_T
B_29_175_1400 ; real_T B_29_176_1408 ; real_T B_29_177_1416 ; real_T
B_29_178_1424 ; real_T B_29_179_1432 ; real_T B_29_180_1440 [ 3 ] ; real_T
B_29_183_1464 ; real_T B_29_184_1472 ; real_T B_29_185_1480 ; real_T
B_29_186_1488 ; real_T B_29_187_1496 ; real_T B_29_188_1504 ; real_T
B_29_189_1512 ; real_T B_29_190_1520 ; real_T B_29_191_1528 ; real_T
B_29_192_1536 ; real_T B_29_193_1544 ; real_T B_29_194_1552 [ 3 ] ; real_T
B_29_197_1576 ; real_T B_29_198_1584 ; real_T B_29_199_1592 ; real_T
B_29_200_1600 ; real_T B_29_201_1608 ; real_T B_29_202_1616 ; real_T
B_29_203_1624 ; real_T B_29_204_1632 ; real_T B_29_205_1640 ; real_T
B_29_206_1648 ; real_T B_29_207_1656 ; real_T B_29_208_1664 ; real_T
B_29_209_1672 ; real_T B_29_210_1680 ; real_T B_29_211_1688 ; real_T
B_29_212_1696 ; real_T B_29_213_1704 ; real_T B_29_214_1712 ; real_T
B_29_215_1720 ; real_T B_29_216_1728 ; real_T B_29_217_1736 ; real_T
B_29_218_1744 ; real_T B_29_219_1752 ; real_T B_29_220_1760 ; real_T
B_29_221_1768 ; real_T B_29_222_1776 ; real_T B_29_223_1784 ; real_T
B_29_224_1792 ; real_T B_29_225_1800 ; real_T B_29_226_1808 ; real_T
B_29_227_1816 ; real_T B_29_228_1824 ; real_T B_29_229_1832 ; real_T
B_29_230_1840 ; real_T B_29_231_1848 ; real_T B_29_232_1856 ; real_T
B_29_233_1864 ; real_T B_29_234_1872 ; real_T B_29_235_1880 ; real_T
B_29_236_1888 ; real_T B_29_237_1896 ; real_T B_29_238_1904 ; real_T
B_29_239_1912 ; real_T B_29_240_1920 ; real_T B_29_241_1928 ; real_T
B_29_242_1936 ; real_T B_29_243_1944 ; real_T B_29_244_1952 ; real_T
B_29_245_1960 ; real_T B_29_246_1968 ; real_T B_29_247_1976 ; real_T
B_29_248_1984 ; real_T B_29_249_1992 ; real_T B_29_250_2000 ; real_T
B_29_251_2008 ; real_T B_14_252_2016 [ 4 ] ; real_T B_14_256_2048 ; real_T
B_13_257_2056 ; real_T B_13_258_2064 ; real_T B_12_259_2072 ; real_T
B_11_260_2080 ; real_T B_10_261_2088 ; real_T B_5_262_2096 ; real_T
B_4_263_2104 ; real_T B_29_264_2112 [ 3 ] ; uint32_T B_29_267_2136 ; uint32_T
B_29_268_2140 ; uint32_T B_29_269_2144 ; uint32_T B_29_270_2148 ; uint32_T
B_29_271_2152 ; uint32_T B_29_272_2156 ; uint32_T B_29_273_2160 ; uint32_T
B_29_274_2164 ; uint32_T B_29_275_2168 ; uint32_T B_29_276_2172 ; uint32_T
B_29_277_2176 ; uint32_T B_29_278_2180 ; uint32_T B_29_279_2184 ; uint32_T
B_29_280_2188 ; uint32_T B_29_281_2192 ; uint32_T B_29_282_2196 ; uint32_T
B_29_283_2200 ; uint32_T B_29_284_2204 ; uint32_T B_29_285_2208 ; uint32_T
B_29_286_2212 ; uint32_T B_29_287_2216 ; boolean_T B_29_288_2220 ; boolean_T
B_29_289_2221 ; boolean_T B_29_290_2222 ; boolean_T B_29_291_2223 ; boolean_T
B_29_292_2224 ; boolean_T B_29_293_2225 ; boolean_T B_29_294_2226 ; boolean_T
B_29_295_2227 ; char_T pad_B_29_295_2227 [ 4 ] ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
B_RMS_Microgrid_with_Utility_Connection_T RMS ; }
B_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
UnitDelay_DSTATE ; real_T UnitDelay2_DSTATE ; real_T
DiscreteTimeIntegrator_DSTATE ; real_T DiscreteTimeIntegrator_DSTATE_e ;
real_T DiscreteTimeIntegrator1_DSTATE ; real_T UnitDelay_DSTATE_b ; real_T
DiscreteTimeIntegrator3_DSTATE ; real_T UnitDelay1_DSTATE ; real_T
DiscreteTimeIntegrator2_DSTATE ; real_T INPUT_1_1_1_Discrete [ 2 ] ; real_T
INPUT_1_1_2_Discrete [ 2 ] ; real_T INPUT_1_1_3_Discrete [ 2 ] ; real_T
UnitDelay_DSTATE_k ; real_T DiscreteTimeIntegrator_DSTATE_g ; real_T
INPUT_2_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_n ; real_T
UnitDelay_DSTATE_i ; real_T INPUT_3_1_1_Discrete [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_j ; real_T UnitDelay_DSTATE_p ; real_T
INPUT_4_1_1_Discrete [ 2 ] ; real_T INPUT_5_1_1_Discrete [ 2 ] ; real_T
INPUT_6_1_1_Discrete [ 2 ] ; real_T INPUT_7_1_1_Discrete [ 2 ] ; real_T
INPUT_8_1_1_Discrete [ 2 ] ; real_T INPUT_9_1_1_Discrete [ 2 ] ; real_T
INPUT_10_1_1_Discrete [ 2 ] ; real_T UnitDelay_DSTATE_i1 ; real_T
INPUT_11_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_a ; real_T
UnitDelay_DSTATE_e ; real_T INPUT_12_1_1_Discrete [ 2 ] ; real_T
SWL_STATE_0_Discrete [ 495 ] ; real_T SWL_STATE_0_FirstOutput ; real_T
DiscreteTimeIntegrator_DSTATE_c ; real_T UnitDelay1_DSTATE_m ; real_T
INPUT_1_1_1_Discrete_b [ 2 ] ; real_T INPUT_2_1_1_Discrete_d [ 2 ] ; real_T
UnitDelay_DSTATE_h ; real_T INPUT_3_1_1_Discrete_o [ 2 ] ; real_T
INPUT_4_1_1_Discrete_f [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_k ;
real_T INPUT_5_1_1_Discrete_k [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_jk
; real_T INPUT_6_1_1_Discrete_m [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_f ; real_T INPUT_7_1_1_Discrete_p [ 2 ] ;
real_T SWL_STATE_0_Discrete_h [ 131 ] ; real_T SWL_STATE_0_FirstOutput_d ;
real_T DiscreteTimeIntegrator_DSTATE_fm ; real_T
DiscreteTimeIntegrator_DSTATE_cc ; real_T DiscreteTimeIntegrator_DSTATE_l ;
real_T Integ4_DSTATE ; real_T UnitDelay_DSTATE_d ; real_T UnitDelay1_DSTATE_g
; real_T Integ4_DSTATE_i ; real_T UnitDelay_DSTATE_bi ; real_T
UnitDelay1_DSTATE_h ; real_T Integ4_DSTATE_m ; real_T UnitDelay_DSTATE_j ;
real_T UnitDelay1_DSTATE_hv ; real_T Integ4_DSTATE_g ; real_T
UnitDelay_DSTATE_bv ; real_T UnitDelay1_DSTATE_f ; real_T
DiscreteTimeIntegrator_DSTATE_gq ; real_T DiscreteTimeIntegrator_DSTATE_n0 ;
real_T SWL_STATE_0_Inputs [ 14 ] ; real_T SWL_STATE_0_Inputs_a [ 7 ] ; real_T
lastSin ; real_T lastCos ; real_T lastSin_b ; real_T lastCos_p ; real_T
lastSin_f ; real_T lastCos_g ; real_T lastSin_by ; real_T lastCos_c ; real_T
SFunction_RWORK ; real_T SFunction_RWORK_g ; real_T SFunction_RWORK_h ;
real_T SFunction_RWORK_hg ; void * FromWorkspace_PWORK [ 3 ] ; void *
SWL_STATE_0_DiagMgr ; void * SWL_STATE_0_DiagTree ; void *
SWL_STATE_0_SimulatorPtr ; void * SWL_STATE_0_StateDirPtr ; void *
Scope_PWORK ; void * SWL_STATE_0_DiagMgr_n ; void * SWL_STATE_0_DiagTree_l ;
void * SWL_STATE_0_SimulatorPtr_c ; void * SWL_STATE_0_StateDirPtr_c ; void *
SFunction_PWORK [ 2 ] ; void * SFunction_PWORK_l [ 2 ] ; void *
SFunction_PWORK_lo [ 2 ] ; void * SFunction_PWORK_e [ 2 ] ; struct { void *
AQHandles [ 8 ] ; } TAQSigLogging_InsertedFor_BusCreator_at_outport_0_1_PWORK
; struct { void * AQHandles [ 13 ] ; }
TAQSigLogging_InsertedFor_BusCreator1_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 9 ] ; }
TAQSigLogging_InsertedFor_BusCreator2_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 3 ] ; }
TAQSigLogging_InsertedFor_BusCreator3_at_outport_0_1_PWORK ; struct { void *
AQHandles ; } TAQSigLogging_InsertedFor_BusCreator4_at_outport_0_1_PWORK ;
struct { void * AQHandles [ 2 ] ; }
TAQSigLogging_InsertedFor_BusCreator5_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 8 ] ; }
TAQSigLogging_InsertedFor_BusCreator6_at_outport_0_1_PWORK ; void *
RTP_0_RtpManager ; uint32_T Output_DSTATE ; uint32_T Output_DSTATE_k ;
uint32_T Output_DSTATE_g ; uint32_T Output_DSTATE_n ; uint32_T
Output_DSTATE_l ; uint32_T Output_DSTATE_e ; uint32_T Output_DSTATE_kj ;
int32_T systemEnable ; int32_T systemEnable_c ; int32_T systemEnable_l ;
int32_T systemEnable_e ; int32_T TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ;
int32_T TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_a ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_i ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_b ; int32_T
MPPTControllerusingPertrbObseretechnque_sysIdxToRun ; int32_T
GridSynchronization1_sysIdxToRun ; int32_T
GridFormingGridFollowing_sysIdxToRun ; int32_T MATLABFunction1_sysIdxToRun ;
int32_T MATLABFunction_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_p ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_m ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pk ; int32_T
MATLABFunction1_sysIdxToRun_n ; int32_T MATLABFunction_sysIdxToRun_o ;
int32_T TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_my ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pkl ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_myz ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pklv ; int_T FromWorkspace_IWORK ;
int_T Step_MODE ; int_T Step1_MODE ; int8_T
DiscreteTimeIntegrator_PrevResetState ; int8_T
DiscreteTimeIntegrator_PrevResetState_f ; uint8_T
DiscreteTimeIntegrator_IC_LOADING ; uint8_T Integ4_SYSTEM_ENABLE ; uint8_T
Integ4_SYSTEM_ENABLE_o ; uint8_T Integ4_SYSTEM_ENABLE_h ; uint8_T
Integ4_SYSTEM_ENABLE_j ; uint8_T DiscreteTimeIntegrator_IC_LOADING_g ;
boolean_T RTP_0_SetParametersNeeded ; char_T pad_RTP_0_SetParametersNeeded [
3 ] ; DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS ; }
DW_Microgrid_with_Utility_Connection_T ; typedef struct {
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
X_RMS_Microgrid_with_Utility_Connection_T RMS ; }
X_Microgrid_with_Utility_Connection_T ; typedef struct {
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDot_Microgrid_with_Utility_Connection_T ; typedef struct {
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDis_Microgrid_with_Utility_Connection_T ; typedef struct {
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CStateAbsTol_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMin_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMax_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
Step_StepTime_ZC ; real_T Step1_StepTime_ZC ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ; }
ZCV_Microgrid_with_Utility_Connection_T ; typedef struct { ZCSigState
Step_StepTime_ZCE ; ZCSigState Step1_StepTime_ZCE ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ; }
PrevZCX_Microgrid_with_Utility_Connection_T ; struct
P_RMS_Microgrid_with_Utility_Connection_T_ { real_T P_0 ; real_T P_1 ; real_T
P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ; real_T
P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T P_13 ;
real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ; real_T
P_19 ; real_T P_20 ; real_T P_21 ; } ; struct
P_TrueRMS_Microgrid_with_Utility_Connection_T_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
} ; struct P_Microgrid_with_Utility_Connection_T_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 [ 6 ] ; real_T
P_18 [ 6 ] ; real_T P_19 ; real_T P_20 ; real_T P_21 [ 6 ] ; real_T P_22 [ 6
] ; real_T P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ;
real_T P_28 ; real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T
P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 ;
real_T P_39 ; real_T P_40 ; real_T P_41 [ 4 ] ; real_T P_42 [ 4 ] ; real_T
P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ; real_T P_48 ;
real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T
P_54 ; real_T P_55 [ 3 ] ; real_T P_56 [ 3 ] ; real_T P_57 ; real_T P_58 ;
real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T
P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ;
real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 [ 4 ] ;
real_T P_75 [ 4 ] ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 ; real_T P_87 ; real_T P_88 ; real_T P_89 ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 [ 4 ] ;
real_T P_96 [ 4 ] ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ;
real_T P_101 ; real_T P_102 [ 6 ] ; real_T P_103 [ 6 ] ; real_T P_104 ;
real_T P_105 ; real_T P_106 ; real_T P_107 ; real_T P_108 ; real_T P_109 ;
real_T P_110 ; real_T P_111 ; real_T P_112 ; real_T P_113 ; real_T P_114 ;
real_T P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ;
real_T P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ;
real_T P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ;
real_T P_130 ; real_T P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 [ 2
] ; real_T P_135 ; real_T P_136 [ 2 ] ; real_T P_137 ; real_T P_138 [ 2 ] ;
real_T P_139 ; real_T P_140 [ 2 ] ; real_T P_141 ; real_T P_142 ; real_T
P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T
P_148 ; real_T P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T
P_153 ; real_T P_154 ; real_T P_155 ; real_T P_156 [ 2 ] ; real_T P_157 ;
real_T P_158 [ 2 ] ; real_T P_159 ; real_T P_160 [ 2 ] ; real_T P_161 ;
real_T P_162 [ 2 ] ; real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T
P_166 ; real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T
P_171 ; real_T P_172 ; real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T
P_176 ; real_T P_177 ; real_T P_178 ; real_T P_179 [ 2 ] ; real_T P_180 ;
real_T P_181 [ 2 ] ; real_T P_182 ; real_T P_183 [ 2 ] ; real_T P_184 ;
real_T P_185 [ 2 ] ; real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T
P_189 ; real_T P_190 ; real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T
P_194 ; real_T P_195 ; real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T
P_199 ; real_T P_200 ; real_T P_201 [ 2 ] ; real_T P_202 ; real_T P_203 [ 2 ]
; real_T P_204 ; real_T P_205 [ 2 ] ; real_T P_206 ; real_T P_207 [ 2 ] ;
real_T P_208 ; real_T P_209 ; real_T P_210 ; real_T P_211 ; real_T P_212 ;
real_T P_213 ; real_T P_214 ; real_T P_215 ; real_T P_216 ; real_T P_217 ;
real_T P_218 ; real_T P_219 ; real_T P_220 ; real_T P_221 ; real_T P_222 ;
real_T P_223 ; real_T P_224 ; real_T P_225 ; real_T P_226 ; real_T P_227 ;
real_T P_228 ; real_T P_229 ; real_T P_230 ; real_T P_231 ; real_T P_232 ;
real_T P_233 ; real_T P_234 ; real_T P_235 ; real_T P_236 ; real_T P_237 ;
real_T P_238 ; real_T P_239 ; real_T P_240 ; real_T P_241 ; real_T P_242 ;
real_T P_243 ; real_T P_244 ; real_T P_245 ; real_T P_246 ; real_T P_247 ;
real_T P_248 ; real_T P_249 ; real_T P_250 ; real_T P_251 ; real_T P_252 ;
real_T P_253 ; real_T P_254 ; real_T P_255 ; real_T P_256 ; real_T P_257 ;
real_T P_258 ; real_T P_259 ; real_T P_260 ; real_T P_261 ; real_T P_262 ;
real_T P_263 ; real_T P_264 ; real_T P_265 ; real_T P_266 ; real_T P_267 ;
real_T P_268 ; real_T P_269 ; real_T P_270 ; real_T P_271 ; real_T P_272 ;
real_T P_273 ; real_T P_274 ; real_T P_275 ; uint32_T P_276 ; uint32_T P_277
; uint32_T P_278 ; uint32_T P_279 ; uint32_T P_280 ; uint32_T P_281 ;
uint32_T P_282 ; uint32_T P_283 ; uint32_T P_284 ; uint32_T P_285 ; uint32_T
P_286 ; uint32_T P_287 ; uint32_T P_288 ; uint32_T P_289 ; uint32_T P_290 ;
uint32_T P_291 ; uint32_T P_292 ; uint32_T P_293 ; uint32_T P_294 ; uint32_T
P_295 ; uint32_T P_296 ; uint32_T P_297 ; uint32_T P_298 ; uint32_T P_299 ;
uint32_T P_300 ; uint32_T P_301 ; uint32_T P_302 ; uint32_T P_303 ; uint8_T
P_304 ; char_T pad_P_304 [ 7 ] ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_b ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_j ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
P_RMS_Microgrid_with_Utility_Connection_T RMS ; } ; extern
P_Microgrid_with_Utility_Connection_T
Microgrid_with_Utility_Connection_rtDefaultP ;
#endif
