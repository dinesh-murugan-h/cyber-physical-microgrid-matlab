#include "nesl_rtw_swl.h"
#include "ssc_ml_fun.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_dc_external_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_dc_externals.h"
static int32_T dc_m_p ( const DifferentialClump * ds , const
NeDynamicSystemInput * in , DcMethodOutput * out ) ; static int32_T dc_m ( const
DifferentialClump * ds , const NeDynamicSystemInput * in , DcMethodOutput *
out ) ; static int32_T dc_f ( const DifferentialClump * ds , const
NeDynamicSystemInput * in , DcMethodOutput * out ) ; DifferentialClump *
Microgrid_with_Utility_Connection_b6e50c02_0_dc ( PmAllocator * allocator ) {
static PmIntVector state_indices = { 0U , NULL } ; static PmIntVector
m_ref_indices = { 0U , NULL } ; static PmIntVector q_ref_indices = { 0U ,
NULL } ; static DifferentialClump dc ; ( void ) allocator ; dc . mMethods [
DC_METHOD_M_P ] = dc_m_p ; dc . mMethods [ DC_METHOD_M ] = dc_m ; dc .
mMethods [ DC_METHOD_F ] = dc_f ; dc . mMNnz = 0U ; dc . mStateIndices = &
state_indices ; dc . mMRefIndices = & m_ref_indices ; dc . mQRefIndices = &
q_ref_indices ; dc . mModeCardinality = SWL_FINITE ; return & dc ; } static
int32_T dc_f ( const DifferentialClump * sys , const NeDynamicSystemInput *
t1 , DcMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T dc_m ( const DifferentialClump * sys ,
const NeDynamicSystemInput * t1 , DcMethodOutput * out ) { ( void ) t1 ; ( void
) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T dc_m_p ( const
DifferentialClump * sys , const NeDynamicSystemInput * t1 , DcMethodOutput *
out ) { ( void ) t1 ; out -> mM_P . mNumCol = 0UL ; out -> mM_P . mNumRow =
0UL ; out -> mM_P . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ;
}
