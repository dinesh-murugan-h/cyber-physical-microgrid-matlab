#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmtlog.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmtassert.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmtobs.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmtmode.h"
#include "ssc_ml_fun.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt_external_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt_externals.h"
static int32_T gmt_y ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_iassert ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_init_r ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_init_i ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_cache_r ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_cache_i ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_update_r ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_update_i ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_lock_r ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_lock_i ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_update2_r ( const GlobalMethodTable * ds , const NeDynamicSystemInput *
in , GmtMethodOutput * out ) ; static int32_T gmt_update2_i ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_lock2_r ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_lock2_i ( const GlobalMethodTable * ds , const NeDynamicSystemInput * in
, GmtMethodOutput * out ) ; static int32_T gmt_dp_l ( const GlobalMethodTable
* ds , const NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static
int32_T gmt_dp_i ( const GlobalMethodTable * ds , const NeDynamicSystemInput
* in , GmtMethodOutput * out ) ; static int32_T gmt_dp_j ( const
GlobalMethodTable * ds , const NeDynamicSystemInput * in , GmtMethodOutput *
out ) ; static int32_T gmt_dp_r ( const GlobalMethodTable * ds , const
NeDynamicSystemInput * in , GmtMethodOutput * out ) ; static int32_T
gmt_init_diff ( const GlobalMethodTable * ds , const NeDynamicSystemInput *
in , GmtMethodOutput * out ) ; GlobalMethodTable *
Microgrid_with_Utility_Connection_d0b73514_0_gmt ( PmAllocator * allocator )
{ static NeAssertData assert_data [ 88 ] = { {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 0U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 2U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 4U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , TRUE ,
"State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 6U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , TRUE ,
"State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 8U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , { "Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 10U ,
"Battery.Battery1.electricalModel" , "batteryecm.table_battery" , TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , { "Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 12U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.table_battery" , FALSE ,
"Internal resistance fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 14U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.table_battery" , FALSE ,
"Open-circuit voltage fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 2U , 16U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.table_battery" , FALSE ,
"Cell capacity fading factor must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker" , 1U , 18U ,
"Circuit_Breaker" , "ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
 "Mode value is out of range for 'internal_mode_var_m__'. Mode must be between 1 and 2."
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 2U , 19U ,
"PV_Array.Solar_Cell.CCS" , "ee.sources.solar_cell_current" , FALSE ,
"Temperature adjusted solar-generated current, Iph must be greater than zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
"Microgrid_with_Utility_Connection/PV converter/Average-Value DC-DC Converter"
, 1U , 21U , "PV_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"Input voltage must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
"Microgrid_with_Utility_Connection/PV converter/Average-Value DC-DC Converter"
, 1U , 22U , "PV_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , TRUE ,
 "DutyCycle is not in an acceptable range. DutyCycle must be between 0 and 0.99, inclusive. Input is clipped and might give wrong results."
, "physmod:ee:library:AdjustedInput" , } , {
 "Microgrid_with_Utility_Connection/battery converter/Average-Value DC-DC Converter"
, 1U , 23U , "battery_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"Input voltage must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "Microgrid_with_Utility_Connection/battery converter/Average-Value DC-DC Converter"
, 1U , 24U , "battery_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , TRUE ,
 "DutyCycle is not in an acceptable range. DutyCycle must be between 0 and 0.99, inclusive. Input is clipped and might give wrong results."
, "physmod:ee:library:AdjustedInput" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 1/Average-Value DC-DC Converter1"
, 1U , 25U , "fuel_cell_converter_1.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"Input voltage must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 1/Average-Value DC-DC Converter1"
, 1U , 26U , "fuel_cell_converter_1.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , TRUE ,
 "DutyCycle is not in an acceptable range. DutyCycle must be between 0 and 0.99, inclusive. Input is clipped and might give wrong results."
, "physmod:ee:library:AdjustedInput" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 2/Average-Value DC-DC Converter1"
, 1U , 27U , "fuel_cell_converter_2.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"Input voltage must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 2/Average-Value DC-DC Converter1"
, 1U , 28U , "fuel_cell_converter_2.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , TRUE ,
 "DutyCycle is not in an acceptable range. DutyCycle must be between 0 and 0.99, inclusive. Input is clipped and might give wrong results."
, "physmod:ee:library:AdjustedInput" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/Resistor"
, 1U , 29U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/Resistor"
, 1U , 30U ,
"AC_DC_Power_Conversion.AC_DC_Power_Conversion.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 31U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 32U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 33U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 34U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 35U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 36U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 37U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 38U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 39U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 40U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 41U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 42U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 43U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 44U ,
"Battery.Battery1.electricalModel.power_dissipated" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Resistor1" , 1U , 45U ,
"Battery.Resistor1.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Battery/Resistor1" , 1U , 46U ,
"Battery.Resistor1.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Fuel Cell 1/Resistor2" , 1U , 47U ,
"Fuel_Cell_1.Resistor2.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Fuel Cell 1/Resistor2" , 1U , 48U ,
"Fuel_Cell_1.Resistor2.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/Fuel Cell 2/Resistor2" , 1U , 49U ,
"Fuel_Cell_2.Resistor2.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/Fuel Cell 2/Resistor2" , 1U , 50U ,
"Fuel_Cell_2.Resistor2.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 51U ,
"PV_Array.Solar_Cell.diode1.private.ohmicResistance.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 52U ,
"PV_Array.Solar_Cell.diode1.private.ohmicResistance.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 53U ,
"PV_Array.Solar_Cell.diode2.private.ohmicResistance.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 54U ,
"PV_Array.Solar_Cell.diode2.private.ohmicResistance.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/battery converter/Resistor" , 1U , 55U ,
"battery_converter.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/battery converter/Resistor" , 1U , 56U ,
"battery_converter.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/fuel cell converter 1/Resistor" , 1U , 57U
, "fuel_cell_converter_1.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/fuel cell converter 1/Resistor" , 1U , 58U
, "fuel_cell_converter_1.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/fuel cell converter 2/Resistor" , 1U , 59U
, "fuel_cell_converter_2.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/fuel cell converter 2/Resistor" , 1U , 60U
, "fuel_cell_converter_2.Resistor.power_dissipated" ,
"foundation.electrical.elements.resistor" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 61U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 62U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 63U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 64U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 65U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 66U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 67U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 68U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 69U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 70U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 71U ,
"Battery.Battery1.electricalModel" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/AC//DC Power Conversion/AC//DC Power Conversion/PS Divide"
, 1U , 72U , "AC_DC_Power_Conversion.AC_DC_Power_Conversion.PS_Divide" ,
"foundation.signal.functions.divide" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 73U ,
"Battery.Battery1.electricalModel" ,
"batteryecm.tableBatteryEquivalentCircuit" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 74U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.tableBatteryCyclingAging"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 75U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.tableBatteryCyclingAging"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 76U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.tableBatteryCyclingAging"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
"Microgrid_with_Utility_Connection/Battery/Battery1" , 1U , 77U ,
"Battery.Battery1.cyclingAgingModel" , "batteryecm.tableBatteryCyclingAging"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
"Microgrid_with_Utility_Connection/Circuit Breaker" , 1U , 78U ,
"Circuit_Breaker" , "ee.switches.fundamental.circuit_breaker.ps" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 79U ,
"PV_Array.Solar_Cell.CCS" , "ee.sources.solar_cell_current" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 80U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 81U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 82U ,
"PV_Array.Solar_Cell.diode1.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 83U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 84U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 85U ,
"PV_Array.Solar_Cell.diode2.private.Diode" ,
"ee.semiconductors.diodeExponential" , TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 86U ,
"PV_Array.Solar_Cell.resistorParallel" , "ee.passive.resistor_thermal_pow" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 87U ,
"PV_Array.Solar_Cell.resistorParallel" , "ee.passive.resistor_thermal_pow" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 88U ,
"PV_Array.Solar_Cell.resistorSeries" , "ee.passive.resistor_thermal_pow" ,
FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , 1U , 89U ,
"PV_Array.Solar_Cell.resistorSeries" , "ee.passive.resistor_thermal_pow" ,
FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"Microgrid_with_Utility_Connection/PV converter/Average-Value DC-DC Converter"
, 1U , 90U , "PV_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"Microgrid_with_Utility_Connection/PV converter/Average-Value DC-DC Converter"
, 1U , 91U , "PV_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/battery converter/Average-Value DC-DC Converter"
, 1U , 92U , "battery_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/battery converter/Average-Value DC-DC Converter"
, 1U , 93U , "battery_converter.Average_Value_DC_DC_Converter" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 1/Average-Value DC-DC Converter1"
, 1U , 94U , "fuel_cell_converter_1.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 1/Average-Value DC-DC Converter1"
, 1U , 95U , "fuel_cell_converter_1.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 2/Average-Value DC-DC Converter1"
, 1U , 96U , "fuel_cell_converter_2.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "Microgrid_with_Utility_Connection/fuel cell converter 2/Average-Value DC-DC Converter1"
, 1U , 97U , "fuel_cell_converter_2.Average_Value_DC_DC_Converter1" ,
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , FALSE ,
"In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange assert_ranges [ 98 ] = { { "batteryecm.tableBatteryEquivalentCircuit"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.table_battery" , 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , }
, { "batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryCyclingAging" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.table_battery" , 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , }
, { "batteryecm.tableBatteryCyclingAging" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.table_battery" , 1U , 1U , 1U ,
1U , NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryCyclingAging" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.table_battery" , 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , }
, { "ee.switches.fundamental.circuit_breaker.ps" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.sources.solar_cell_current" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "ee.sources.solar_cell" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryEquivalentCircuit" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"foundation.electrical.elements.resistor" , 20U , 27U , 20U , 28U ,
NE_RANGE_TYPE_NORMAL , } , { "foundation.electrical.elements.resistor" , 20U
, 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "foundation.signal.functions.divide" , 21U ,
16U , 21U , 18U , NE_RANGE_TYPE_NORMAL , } , {
"batteryecm.tableBatteryEquivalentCircuit" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryCyclingAging" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryCyclingAging" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "batteryecm.tableBatteryCyclingAging" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"batteryecm.tableBatteryCyclingAging" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.switches.fundamental.circuit_breaker.ps"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.sources.solar_cell_current" , 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED
, } , { "ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.diodeExponential" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.semiconductors.diodeExponential" , 1U ,
1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.resistor_thermal_pow" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.resistor_thermal_pow" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "ee.passive.resistor_thermal_pow" ,
1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.passive.resistor_thermal_pow" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
"ee.semiconductors.converters.average_dcdc_converters.buck_boost" , 1U , 1U ,
1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
initial_assert_data = NULL ; static NeRange * initial_assert_ranges = NULL ;
static NeParameterVector paramInfo_logicals = { 0U , NULL } ; static
NeParameterVector paramInfo_integers = { 0U , NULL } ; static
NeParameterVector paramInfo_indices = { 0U , NULL } ; static NeParameterData
paramInfo_reals_ [ 2 ] = { { "RTP_BCA3A35F_stateOfCharge" ,
"Microgrid_with_Utility_Connection/Battery/Battery1" , "" , 0U , 1U , TRUE ,
} , { "RTP_BF779111_TFIXED" ,
"Microgrid_with_Utility_Connection/PV Array/Solar Cell" , "" , 0U , 1U , TRUE
, } } ; static NeParameterVector paramInfo_reals = { 2U , paramInfo_reals_ }
; static int32_T mode_indices_ [ 29 ] = { 15 , 6 , 33 , 76 , 77 , 4 , 80 , 0
, 5 , 37 , 71 , 3 , 31 , 30 , 69 , 10 , 56 , 8 , 32 , 27 , 79 , 1 , 70 , 9 ,
7 , 28 , 36 , 29 , 35 } ; static PmIntVector mode_indices = { 29U ,
mode_indices_ } ; static int32_T obs_is_linear_ [ 336 ] = { 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 ,
0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 ,
0 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 1 , 1 ,
1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 , 0 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 0 }
; static PmIntVector obs_is_linear = { 336U , obs_is_linear_ } ; static
GlobalMethodTable gmt ; ( void ) allocator ; gmt . mMethods [ GMT_METHOD_MODE
] = Microgrid_with_Utility_Connection_d0b73514_0_gmtmode ; gmt . mMethods [
GMT_METHOD_Y ] = gmt_y ; gmt . mMethods [ GMT_METHOD_OBS ] =
Microgrid_with_Utility_Connection_d0b73514_0_gmtobs ; gmt . mMethods [
GMT_METHOD_ASSERT ] = Microgrid_with_Utility_Connection_d0b73514_0_gmtassert
; gmt . mMethods [ GMT_METHOD_IASSERT ] = gmt_iassert ; gmt . mMethods [
GMT_METHOD_INIT_R ] = gmt_init_r ; gmt . mMethods [ GMT_METHOD_INIT_I ] =
gmt_init_i ; gmt . mMethods [ GMT_METHOD_CACHE_R ] = gmt_cache_r ; gmt .
mMethods [ GMT_METHOD_CACHE_I ] = gmt_cache_i ; gmt . mMethods [
GMT_METHOD_UPDATE_R ] = gmt_update_r ; gmt . mMethods [ GMT_METHOD_UPDATE_I ]
= gmt_update_i ; gmt . mMethods [ GMT_METHOD_LOCK_R ] = gmt_lock_r ; gmt .
mMethods [ GMT_METHOD_LOCK_I ] = gmt_lock_i ; gmt . mMethods [
GMT_METHOD_UPDATE2_R ] = gmt_update2_r ; gmt . mMethods [
GMT_METHOD_UPDATE2_I ] = gmt_update2_i ; gmt . mMethods [ GMT_METHOD_LOCK2_R
] = gmt_lock2_r ; gmt . mMethods [ GMT_METHOD_LOCK2_I ] = gmt_lock2_i ; gmt .
mMethods [ GMT_METHOD_DP_L ] = gmt_dp_l ; gmt . mMethods [ GMT_METHOD_DP_I ]
= gmt_dp_i ; gmt . mMethods [ GMT_METHOD_DP_J ] = gmt_dp_j ; gmt . mMethods [
GMT_METHOD_DP_R ] = gmt_dp_r ; gmt . mMethods [ GMT_METHOD_INIT_DIFF ] =
gmt_init_diff ; gmt . mMethods [ GMT_METHOD_LOG ] =
Microgrid_with_Utility_Connection_d0b73514_0_gmtlog ; gmt . mNumY = 12U ; gmt
. mNumAsserts = 88U ; gmt . mAssertData = assert_data ; gmt .
mNumAssertRanges = 98U ; gmt . mAssertRanges = assert_ranges ; gmt .
mNumInitialAsserts = 0U ; gmt . mInitialAssertData = initial_assert_data ;
gmt . mNumInitialAssertRanges = 0U ; gmt . mInitialAssertRanges =
initial_assert_ranges ; gmt . mParameterInfo . mLogicals = paramInfo_logicals
; gmt . mParameterInfo . mIntegers = paramInfo_integers ; gmt .
mParameterInfo . mIndices = paramInfo_indices ; gmt . mParameterInfo . mReals
= paramInfo_reals ; gmt . mModeIndices = & mode_indices ; gmt . mObsIsLinear
= & obs_is_linear ; return & gmt ; } static int32_T gmt_y ( const
GlobalMethodTable * sys , const NeDynamicSystemInput * t3 , GmtMethodOutput *
out ) { out -> mY . mX [ 1UL ] = ( ( ( t3 -> mX . mX [ 1UL ] * 0.001 + t3 ->
mX . mX [ 2UL ] * 0.001 ) + t3 -> mX . mX [ 3UL ] * 0.001 ) + t3 -> mX . mX [
4UL ] * 0.001 ) + t3 -> mX . mX [ 0UL ] ; out -> mY . mX [ 4UL ] = t3 -> mX .
mX [ 9UL ] * - 0.001 + t3 -> mX . mX [ 11UL ] ; out -> mY . mX [ 5UL ] = - t3
-> mX . mX [ 22UL ] ; out -> mY . mX [ 6UL ] = t3 -> mX . mX [ 23UL ] ; out
-> mY . mX [ 8UL ] = t3 -> mX . mX [ 17UL ] ; out -> mY . mX [ 0UL ] = - ( ( ( t3 -> mX . mX [ 1UL ] + t3 -> mX . mX [ 2UL ] ) + t3 -> mX . mX [ 3UL ] ) + t3 -> mX . mX [ 4UL ] ) ; out -> mY . mX [ 2UL ] = t3 -> mX . mX [ 10UL ] ; out -> mY . mX [ 3UL ] = - t3 -> mX . mX [ 9UL ] ; out -> mY . mX [ 7UL ] = - t3 -> mX . mX [ 1UL ] ; out -> mY . mX [ 9UL ] = - t3 -> mX . mX [ 2UL ] ; out -> mY . mX [ 10UL ] = - t3 -> mX . mX [ 3UL ] ; out -> mY . mX [ 11UL ] = - t3 -> mX . mX [ 4UL ] ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_iassert ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_l ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_j ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_dp_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { out -> mDP_R . mX [ 0UL ] = t1 -> mP_R . mX [ 1UL ] ; out -> mDP_R . mX [ 1UL ] = t1 -> mP_R . mX [ 1UL ] + 273.15 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; out -> mINIT_I . mX [ 0 ] = 1 ; out -> mINIT_I . mX [ 1 ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_cache_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_cache_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { out -> mCACHE_I . mX [ 0UL ] = ( int32_T ) ( t1 -> mM . mX [ 0UL ] != 0 ) ; out -> mCACHE_I . mX [ 1UL ] = ( int32_T ) ( t1 -> mM . mX [ 1UL ] != 0 ) ; out -> mCACHE_I . mX [ 2UL ] = ( int32_T ) ( ( t1 -> mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 2UL ) ) ; out -> mCACHE_I . mX [ 3UL ] = ( int32_T ) ( ( t1 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 1UL ) ) ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t2 , GmtMethodOutput * out ) { size_t t0 ; if ( ( ( t2 -> mCI . mX [ 1UL ] == 0 ) && ( t2 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 1UL ) ) || ( ( t2 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 1UL ) && ( t2 -> mQ . mX [ 1UL ] != 0 ) ) ) { t0 = 2UL ; } else if ( ( ( t2 -> mCI . mX [ 0UL ] == 0 ) && ( t2 -> mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 2UL ) ) || ( ( t2 -> mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 2UL ) && ( t2 -> mQ . mX [ 1UL ] != 0 ) ) ) { t0 = 1UL ; } else { t0 = ( size_t ) t2 -> mQ . mX [ 0UL ] ; } out -> mUPDATE_I . mX [ 0UL ] = ( int32_T ) t0 ; out -> mUPDATE_I . mX [ 1UL ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { if ( ( ( t1 -> mCI . mX [ 1UL ] == 0 ) && ( t1 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 1UL ) ) || ( ( t1 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 1UL ) && ( t1 -> mQ . mX [ 1UL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0UL ] = true ; } else { out -> mLOCK_I . mX [ 0UL ] = ( ( ( t1 -> mCI . mX [ 0UL ] == 0 ) && ( t1 -> mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 2UL ) ) || ( ( t1 -> mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 2UL ) && ( t1 -> mQ . mX [ 1UL ] != 0 ) ) ) ; } out -> mLOCK_I . mX [ 1UL ] = ( t1 -> mQ . mX [ 1UL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update2_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_update2_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t2 , GmtMethodOutput * out ) { size_t t0 ; if ( ( t2 -> mCI . mX [ 3UL ] == 0 ) && ( t2 -> mU . mX [ 3UL ] < 0.0 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 1UL ) ) { t0 = 2UL ; } else if ( ( t2 -> mCI . mX [ 2UL ] == 0 ) && ( t2 -> mU . mX [ 3UL ] > 0.0 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 2UL ) ) { t0 = 1UL ; } else { t0 = ( size_t ) t2 -> mQ . mX [ 0UL ] ; } out -> mUPDATE2_I . mX [ 0UL ] = ( int32_T ) t0 ; out -> mUPDATE2_I . mX [ 1UL ] = ( int32_T ) ( t2 -> mQ . mX [ 1UL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock2_r ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_lock2_i ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { if ( ( t1 -> mCI . mX [ 3UL ] == 0 ) && ( t1 -> mU . mX [ 3UL ] < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 1UL ) ) { out -> mLOCK2_I . mX [ 0UL ] = true ; } else { out -> mLOCK2_I . mX [ 0UL ] = ( ( t1 -> mCI . mX [ 2UL ] == 0 ) && ( t1 -> mU . mX [ 3UL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0UL ] == 2UL ) ) ; } out -> mLOCK2_I . mX [ 1UL ] = false ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T gmt_init_diff ( const GlobalMethodTable * sys , const NeDynamicSystemInput * t1 , GmtMethodOutput * out ) { ( void ) t1 ; out -> mINIT_DIFF . mX [ 0 ] = 0.0 ; out -> mINIT_DIFF . mX [ 1 ] = 0.0 ; out -> mINIT_DIFF . mX [ 2 ] = 0.0 ; out -> mINIT_DIFF . mX [ 3 ] = 0.0 ; out -> mINIT_DIFF . mX [ 4 ] = 0.0 ; out -> mINIT_DIFF . mX [ 5 ] = 0.0 ; out -> mINIT_DIFF . mX [ 6 ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
