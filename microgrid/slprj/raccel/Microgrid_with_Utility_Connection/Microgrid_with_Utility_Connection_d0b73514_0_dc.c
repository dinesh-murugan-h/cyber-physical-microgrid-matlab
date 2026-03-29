#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dcm.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dcm_p.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dcf.h"
#include "ssc_ml_fun.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_external_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_externals.h"
DifferentialClump * Microgrid_with_Utility_Connection_d0b73514_0_dc ( PmAllocator * allocator ) { static int32_T state_indices_ [ 7 ] = { 12 , 13 , 14 , 15 , 16 , 7 , 8 } ; static PmIntVector state_indices = { 7U , state_indices_ } ; static PmIntVector m_ref_indices = { 0U , NULL } ; static PmIntVector q_ref_indices = { 0U , NULL } ; static DifferentialClump dc ; ( void ) allocator ; dc . mMethods [ DC_METHOD_M_P ] = Microgrid_with_Utility_Connection_d0b73514_0_dcm_p ; dc . mMethods [ DC_METHOD_M ] = Microgrid_with_Utility_Connection_d0b73514_0_dcm ; dc . mMethods [ DC_METHOD_F ] = Microgrid_with_Utility_Connection_d0b73514_0_dcf ; dc . mMNnz = 27U ; dc . mStateIndices = & state_indices ; dc . mMRefIndices = & m_ref_indices ; dc . mQRefIndices = & q_ref_indices ; dc . mModeCardinality = SWL_FINITE ; return & dc ; }
