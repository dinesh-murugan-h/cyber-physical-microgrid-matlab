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
typedef struct { creal_T B_22_420_3216 ; real_T B_22_421_3232 ; real_T
B_22_422_3240 ; real_T B_22_423_3248 ; real_T B_22_424_3256 ; real_T
B_22_425_3264 ; real_T B_22_426_3272 ; real_T B_22_427_3280 ; real_T
B_22_428_3288 ; real_T B_22_429_3296 ; real_T B_22_430_3304 ; real_T
B_22_431_3312 ; real_T B_22_432_3320 ; real_T B_22_433_3328 ; real_T
B_21_434_3336 ; real_T B_21_435_3344 ; real_T B_20_436_3352 ; real_T
B_20_437_3360 ; } B_RMS_Microgrid_with_Utility_Connection_T ; typedef struct
{ real_T Memory_PreviousInput ; real_T Memory_PreviousInput_n ; struct {
real_T modelTStart ; } TransportDelay_RWORK ; struct { real_T modelTStart ; }
TransportDelay_RWORK_g ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay_PWORK_m ; int32_T RMS_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_a ; struct { int_T Tail ; int_T
Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TransportDelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } TransportDelay_IWORK_i ; int8_T
RMS_SubsysRanBC ; boolean_T RMS_MODE ; char_T pad_RMS_MODE [ 2 ] ; }
DW_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_b ; real_T integrator_CSTATE_j ; }
X_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_b ; real_T integrator_CSTATE_j ; }
XDot_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { boolean_T
integrator_CSTATE_b ; boolean_T integrator_CSTATE_j ; }
XDis_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_b ; real_T integrator_CSTATE_j ; }
XAbsTol_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_b ; real_T integrator_CSTATE_j ; }
XPtMin_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_b ; real_T integrator_CSTATE_j ; }
XPtMax_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
B_24_410_3136 ; real_T B_24_411_3144 ; real_T B_24_412_3152 ; real_T
B_24_413_3160 ; real_T B_24_414_3168 ; real_T B_24_415_3176 ; real_T
B_24_416_3184 ; real_T B_24_417_3192 ; real_T B_23_418_3200 ; real_T
B_23_419_3208 ; } B_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef
struct { real_T Memory_PreviousInput ; struct { real_T modelTStart ; }
TransportDelay_RWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay_PWORK ; int32_T TrueRMS_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; struct { int_T Tail ; int_T Head
; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TransportDelay_IWORK ; int_T Saturationtoavoidnegativesqrt_MODE ; int8_T
TrueRMS_SubsysRanBC ; int8_T Sqrt_DWORK1 ; boolean_T TrueRMS_MODE ; char_T
pad_TrueRMS_MODE [ 5 ] ; } DW_TrueRMS_Microgrid_with_Utility_Connection_T ;
typedef struct { real_T integrator_CSTATE ; }
X_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE ; } XDot_TrueRMS_Microgrid_with_Utility_Connection_T ;
typedef struct { boolean_T integrator_CSTATE ; }
XDis_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE ; } XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T ;
typedef struct { real_T integrator_CSTATE ; }
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE ; } XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T ;
typedef struct { real_T Saturationtoavoidnegativesqrt_UprLim_ZC ; real_T
Saturationtoavoidnegativesqrt_LwrLim_ZC ; }
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { ZCSigState
Saturationtoavoidnegativesqrt_UprLim_ZCE ; ZCSigState
Saturationtoavoidnegativesqrt_LwrLim_ZCE ; }
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
B_45_0_0 ; real_T B_45_1_8 ; real_T B_45_2_16 ; real_T B_45_3_24 ; real_T
B_45_4_32 [ 4 ] ; real_T B_45_8_64 ; real_T B_45_9_72 [ 4 ] ; real_T
B_45_13_104 ; real_T B_45_14_112 [ 4 ] ; real_T B_45_18_144 ; real_T
B_45_19_152 [ 3 ] ; real_T B_45_22_176 [ 4 ] ; real_T B_45_26_208 [ 4 ] ;
real_T B_45_30_240 [ 4 ] ; real_T B_45_34_272 ; real_T B_45_35_280 [ 4 ] ;
real_T B_45_39_312 [ 4 ] ; real_T B_45_43_344 [ 4 ] ; real_T B_45_47_376 [ 4
] ; real_T B_45_51_408 [ 4 ] ; real_T B_45_55_440 ; real_T B_45_56_448 [ 4 ]
; real_T B_45_60_480 ; real_T B_45_61_488 [ 4 ] ; real_T B_45_65_520 ; real_T
B_45_66_528 [ 4 ] ; real_T B_45_70_560 [ 36 ] ; real_T B_45_106_848 ; real_T
B_45_107_856 [ 4 ] ; real_T B_45_111_888 ; real_T B_45_112_896 [ 4 ] ; real_T
B_45_116_928 ; real_T B_45_117_936 [ 4 ] ; real_T B_45_121_968 [ 4 ] ; real_T
B_45_125_1000 ; real_T B_45_126_1008 [ 4 ] ; real_T B_45_130_1040 ; real_T
B_45_131_1048 [ 4 ] ; real_T B_45_135_1080 ; real_T B_45_136_1088 [ 4 ] ;
real_T B_45_140_1120 [ 17 ] ; real_T B_45_157_1256 ; real_T B_45_158_1264 ;
real_T B_45_159_1272 ; real_T B_45_160_1280 ; real_T B_45_161_1288 ; real_T
B_45_162_1296 ; real_T B_45_163_1304 ; real_T B_45_164_1312 ; real_T
B_45_165_1320 ; real_T B_45_166_1328 ; real_T B_45_167_1336 ; real_T
B_45_168_1344 ; real_T B_45_169_1352 ; real_T B_45_170_1360 ; real_T
B_45_171_1368 ; real_T B_45_172_1376 ; real_T B_45_173_1384 ; real_T
B_45_174_1392 ; real_T B_45_175_1400 ; real_T B_45_176_1408 ; real_T
B_45_177_1416 ; real_T B_45_178_1424 ; real_T B_45_179_1432 ; real_T
B_45_180_1440 ; real_T B_45_181_1448 ; real_T B_45_182_1456 ; real_T
B_45_183_1464 [ 3 ] ; real_T B_45_186_1488 ; real_T B_45_187_1496 ; real_T
B_45_188_1504 ; real_T B_45_189_1512 ; real_T B_45_190_1520 ; real_T
B_45_191_1528 ; real_T B_45_192_1536 ; real_T B_45_193_1544 ; real_T
B_45_194_1552 ; real_T B_45_195_1560 ; real_T B_45_196_1568 ; real_T
B_45_197_1576 [ 3 ] ; real_T B_45_200_1600 ; real_T B_45_201_1608 ; real_T
B_45_202_1616 ; real_T B_45_203_1624 ; real_T B_45_204_1632 ; real_T
B_45_205_1640 ; real_T B_45_206_1648 ; real_T B_45_207_1656 ; real_T
B_45_208_1664 ; real_T B_45_209_1672 ; real_T B_45_210_1680 ; real_T
B_45_211_1688 ; real_T B_45_212_1696 ; real_T B_45_213_1704 ; real_T
B_45_214_1712 ; real_T B_45_215_1720 [ 3 ] ; real_T B_45_218_1744 ; real_T
B_45_219_1752 [ 3 ] ; real_T B_45_222_1776 ; real_T B_45_223_1784 ; real_T
B_45_224_1792 ; real_T B_45_225_1800 ; real_T B_45_226_1808 ; real_T
B_45_227_1816 ; real_T B_45_228_1824 ; real_T B_45_229_1832 ; real_T
B_45_230_1840 ; real_T B_45_231_1848 ; real_T B_45_232_1856 ; real_T
B_45_233_1864 ; real_T B_45_234_1872 ; real_T B_45_235_1880 ; real_T
B_45_236_1888 ; real_T B_45_237_1896 ; real_T B_45_238_1904 ; real_T
B_45_239_1912 ; real_T B_45_240_1920 ; real_T B_45_241_1928 ; real_T
B_45_242_1936 ; real_T B_45_243_1944 ; real_T B_45_244_1952 ; real_T
B_45_245_1960 ; real_T B_45_246_1968 ; real_T B_45_247_1976 ; real_T
B_45_248_1984 ; real_T B_45_249_1992 ; real_T B_45_250_2000 ; real_T
B_45_251_2008 ; real_T B_45_252_2016 ; real_T B_45_253_2024 ; real_T
B_45_254_2032 ; real_T B_45_255_2040 ; real_T B_45_256_2048 ; real_T
B_45_257_2056 ; real_T B_45_258_2064 ; real_T B_45_259_2072 ; real_T
B_45_260_2080 ; real_T B_45_261_2088 ; real_T B_45_262_2096 ; real_T
B_45_263_2104 ; real_T B_45_264_2112 ; real_T B_45_265_2120 ; real_T
B_45_266_2128 ; real_T B_45_267_2136 ; real_T B_45_268_2144 ; real_T
B_45_269_2152 ; real_T B_45_270_2160 ; real_T B_45_271_2168 ; real_T
B_45_272_2176 ; real_T B_40_273_2184 [ 4 ] ; real_T B_40_277_2216 ; real_T
B_15_278_2224 ; real_T B_15_279_2232 ; real_T B_15_280_2240 ; real_T
B_14_281_2248 ; real_T B_14_282_2256 ; real_T B_14_283_2264 ; real_T
B_13_284_2272 ; real_T B_12_285_2280 ; real_T B_12_286_2288 ; real_T
B_12_287_2296 ; real_T B_12_288_2304 ; real_T B_12_289_2312 ; real_T
B_11_290_2320 ; real_T B_11_291_2328 ; real_T B_10_292_2336 ; real_T
B_9_293_2344 ; real_T B_8_294_2352 ; uint32_T B_45_295_2360 ; uint32_T
B_45_296_2364 ; uint32_T B_45_297_2368 ; uint32_T B_45_298_2372 ; uint32_T
B_45_299_2376 ; uint32_T B_45_300_2380 ; uint32_T B_45_301_2384 ; uint32_T
B_45_302_2388 ; uint32_T B_45_303_2392 ; uint32_T B_45_304_2396 ; uint32_T
B_45_305_2400 ; uint32_T B_45_306_2404 ; uint32_T B_45_307_2408 ; uint32_T
B_45_308_2412 ; uint32_T B_45_309_2416 ; boolean_T B_45_310_2420 ; boolean_T
B_45_311_2421 ; boolean_T B_45_312_2422 ; boolean_T B_45_313_2423 ; boolean_T
B_45_314_2424 ; boolean_T B_45_315_2425 ; boolean_T B_45_316_2426 ; boolean_T
B_45_317_2427 ; boolean_T B_45_318_2428 ; boolean_T B_45_319_2429 ; boolean_T
B_45_320_2430 ; boolean_T B_45_321_2431 ; boolean_T B_45_322_2432 ; boolean_T
B_45_323_2433 ; boolean_T B_45_324_2434 ; boolean_T B_45_325_2435 ; char_T
pad_B_45_325_2435 [ 4 ] ; B_TrueRMS_Microgrid_with_Utility_Connection_T
TrueRMS_f ; B_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
B_RMS_Microgrid_with_Utility_Connection_T RMS ; }
B_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
UnitDelay_DSTATE ; real_T DiscreteTimeIntegrator_DSTATE ; real_T
INPUT_1_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_n ; real_T
UnitDelay_DSTATE_i ; real_T INPUT_2_1_1_Discrete [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_j ; real_T UnitDelay_DSTATE_p ; real_T
INPUT_3_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator1_DSTATE ; real_T
UnitDelay_DSTATE_b ; real_T DiscreteTimeIntegrator3_DSTATE ; real_T
UnitDelay1_DSTATE ; real_T DiscreteTimeIntegrator2_DSTATE ; real_T
INPUT_4_1_1_Discrete [ 2 ] ; real_T INPUT_4_1_2_Discrete [ 2 ] ; real_T
INPUT_4_1_3_Discrete [ 2 ] ; real_T INPUT_5_1_1_Discrete [ 2 ] ; real_T
INPUT_6_1_1_Discrete [ 2 ] ; real_T INPUT_7_1_1_Discrete [ 2 ] ; real_T
INPUT_8_1_1_Discrete [ 2 ] ; real_T INPUT_9_1_1_Discrete [ 2 ] ; real_T
UnitDelay_DSTATE_n ; real_T INPUT_10_1_1_Discrete [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_b ; real_T UnitDelay_DSTATE_i1 ; real_T
INPUT_11_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_a ; real_T
UnitDelay_DSTATE_e ; real_T INPUT_12_1_1_Discrete [ 2 ] ; real_T
SWL_STATE_0_Discrete [ 495 ] ; real_T SWL_STATE_0_FirstOutput ; real_T
INPUT_1_1_1_Discrete_b [ 2 ] ; real_T UnitDelay_DSTATE_h ; real_T
INPUT_2_1_1_Discrete_d [ 2 ] ; real_T INPUT_3_1_1_Discrete_o [ 2 ] ; real_T
INPUT_4_1_1_Discrete_f [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_k ;
real_T INPUT_5_1_1_Discrete_k [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_jk
; real_T INPUT_6_1_1_Discrete_m [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_f ; real_T INPUT_7_1_1_Discrete_p [ 2 ] ;
real_T SWL_STATE_0_Discrete_h [ 131 ] ; real_T SWL_STATE_0_FirstOutput_d ;
real_T UnitDelay2_DSTATE ; real_T DiscreteTimeIntegrator1_DSTATE_e ; real_T
UnitDelay1_DSTATE_m ; real_T DiscreteTimeIntegrator_DSTATE_c ; real_T
DiscreteTimeIntegrator_DSTATE_fm ; real_T DiscreteTimeIntegrator_DSTATE_cc ;
real_T DiscreteTimeIntegrator_DSTATE_l ; real_T Integ4_DSTATE ; real_T
UnitDelay_DSTATE_d ; real_T UnitDelay1_DSTATE_g ; real_T Integ4_DSTATE_i ;
real_T UnitDelay_DSTATE_bi ; real_T UnitDelay1_DSTATE_h ; real_T
Integ4_DSTATE_m ; real_T UnitDelay_DSTATE_j ; real_T UnitDelay1_DSTATE_hv ;
real_T Integ4_DSTATE_g ; real_T UnitDelay_DSTATE_bv ; real_T
UnitDelay1_DSTATE_f ; real_T DiscreteTimeIntegrator_DSTATE_n0 ; real_T
DiscreteTimeIntegrator_DSTATE_g ; real_T SWL_STATE_0_Inputs [ 14 ] ; real_T
SWL_STATE_0_Inputs_a [ 7 ] ; real_T lastSin ; real_T lastCos ; real_T
lastSin_b ; real_T lastCos_p ; real_T lastSin_f ; real_T lastCos_g ; real_T
lastSin_by ; real_T lastCos_c ; real_T SFunction_RWORK ; real_T
SFunction_RWORK_g ; real_T SFunction_RWORK_h ; real_T SFunction_RWORK_hg ;
void * FromWorkspace_PWORK [ 3 ] ; void * SWL_STATE_0_DiagMgr ; void *
SWL_STATE_0_DiagTree ; void * SWL_STATE_0_SimulatorPtr ; void *
SWL_STATE_0_StateDirPtr ; void * SWL_STATE_0_DiagMgr_n ; void *
SWL_STATE_0_DiagTree_l ; void * SWL_STATE_0_SimulatorPtr_c ; void *
SWL_STATE_0_StateDirPtr_c ; void * SFunction_PWORK [ 2 ] ; void *
SFunction_PWORK_l [ 2 ] ; void * SFunction_PWORK_lo [ 2 ] ; void *
SFunction_PWORK_e [ 2 ] ; struct { void * AQHandles ; }
_asyncqueue_inserted_for_ToWorkspace_PWORK ; void * Scope_PWORK ; struct {
void * AQHandles [ 8 ] ; }
TAQSigLogging_InsertedFor_BusCreator_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 13 ] ; }
TAQSigLogging_InsertedFor_BusCreator1_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 10 ] ; }
TAQSigLogging_InsertedFor_BusCreator2_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 3 ] ; }
TAQSigLogging_InsertedFor_BusCreator3_at_outport_0_1_PWORK ; struct { void *
AQHandles ; } TAQSigLogging_InsertedFor_BusCreator4_at_outport_0_1_PWORK ;
struct { void * AQHandles [ 2 ] ; }
TAQSigLogging_InsertedFor_BusCreator5_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 8 ] ; }
TAQSigLogging_InsertedFor_BusCreator6_at_outport_0_1_PWORK ; void *
RTP_0_RtpManager ; uint32_T Output_DSTATE ; uint32_T Output_DSTATE_n ;
uint32_T Output_DSTATE_l ; uint32_T Output_DSTATE_k ; uint32_T
Output_DSTATE_e ; int32_T systemEnable ; int32_T systemEnable_c ; int32_T
systemEnable_l ; int32_T systemEnable_e ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_a ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_i ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_b ; int32_T
MPPTControllerusingPertrbObseretechnque_sysIdxToRun ; int32_T
internalModbus_sysIdxToRun ; int32_T internalModbus_sysIdxToRun_k ; int32_T
internalModbus_sysIdxToRun_g ; int32_T internalModbus_sysIdxToRun_d ; int32_T
internalModbus_sysIdxToRun_a ; int32_T internalModbus_sysIdxToRun_m ; int32_T
internalModbus_sysIdxToRun_h ; int32_T internalModbus_sysIdxToRun_f ; int32_T
GridSynchronization1_sysIdxToRun ; int32_T
GridFormingGridFollowing_sysIdxToRun ; int32_T MATLABFunction1_sysIdxToRun ;
int32_T MATLABFunction_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_p ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_m ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pk ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_my ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pkl ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_myz ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pklv ; int_T FromWorkspace_IWORK ;
int8_T DiscreteTimeIntegrator_PrevResetState ; int8_T
DiscreteTimeIntegrator_PrevResetState_f ; uint8_T
DiscreteTimeIntegrator_IC_LOADING ; uint8_T Integ4_SYSTEM_ENABLE ; uint8_T
Integ4_SYSTEM_ENABLE_o ; uint8_T Integ4_SYSTEM_ENABLE_h ; uint8_T
Integ4_SYSTEM_ENABLE_j ; uint8_T DiscreteTimeIntegrator_IC_LOADING_g ;
boolean_T RTP_0_SetParametersNeeded ; char_T pad_RTP_0_SetParametersNeeded [
3 ] ; DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS ; }
DW_Microgrid_with_Utility_Connection_T ; typedef struct {
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
X_RMS_Microgrid_with_Utility_Connection_T RMS ; }
X_Microgrid_with_Utility_Connection_T ; typedef struct {
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDot_Microgrid_with_Utility_Connection_T ; typedef struct {
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDis_Microgrid_with_Utility_Connection_T ; typedef struct {
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CStateAbsTol_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMin_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMax_Microgrid_with_Utility_Connection_T ; typedef struct {
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ; }
ZCV_Microgrid_with_Utility_Connection_T ; typedef struct {
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
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
P_13 [ 4 ] ; real_T P_14 [ 4 ] ; real_T P_15 ; real_T P_16 ; real_T P_17 ;
real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T
P_23 ; real_T P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ;
real_T P_29 ; real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T
P_34 ; real_T P_35 ; real_T P_36 [ 3 ] ; real_T P_37 [ 3 ] ; real_T P_38 ;
real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T
P_44 ; real_T P_45 ; real_T P_46 [ 4 ] ; real_T P_47 [ 4 ] ; real_T P_48 ;
real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T
P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ; real_T P_58 ; real_T P_59 ;
real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T
P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ;
real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T
P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ;
real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T P_85 ; real_T P_86 [ 6 ] ;
real_T P_87 [ 6 ] ; real_T P_88 ; real_T P_89 ; real_T P_90 ; real_T P_91 ;
real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T P_96 ; real_T
P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101 ; real_T P_102
; real_T P_103 ; real_T P_104 ; real_T P_105 ; real_T P_106 ; real_T P_107 ;
real_T P_108 ; real_T P_109 ; real_T P_110 ; real_T P_111 ; real_T P_112 [ 2
] ; real_T P_113 ; real_T P_114 [ 2 ] ; real_T P_115 ; real_T P_116 [ 2 ] ;
real_T P_117 ; real_T P_118 [ 2 ] ; real_T P_119 ; real_T P_120 ; real_T
P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T P_125 ; real_T
P_126 ; real_T P_127 ; real_T P_128 ; real_T P_129 ; real_T P_130 ; real_T
P_131 ; real_T P_132 ; real_T P_133 ; real_T P_134 [ 2 ] ; real_T P_135 ;
real_T P_136 [ 2 ] ; real_T P_137 ; real_T P_138 [ 2 ] ; real_T P_139 ;
real_T P_140 [ 2 ] ; real_T P_141 ; real_T P_142 ; real_T P_143 ; real_T
P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T P_148 ; real_T
P_149 ; real_T P_150 ; real_T P_151 ; real_T P_152 ; real_T P_153 ; real_T
P_154 ; real_T P_155 ; real_T P_156 ; real_T P_157 [ 2 ] ; real_T P_158 ;
real_T P_159 [ 2 ] ; real_T P_160 ; real_T P_161 [ 2 ] ; real_T P_162 ;
real_T P_163 [ 2 ] ; real_T P_164 ; real_T P_165 ; real_T P_166 ; real_T
P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ; real_T
P_172 ; real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ; real_T
P_177 ; real_T P_178 ; real_T P_179 [ 2 ] ; real_T P_180 ; real_T P_181 [ 2 ]
; real_T P_182 ; real_T P_183 [ 2 ] ; real_T P_184 ; real_T P_185 [ 2 ] ;
real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T P_189 ; real_T P_190 ;
real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T P_194 ; real_T P_195 ;
real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ;
real_T P_201 ; real_T P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ;
real_T P_206 [ 4 ] ; real_T P_207 [ 4 ] ; real_T P_208 ; real_T P_209 ;
real_T P_210 ; real_T P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ;
real_T P_215 ; real_T P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ;
real_T P_220 ; real_T P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ;
real_T P_225 ; real_T P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ;
real_T P_230 ; real_T P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ;
real_T P_235 ; real_T P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ;
real_T P_240 ; real_T P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ;
real_T P_245 ; real_T P_246 ; real_T P_247 ; real_T P_248 ; real_T P_249 ;
real_T P_250 ; real_T P_251 ; real_T P_252 ; real_T P_253 ; real_T P_254 ;
real_T P_255 ; real_T P_256 ; real_T P_257 ; real_T P_258 ; real_T P_259 ;
real_T P_260 ; real_T P_261 ; real_T P_262 ; real_T P_263 ; real_T P_264 ;
real_T P_265 ; real_T P_266 ; real_T P_267 ; real_T P_268 ; real_T P_269 ;
real_T P_270 ; real_T P_271 ; real_T P_272 ; real_T P_273 ; uint32_T P_274 ;
uint32_T P_275 ; uint32_T P_276 ; uint32_T P_277 ; uint32_T P_278 ; uint32_T
P_279 ; uint32_T P_280 ; uint32_T P_281 ; uint32_T P_282 ; uint32_T P_283 ;
uint32_T P_284 ; uint32_T P_285 ; uint32_T P_286 ; uint32_T P_287 ; uint32_T
P_288 ; uint32_T P_289 ; uint32_T P_290 ; uint32_T P_291 ; uint32_T P_292 ;
uint32_T P_293 ; uint8_T P_294 ; char_T pad_P_294 [ 7 ] ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_f ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_ip ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_p ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_c ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_i ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
P_RMS_Microgrid_with_Utility_Connection_T RMS ; } ; extern
P_Microgrid_with_Utility_Connection_T
Microgrid_with_Utility_Connection_rtDefaultP ;
#endif
