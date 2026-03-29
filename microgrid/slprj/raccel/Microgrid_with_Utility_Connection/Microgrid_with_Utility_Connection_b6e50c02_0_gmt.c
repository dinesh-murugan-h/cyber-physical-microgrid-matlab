#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtlog.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtupdate_i.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmty.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtassert.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtobs.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtupdate2_i.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtlock2_i.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtlock_i.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmtcache_i.h"
#include "ssc_ml_fun.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt_external_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt_externals.h"
static int32_T gmt_mode ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_iassert ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_init_r ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_init_i ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_cache_r ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_update_r ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_lock_r ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_update2_r ( const GlobalMethodTable * ds , const NeDynamicSystemInput *
in , GmtMethodOutput * out ) ; static int32_T gmt_lock2_r ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_dp_l ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T gmt_dp_i
( const GlobalMethodTable * ds , const NeDynamicSystemInput * in ,
GmtMethodOutput * out ) ; static int32_T gmt_dp_j ( const GlobalMethodTable *
ds , const NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static
int32_T gmt_dp_r ( const GlobalMethodTable * ds , const NeDynamicSystemInput
* in , GmtMethodOutput * out ) ; static int32_T gmt_init_diff ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; GlobalMethodTable * Microgrid_with_Utility_Connection_b6e50c02_0_gmt
( PmAllocator * allocator ) { static NeAssertData assert_data [ 72 ] = { {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 2U , 0U ,
"Circuit_Breaker_at_GEN1.breakerA" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 2U , 2U ,
"Circuit_Breaker_at_GEN1.breakerB" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 2U , 4U ,
"Circuit_Breaker_at_GEN1.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 2U , 6U ,
"Circuit_Breaker_at_GEN2.breakerA" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 2U , 8U ,
"Circuit_Breaker_at_GEN2.breakerB" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 2U , 10U ,
"Circuit_Breaker_at_GEN2.breakerC" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 2U , 12U ,
"Circuit_Breaker_at_GEN3.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 2U , 14U ,
"Circuit_Breaker_at_GEN3.breakerB" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 2U , 16U ,
"Circuit_Breaker_at_GEN3.breakerC" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 2U , 18U ,
"Circuit_Breaker_at_GEN4.breakerA" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 2U , 20U ,
"Circuit_Breaker_at_GEN4.breakerB" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 2U , 22U ,
"Circuit_Breaker_at_GEN4.breakerC" , "ee.switches.circuit_breaker.ps.abc" ,
FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 2U , 24U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerA" ,
"ee.switches.circuit_breaker.ps.abc" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 2U , 26U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerB" ,
"ee.switches.circuit_breaker.ps.abc" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 2U , 28U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerC" ,
"ee.switches.circuit_breaker.ps.abc" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 5."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 30U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 31U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 32U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 33U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 34U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/RLC (Three-Phase)"
, 1U , 35U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.RLC_Three_Phase.rlc" ,
"ee.passive.rlc_assemblies.rlc.rlc" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Active Power Load/PS Divide1" , 1U , 36U ,
"Active_Power_Load.PS_Divide1" , "foundation.signal.functions.divide" , FALSE
, "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 37U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 38U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 39U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 40U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 41U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 42U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 43U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Generator 5MVA1" , 1U , 44U ,
"Generator_02.Generator_5MVA1.power_dissipated" ,
"ee.electromech.sync.salient_pole.base" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 45U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 46U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 47U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 48U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 49U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Microgrid_with_Utility_Connection/Generator 02/Terminal Voltage Measurement"
, 1U , 50U , "Generator_02.Terminal_Voltage_Measurement" ,
"ee.electromech.sync.sm_measurement" , FALSE ,
"Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/PS Divide" , 1U , 51U
, "Reactive_Power_Load.PS_Divide" , "foundation.signal.functions.divide" ,
FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor" ,
1U , 52U , "Reactive_Power_Load.Variable_Inductor" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor" ,
1U , 53U , "Reactive_Power_Load.Variable_Inductor" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor1" ,
1U , 54U , "Reactive_Power_Load.Variable_Inductor1" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor1" ,
1U , 55U , "Reactive_Power_Load.Variable_Inductor1" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor2" ,
1U , 56U , "Reactive_Power_Load.Variable_Inductor2" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Reactive Power Load/Variable Inductor2" ,
1U , 57U , "Reactive_Power_Load.Variable_Inductor2" ,
"ee.passive.variable_inductor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 58U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 59U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 60U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 61U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 62U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 63U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 64U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Generator 5MVA" , 1U , 65U ,
"x.Generator_5MVA.power_dissipated" , "ee.electromech.sync.salient_pole.base"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 66U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 67U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 68U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 69U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 70U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Microgrid_with_Utility_Connection/ /Terminal Voltage Measurement" , 1U , 71U
, "x.Terminal_Voltage_Measurement" , "ee.electromech.sync.sm_measurement" ,
FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 1U , 72U ,
"Circuit_Breaker_at_GEN1.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 1U , 73U ,
"Circuit_Breaker_at_GEN1.breakerB" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN1" , 1U , 74U ,
"Circuit_Breaker_at_GEN1.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 1U , 75U ,
"Circuit_Breaker_at_GEN2.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 1U , 76U ,
"Circuit_Breaker_at_GEN2.breakerB" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN2" , 1U , 77U ,
"Circuit_Breaker_at_GEN2.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 1U , 78U ,
"Circuit_Breaker_at_GEN3.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 1U , 79U ,
"Circuit_Breaker_at_GEN3.breakerB" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN3" , 1U , 80U ,
"Circuit_Breaker_at_GEN3.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 1U , 81U ,
"Circuit_Breaker_at_GEN4.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 1U , 82U ,
"Circuit_Breaker_at_GEN4.breakerB" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker at GEN4" , 1U , 83U ,
"Circuit_Breaker_at_GEN4.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 1U , 84U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerA" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 1U , 85U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerB" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/d/Circuit Breaker at Point of Common Coupling (PCC)"
, 1U , 86U , "d.Circuit_Breaker_at_Point_of_Common_Coupling_PCC.breakerC" ,
"ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange assert_ranges [ 87 ] = { {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.circuit_breaker.ps.abc" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U
, 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U
, 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.rlc_assemblies.rlc.rlc" , 1U , 1U
, 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"foundation.signal.functions.divide" , 21U , 16U , 21U , 18U ,
NE_RANGE_TYPE_NORMAL , } , { "ee.electromech.sync.salient_pole.base" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "foundation.signal.functions.divide" , 21U ,
16U , 21U , 18U , NE_RANGE_TYPE_NORMAL , } , { "ee.passive.variable_inductor"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.variable_inductor" , 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED
, } , { "ee.passive.variable_inductor" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.variable_inductor" , 1U , 1U , 1U
, 1U , NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.variable_inductor" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.variable_inductor"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.salient_pole.base" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.salient_pole.base" , 1U
, 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.electromech.sync.sm_measurement" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.electromech.sync.sm_measurement" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData * initial_assert_data =
NULL ; static NeRange * initial_assert_ranges = NULL ; static
NeParameterVector paramInfo_logicals = { 0U , NULL } ; static
NeParameterVector paramInfo_integers = { 0U , NULL } ; static
NeParameterVector paramInfo_indices = { 0U , NULL } ; static
NeParameterVector paramInfo_reals = { 0U , NULL } ; static int32_T
mode_indices_ [ 2 ] = { 132 , 117 } ; static PmIntVector mode_indices = { 2U
, mode_indices_ } ; static int32_T obs_is_linear_ [ 817 ] = { 1 , 1 , 1 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 0
, 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1
, 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 ,
1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 ,
0 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 0 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 0
, 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0 , 0 , 0 , 0 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1
, 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0
, 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 0 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 0 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 0 , 0 } ; static PmIntVector
obs_is_linear = { 817U , obs_is_linear_ } ; static GlobalMethodTable gmt ; ( void ) allocator ; gmt . mMethods [ GMT_METHOD_MODE ] = gmt_mode ; gmt . mMethods [ GMT_METHOD_Y ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmty ; gmt . mMethods [ GMT_METHOD_OBS ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtobs ; gmt . mMethods [ GMT_METHOD_ASSERT ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtassert ; gmt . mMethods [ GMT_METHOD_IASSERT ] = gmt_iassert ; gmt . mMethods [ GMT_METHOD_INIT_R ] = gmt_init_r ; gmt . mMethods [ GMT_METHOD_INIT_I ] = gmt_init_i ; gmt . mMethods [ GMT_METHOD_CACHE_R ] = gmt_cache_r ; gmt . mMethods [ GMT_METHOD_CACHE_I ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtcache_i ; gmt . mMethods [ GMT_METHOD_UPDATE_R ] = gmt_update_r ; gmt . mMethods [ GMT_METHOD_UPDATE_I ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtupdate_i ; gmt . mMethods [ GMT_METHOD_LOCK_R ] = gmt_lock_r ; gmt . mMethods [ GMT_METHOD_LOCK_I ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtlock_i ; gmt . mMethods [ GMT_METHOD_UPDATE2_R ] = gmt_update2_r ; gmt . mMethods [ GMT_METHOD_UPDATE2_I ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtupdate2_i ; gmt . mMethods [ GMT_METHOD_LOCK2_R ] = gmt_lock2_r ; gmt . mMethods [ GMT_METHOD_LOCK2_I ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtlock2_i ; gmt . mMethods [ GMT_METHOD_DP_L ] = gmt_dp_l ; gmt . mMethods [ GMT_METHOD_DP_I ] = gmt_dp_i ; gmt . mMethods [ GMT_METHOD_DP_J ] = gmt_dp_j ; gmt . mMethods [ GMT_METHOD_DP_R ] = gmt_dp_r ; gmt . mMethods [ GMT_METHOD_INIT_DIFF ] = gmt_init_diff ; gmt . mMethods [ GMT_METHOD_LOG ] = Microgrid_with_Utility_Connection_b6e50c02_0_gmtlog ; gmt . mNumY = 32U ; gmt . mNumAsserts = 72U ; gmt . mAssertData = assert_data ; gmt . mNumAssertRanges = 87U ; gmt . mAssertRanges = assert_ranges ; gmt . mNumInitialAsserts = 0U ; gmt . mInitialAssertData = initial_assert_data ; gmt . mNumInitialAssertRanges = 0U ; gmt . mInitialAssertRanges = initial_assert_ranges ; gmt . mParameterInfo . mLogicals = paramInfo_logicals ; gmt . mParameterInfo . mIntegers = paramInfo_integers ; gmt . mParameterInfo . mIndices = paramInfo_indices ; gmt . mParameterInfo . mReals = paramInfo_reals ; gmt . mModeIndices = & mode_indices ; gmt . mObsIsLinear = & obs_is_linear ; return & gmt ; } static int32_T gmt_mode ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { out -> mMODE . mX [ 0UL ] = ( int32_T ) ( t1 -> mU . mX [ 6UL ] != 0.0 ) ; out -> mMODE . mX [ 1UL ] = ( int32_T ) ( t1 -> mU . mX [ 3UL ] * 0.001 != 0.0 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_iassert ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_l ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_j ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; out -> mINIT_I . mX [ 0 ] = 1 ; out -> mINIT_I . mX [ 1 ] = 1 ; out -> mINIT_I . mX [ 2 ] = 1 ; out -> mINIT_I . mX [ 3 ] = 1 ; out -> mINIT_I . mX [ 4 ] = 1 ; out -> mINIT_I . mX [ 5 ] = 1 ; out -> mINIT_I . mX [ 6 ] = 1 ; out -> mINIT_I . mX [ 7 ] = 1 ; out -> mINIT_I . mX [ 8 ] = 1 ; out -> mINIT_I . mX [ 9 ] = 1 ; out -> mINIT_I . mX [ 10 ] = 1 ; out -> mINIT_I . mX [ 11 ] = 1 ; out -> mINIT_I . mX [ 12 ] = 1 ; out -> mINIT_I . mX [ 13 ] = 1 ; out -> mINIT_I . mX [ 14 ] = 1 ; out -> mINIT_I . mX [ 15 ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_cache_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update2_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock2_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_diff ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t3 , GmtMethodOutput * out ) { ( void ) t3 ; out -> mINIT_DIFF . mX [ 0UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 1UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 2UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 3UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 4UL ] = 0.31415926535897931 ; out -> mINIT_DIFF . mX [ 5UL ] = 94.247779607693786 ; out -> mINIT_DIFF . mX [ 6UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 7UL ] = 94.247779607693786 ; out -> mINIT_DIFF . mX [ 8UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 9UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 10UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 11UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 12UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 13UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 14UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 15UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 16UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 17UL ] = 0.31415926535897931 ; out -> mINIT_DIFF . mX [ 18UL ] = 0.0 ; out -> mINIT_DIFF . mX [ 19UL ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
