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
typedef struct { creal_T B_19_358_2728 ; real_T B_19_359_2744 ; real_T
B_19_360_2752 ; real_T B_19_361_2760 ; real_T B_19_362_2768 ; real_T
B_19_363_2776 ; real_T B_19_364_2784 ; real_T B_19_365_2792 ; real_T
B_19_366_2800 ; real_T B_19_367_2808 ; real_T B_19_368_2816 ; real_T
B_19_369_2824 ; real_T B_19_370_2832 ; real_T B_19_371_2840 ; real_T
B_18_372_2848 ; real_T B_18_373_2856 ; real_T B_17_374_2864 ; real_T
B_17_375_2872 ; } B_RMS_Microgrid_with_Utility_Connection_T ; typedef struct
{ real_T Memory_PreviousInput ; real_T Memory_PreviousInput_n ; struct {
real_T modelTStart ; } TransportDelay_RWORK ; struct { real_T modelTStart ; }
TransportDelay_RWORK_k ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay_PWORK ; struct { void * TUbufferPtrs [ 2 ] ; }
TransportDelay_PWORK_h ; int32_T RMS_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_f ; struct { int_T Tail ; int_T
Head ; int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; }
TransportDelay_IWORK ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } TransportDelay_IWORK_b ; int8_T
RMS_SubsysRanBC ; boolean_T RMS_MODE ; char_T pad_RMS_MODE [ 2 ] ; }
DW_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_g ; real_T integrator_CSTATE_p ; }
X_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_g ; real_T integrator_CSTATE_p ; }
XDot_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { boolean_T
integrator_CSTATE_g ; boolean_T integrator_CSTATE_p ; }
XDis_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_g ; real_T integrator_CSTATE_p ; }
XAbsTol_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_g ; real_T integrator_CSTATE_p ; }
XPtMin_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
integrator_CSTATE_g ; real_T integrator_CSTATE_p ; }
XPtMax_RMS_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
B_21_348_2648 ; real_T B_21_349_2656 ; real_T B_21_350_2664 ; real_T
B_21_351_2672 ; real_T B_21_352_2680 ; real_T B_21_353_2688 ; real_T
B_21_354_2696 ; real_T B_21_355_2704 ; real_T B_20_356_2712 ; real_T
B_20_357_2720 ; } B_TrueRMS_Microgrid_with_Utility_Connection_T ; typedef
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
B_37_0_0 ; real_T B_37_1_8 ; real_T B_37_2_16 ; real_T B_37_3_24 [ 3 ] ;
real_T B_37_6_48 [ 4 ] ; real_T B_37_10_80 [ 4 ] ; real_T B_37_14_112 [ 4 ] ;
real_T B_37_18_144 ; real_T B_37_19_152 [ 4 ] ; real_T B_37_23_184 ; real_T
B_37_24_192 [ 4 ] ; real_T B_37_28_224 ; real_T B_37_29_232 [ 4 ] ; real_T
B_37_33_264 ; real_T B_37_34_272 [ 4 ] ; real_T B_37_38_304 ; real_T
B_37_39_312 [ 4 ] ; real_T B_37_43_344 ; real_T B_37_44_352 ; real_T
B_37_45_360 ; real_T B_37_46_368 ; real_T B_37_47_376 [ 4 ] ; real_T
B_37_51_408 ; real_T B_37_52_416 [ 4 ] ; real_T B_37_56_448 [ 32 ] ; real_T
B_37_88_704 ; real_T B_37_89_712 [ 4 ] ; real_T B_37_93_744 ; real_T
B_37_94_752 [ 4 ] ; real_T B_37_98_784 ; real_T B_37_99_792 [ 4 ] ; real_T
B_37_103_824 ; real_T B_37_104_832 [ 4 ] ; real_T B_37_108_864 ; real_T
B_37_109_872 [ 4 ] ; real_T B_37_113_904 ; real_T B_37_114_912 [ 4 ] ; real_T
B_37_118_944 [ 12 ] ; real_T B_37_130_1040 ; real_T B_37_131_1048 ; real_T
B_37_132_1056 ; real_T B_37_133_1064 [ 3 ] ; real_T B_37_136_1088 ; real_T
B_37_137_1096 [ 3 ] ; real_T B_37_140_1120 ; real_T B_37_141_1128 [ 3 ] ;
real_T B_37_144_1152 ; real_T B_37_145_1160 [ 3 ] ; real_T B_37_148_1184 ;
real_T B_37_149_1192 ; real_T B_37_150_1200 ; real_T B_37_151_1208 ; real_T
B_37_152_1216 ; real_T B_37_153_1224 ; real_T B_37_154_1232 ; real_T
B_37_155_1240 ; real_T B_37_156_1248 ; real_T B_37_157_1256 ; real_T
B_37_158_1264 ; real_T B_37_159_1272 ; real_T B_37_160_1280 ; real_T
B_37_161_1288 ; real_T B_37_162_1296 ; real_T B_37_163_1304 ; real_T
B_37_164_1312 ; real_T B_37_165_1320 ; real_T B_37_166_1328 ; real_T
B_37_167_1336 ; real_T B_37_168_1344 ; real_T B_37_169_1352 ; real_T
B_37_170_1360 ; real_T B_37_171_1368 ; real_T B_37_172_1376 ; real_T
B_37_173_1384 ; real_T B_37_174_1392 ; real_T B_37_175_1400 ; real_T
B_37_176_1408 ; real_T B_37_177_1416 ; real_T B_37_178_1424 ; real_T
B_37_179_1432 ; real_T B_37_180_1440 ; real_T B_37_181_1448 ; real_T
B_37_182_1456 ; real_T B_37_183_1464 ; real_T B_37_184_1472 ; real_T
B_37_185_1480 ; real_T B_37_186_1488 ; real_T B_37_187_1496 ; real_T
B_37_188_1504 ; real_T B_37_189_1512 ; real_T B_37_190_1520 ; real_T
B_37_191_1528 ; real_T B_37_192_1536 ; real_T B_37_193_1544 ; real_T
B_37_194_1552 ; real_T B_37_195_1560 ; real_T B_37_196_1568 ; real_T
B_37_197_1576 ; real_T B_37_198_1584 ; real_T B_37_199_1592 ; real_T
B_37_200_1600 ; real_T B_37_201_1608 ; real_T B_37_202_1616 ; real_T
B_37_203_1624 ; real_T B_37_204_1632 ; real_T B_37_205_1640 ; real_T
B_37_206_1648 ; real_T B_37_207_1656 ; real_T B_37_208_1664 ; real_T
B_37_209_1672 ; real_T B_37_210_1680 ; real_T B_37_211_1688 ; real_T
B_37_212_1696 ; real_T B_37_213_1704 ; real_T B_37_214_1712 ; real_T
B_37_215_1720 ; real_T B_37_216_1728 ; real_T B_37_217_1736 ; real_T
B_37_218_1744 ; real_T B_37_219_1752 ; real_T B_37_220_1760 ; real_T
B_37_221_1768 ; real_T B_37_222_1776 ; real_T B_37_223_1784 ; real_T
B_37_224_1792 ; real_T B_37_225_1800 ; real_T B_37_226_1808 ; real_T
B_12_227_1816 [ 4 ] ; real_T B_12_231_1848 ; real_T B_10_232_1856 ; real_T
B_9_233_1864 ; real_T B_9_234_1872 ; real_T B_8_235_1880 ; uint32_T
B_37_236_1888 ; uint32_T B_37_237_1892 ; uint32_T B_37_238_1896 ; uint32_T
B_37_239_1900 ; uint32_T B_37_240_1904 ; uint32_T B_37_241_1908 ; uint32_T
B_37_242_1912 ; uint32_T B_37_243_1916 ; uint32_T B_37_244_1920 ; uint32_T
B_37_245_1924 ; uint32_T B_37_246_1928 ; uint32_T B_37_247_1932 ; boolean_T
B_37_248_1936 ; boolean_T B_37_249_1937 ; boolean_T B_37_250_1938 ; boolean_T
B_37_251_1939 ; boolean_T B_37_252_1940 ; boolean_T B_37_253_1941 ; boolean_T
B_37_254_1942 ; boolean_T B_37_255_1943 ; boolean_T B_37_256_1944 ; boolean_T
B_37_257_1945 ; boolean_T B_37_258_1946 ; boolean_T B_37_259_1947 ; boolean_T
B_37_260_1948 ; boolean_T B_37_261_1949 ; boolean_T B_37_262_1950 ; boolean_T
B_37_263_1951 ; B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
B_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
B_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
B_RMS_Microgrid_with_Utility_Connection_T RMS ; }
B_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
DiscreteTimeIntegrator_DSTATE ; real_T DiscreteTimeIntegrator1_DSTATE ;
real_T UnitDelay_DSTATE ; real_T DiscreteTimeIntegrator3_DSTATE ; real_T
UnitDelay1_DSTATE ; real_T DiscreteTimeIntegrator2_DSTATE ; real_T
INPUT_1_1_1_Discrete [ 2 ] ; real_T INPUT_1_1_2_Discrete [ 2 ] ; real_T
INPUT_1_1_3_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_b ; real_T
UnitDelay_DSTATE_i ; real_T INPUT_2_1_1_Discrete [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_n ; real_T UnitDelay_DSTATE_io ; real_T
INPUT_3_1_1_Discrete [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_a ; real_T
UnitDelay_DSTATE_e ; real_T INPUT_4_1_1_Discrete [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_j ; real_T UnitDelay_DSTATE_p ; real_T
INPUT_5_1_1_Discrete [ 2 ] ; real_T INPUT_7_1_1_Discrete [ 2 ] ; real_T
UnitDelay_DSTATE_k ; real_T DiscreteTimeIntegrator_DSTATE_g ; real_T
INPUT_8_1_1_Discrete [ 2 ] ; real_T UnitDelay_DSTATE_n ; real_T
INPUT_6_1_1_Discrete [ 2 ] ; real_T SWL_STATE_0_Discrete [ 203 ] ; real_T
SWL_STATE_0_FirstOutput ; real_T INPUT_1_1_1_Discrete_b [ 2 ] ; real_T
INPUT_2_1_1_Discrete_d [ 2 ] ; real_T UnitDelay_DSTATE_h ; real_T
INPUT_3_1_1_Discrete_o [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_k ;
real_T INPUT_4_1_1_Discrete_f [ 2 ] ; real_T DiscreteTimeIntegrator_DSTATE_jk
; real_T INPUT_5_1_1_Discrete_k [ 2 ] ; real_T
DiscreteTimeIntegrator_DSTATE_f ; real_T INPUT_6_1_1_Discrete_m [ 2 ] ;
real_T SWL_STATE_0_Discrete_h [ 119 ] ; real_T SWL_STATE_0_FirstOutput_d ;
real_T Integ4_DSTATE ; real_T UnitDelay_DSTATE_d ; real_T UnitDelay1_DSTATE_g
; real_T Integ4_DSTATE_i ; real_T UnitDelay_DSTATE_b ; real_T
UnitDelay1_DSTATE_h ; real_T Integ4_DSTATE_m ; real_T UnitDelay_DSTATE_j ;
real_T UnitDelay1_DSTATE_hv ; real_T Integ4_DSTATE_g ; real_T
UnitDelay_DSTATE_bv ; real_T UnitDelay1_DSTATE_f ; real_T UnitDelay1_DSTATE_m
; real_T UnitDelay2_DSTATE ; real_T DiscreteTimeIntegrator_DSTATE_e ; real_T
DiscreteTimeIntegrator_DSTATE_c ; real_T DiscreteTimeIntegrator_DSTATE_gq ;
real_T DiscreteTimeIntegrator_DSTATE_n0 ; real_T
DiscreteTimeIntegrator_DSTATE_cf ; real_T DiscreteTimeIntegrator_DSTATE_l ;
real_T SWL_STATE_0_Inputs [ 10 ] ; real_T SWL_STATE_0_Inputs_a [ 6 ] ; real_T
lastSin ; real_T lastCos ; real_T lastSin_b ; real_T lastCos_p ; real_T
lastSin_f ; real_T lastCos_g ; real_T lastSin_by ; real_T lastCos_c ; real_T
SFunction_RWORK ; real_T SFunction_RWORK_g ; real_T SFunction_RWORK_h ;
real_T SFunction_RWORK_hg ; void * FromWorkspace_PWORK [ 3 ] ; void *
SWL_STATE_0_DiagMgr ; void * SWL_STATE_0_DiagTree ; void *
SWL_STATE_0_SimulatorPtr ; void * SWL_STATE_0_StateDirPtr ; void *
SWL_STATE_0_DiagMgr_n ; void * SWL_STATE_0_DiagTree_l ; void *
SWL_STATE_0_SimulatorPtr_c ; void * SWL_STATE_0_StateDirPtr_c ; void *
SFunction_PWORK [ 2 ] ; void * SFunction_PWORK_l [ 2 ] ; void *
SFunction_PWORK_lo [ 2 ] ; void * SFunction_PWORK_e [ 2 ] ; void *
Scope_PWORK ; struct { void * AQHandles [ 8 ] ; }
TAQSigLogging_InsertedFor_BusCreator_at_outport_0_1_PWORK ; struct { void *
AQHandles [ 13 ] ; }
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
RTP_0_RtpManager ; uint32_T Output_DSTATE ; uint32_T Output_DSTATE_g ;
uint32_T Output_DSTATE_l ; uint32_T Output_DSTATE_e ; int32_T systemEnable ;
int32_T systemEnable_c ; int32_T systemEnable_l ; int32_T systemEnable_e ;
int32_T TmpAtomicSubsysAtSwitchInport3_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_m ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_p ; int32_T
MPPTControllerusingPerturbObservetechnique_sysIdxToRun ; int32_T
internalModbus_sysIdxToRun ; int32_T internalModbus_sysIdxToRun_l ; int32_T
GridSynchronization1_sysIdxToRun ; int32_T
GridFormingGridFollowing_sysIdxToRun ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_l ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_a ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_i ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_b ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_my ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pk ; int32_T
TmpAtomicSubsysAtSwitchInport3_sysIdxToRun_myz ; int32_T
TmpAtomicSubsysAtSwitchInport1_sysIdxToRun_pkl ; int_T FromWorkspace_IWORK ;
int_T Step_MODE ; int_T Step1_MODE ; int8_T
DiscreteTimeIntegrator_PrevResetState ; int8_T
DiscreteTimeIntegrator_PrevResetState_f ; uint8_T
DiscreteTimeIntegrator_IC_LOADING ; uint8_T Integ4_SYSTEM_ENABLE ; uint8_T
Integ4_SYSTEM_ENABLE_o ; uint8_T Integ4_SYSTEM_ENABLE_h ; uint8_T
Integ4_SYSTEM_ENABLE_j ; uint8_T DiscreteTimeIntegrator_IC_LOADING_g ;
boolean_T RTP_0_SetParametersNeeded ; char_T pad_RTP_0_SetParametersNeeded [
7 ] ; DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
DW_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
DW_RMS_Microgrid_with_Utility_Connection_T RMS ; }
DW_Microgrid_with_Utility_Connection_T ; typedef struct {
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
X_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
X_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
X_RMS_Microgrid_with_Utility_Connection_T RMS ; }
X_Microgrid_with_Utility_Connection_T ; typedef struct {
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
XDot_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDot_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDot_Microgrid_with_Utility_Connection_T ; typedef struct {
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
XDis_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XDis_RMS_Microgrid_with_Utility_Connection_T RMS ; }
XDis_Microgrid_with_Utility_Connection_T ; typedef struct {
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
XAbsTol_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XAbsTol_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CStateAbsTol_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
XPtMin_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMin_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMin_Microgrid_with_Utility_Connection_T ; typedef struct {
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
XPtMax_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
XPtMax_RMS_Microgrid_with_Utility_Connection_T RMS ; }
CXPtMax_Microgrid_with_Utility_Connection_T ; typedef struct { real_T
Step_StepTime_ZC ; real_T Step1_StepTime_ZC ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
ZCV_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ; }
ZCV_Microgrid_with_Utility_Connection_T ; typedef struct { ZCSigState
Step_StepTime_ZCE ; ZCSigState Step1_StepTime_ZCE ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
ZCE_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
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
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T P_22 ; real_T P_23 ; real_T
P_24 ; real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ;
real_T P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T
P_35 ; real_T P_36 ; real_T P_37 ; real_T P_38 [ 3 ] ; real_T P_39 [ 3 ] ;
real_T P_40 ; real_T P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T
P_45 [ 4 ] ; real_T P_46 [ 4 ] ; real_T P_47 ; real_T P_48 ; real_T P_49 ;
real_T P_50 ; real_T P_51 ; real_T P_52 ; real_T P_53 ; real_T P_54 ; real_T
P_55 [ 4 ] ; real_T P_56 [ 4 ] ; real_T P_57 ; real_T P_58 ; real_T P_59 ;
real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ; real_T
P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ; real_T P_69 ; real_T P_70 ;
real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T P_74 ; real_T P_75 ; real_T
P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ; real_T P_80 ; real_T P_81 ;
real_T P_82 ; real_T P_83 [ 2 ] ; real_T P_84 ; real_T P_85 [ 2 ] ; real_T
P_86 ; real_T P_87 [ 2 ] ; real_T P_88 ; real_T P_89 [ 2 ] ; real_T P_90 ;
real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ; real_T
P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T P_101
; real_T P_102 ; real_T P_103 ; real_T P_104 ; real_T P_105 [ 2 ] ; real_T
P_106 ; real_T P_107 [ 2 ] ; real_T P_108 ; real_T P_109 [ 2 ] ; real_T P_110
; real_T P_111 [ 2 ] ; real_T P_112 ; real_T P_113 ; real_T P_114 ; real_T
P_115 ; real_T P_116 ; real_T P_117 ; real_T P_118 ; real_T P_119 ; real_T
P_120 ; real_T P_121 ; real_T P_122 ; real_T P_123 ; real_T P_124 ; real_T
P_125 ; real_T P_126 ; real_T P_127 ; real_T P_128 [ 2 ] ; real_T P_129 ;
real_T P_130 [ 2 ] ; real_T P_131 ; real_T P_132 [ 2 ] ; real_T P_133 ;
real_T P_134 [ 2 ] ; real_T P_135 ; real_T P_136 ; real_T P_137 ; real_T
P_138 ; real_T P_139 ; real_T P_140 ; real_T P_141 ; real_T P_142 ; real_T
P_143 ; real_T P_144 ; real_T P_145 ; real_T P_146 ; real_T P_147 ; real_T
P_148 ; real_T P_149 ; real_T P_150 [ 2 ] ; real_T P_151 ; real_T P_152 [ 2 ]
; real_T P_153 ; real_T P_154 [ 2 ] ; real_T P_155 ; real_T P_156 [ 2 ] ;
real_T P_157 ; real_T P_158 ; real_T P_159 ; real_T P_160 ; real_T P_161 ;
real_T P_162 ; real_T P_163 ; real_T P_164 ; real_T P_165 ; real_T P_166 ;
real_T P_167 ; real_T P_168 ; real_T P_169 ; real_T P_170 ; real_T P_171 ;
real_T P_172 ; real_T P_173 ; real_T P_174 ; real_T P_175 ; real_T P_176 ;
real_T P_177 [ 4 ] ; real_T P_178 [ 4 ] ; real_T P_179 ; real_T P_180 ;
real_T P_181 ; real_T P_182 ; real_T P_183 ; real_T P_184 ; real_T P_185 ;
real_T P_186 ; real_T P_187 ; real_T P_188 ; real_T P_189 ; real_T P_190 ;
real_T P_191 ; real_T P_192 ; real_T P_193 ; real_T P_194 ; real_T P_195 ;
real_T P_196 ; real_T P_197 ; real_T P_198 ; real_T P_199 ; real_T P_200 ;
real_T P_201 ; real_T P_202 ; real_T P_203 ; real_T P_204 ; real_T P_205 ;
real_T P_206 ; real_T P_207 ; real_T P_208 ; real_T P_209 ; real_T P_210 ;
real_T P_211 ; real_T P_212 ; real_T P_213 ; real_T P_214 ; real_T P_215 ;
real_T P_216 ; real_T P_217 ; real_T P_218 ; real_T P_219 ; real_T P_220 ;
real_T P_221 ; real_T P_222 ; real_T P_223 ; real_T P_224 ; real_T P_225 ;
real_T P_226 ; real_T P_227 ; real_T P_228 ; real_T P_229 ; real_T P_230 ;
real_T P_231 ; real_T P_232 ; real_T P_233 ; real_T P_234 ; real_T P_235 ;
real_T P_236 ; real_T P_237 ; real_T P_238 ; real_T P_239 ; real_T P_240 ;
real_T P_241 ; real_T P_242 ; real_T P_243 ; real_T P_244 ; real_T P_245 ;
real_T P_246 ; real_T P_247 ; real_T P_248 ; real_T P_249 ; real_T P_250 ;
real_T P_251 ; real_T P_252 ; real_T P_253 ; real_T P_254 ; real_T P_255 ;
real_T P_256 ; real_T P_257 ; real_T P_258 ; real_T P_259 ; uint32_T P_260 ;
uint32_T P_261 ; uint32_T P_262 ; uint32_T P_263 ; uint32_T P_264 ; uint32_T
P_265 ; uint32_T P_266 ; uint32_T P_267 ; uint32_T P_268 ; uint32_T P_269 ;
uint32_T P_270 ; uint32_T P_271 ; uint32_T P_272 ; uint32_T P_273 ; uint32_T
P_274 ; uint32_T P_275 ; uint8_T P_276 ; char_T pad_P_276 [ 7 ] ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_pw ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_e ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_h ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_g ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS_p ;
P_RMS_Microgrid_with_Utility_Connection_T RMS_n ;
P_TrueRMS_Microgrid_with_Utility_Connection_T TrueRMS ;
P_RMS_Microgrid_with_Utility_Connection_T RMS ; } ; extern
P_Microgrid_with_Utility_Connection_T
Microgrid_with_Utility_Connection_rtDefaultP ;
#endif
