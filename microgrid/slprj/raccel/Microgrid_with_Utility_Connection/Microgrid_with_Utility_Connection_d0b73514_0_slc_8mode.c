#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8mode.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_slc_8mode ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t5 , SlcMethodOutput
* out ) { real_T intrm_sf_mf_10 ; real_T t1 ; real_T t2 ; t1 = ( t5 -> mX .
mX [ 21UL ] * - 0.99983333333333335 + t5 -> mX . mX [ 23UL ] ) *
1.602176487E-19 ; t2 = t5 -> mX . mX [ 28UL ] * 3.5932794656167223E-23 ;
intrm_sf_mf_10 = t1 / ( t2 == 0.0 ? 1.0E-16 : t2 ) ; t2 = t5 -> mX . mX [
27UL ] * 2.0864177915013142E-23 ; t2 = t1 / ( t2 == 0.0 ? 1.0E-16 : t2 ) ;
out -> mMODE . mX [ 0UL ] = ( int32_T ) ( intrm_sf_mf_10 < - 79.0 ) ; out ->
mMODE . mX [ 1UL ] = ( int32_T ) ( t5 -> mX . mX [ 21UL ] >= 0.0 ) ; out ->
mMODE . mX [ 2UL ] = ( int32_T ) ( t5 -> mX . mX [ 8UL ] >= 0.0 ) ; out ->
mMODE . mX [ 3UL ] = ( int32_T ) ( t5 -> mX . mX [ 17UL ] >= 0.0 ) ; out ->
mMODE . mX [ 4UL ] = ( int32_T ) ( t5 -> mX . mX [ 19UL ] >= 0.0 ) ; out ->
mMODE . mX [ 5UL ] = 1 ; out -> mMODE . mX [ 6UL ] = 1 ; out -> mMODE . mX [
7UL ] = 1 ; out -> mMODE . mX [ 8UL ] = 1 ; out -> mMODE . mX [ 9UL ] = ( int32_T ) ( t5 -> mX . mX [ 7UL ] < 0.0 ) ; out -> mMODE . mX [ 10UL ] = 1 ; out -> mMODE . mX [ 11UL ] = 1 ; out -> mMODE . mX [ 12UL ] = 1 ; out -> mMODE . mX [ 13UL ] = 1 ; out -> mMODE . mX [ 14UL ] = 1 ; out -> mMODE . mX [ 15UL ] = 1 ; out -> mMODE . mX [ 16UL ] = 1 ; out -> mMODE . mX [ 17UL ] = 1 ; out -> mMODE . mX [ 18UL ] = 1 ; out -> mMODE . mX [ 19UL ] = 1 ; out -> mMODE . mX [ 20UL ] = 1 ; out -> mMODE . mX [ 21UL ] = 1 ; out -> mMODE . mX [ 22UL ] = 1 ; out -> mMODE . mX [ 23UL ] = 1 ; out -> mMODE . mX [ 24UL ] = 1 ; out -> mMODE . mX [ 25UL ] = 1 ; out -> mMODE . mX [ 26UL ] = ( int32_T ) ( t2 > 80.0 ) ; out -> mMODE . mX [ 27UL ] = ( int32_T ) ( ( ( ( t5 -> mX . mX [ 1UL ] * 0.001 + t5 -> mX . mX [ 2UL ] * 0.001 ) + t5 -> mX . mX [ 3UL ] * 0.001 ) + t5 -> mX . mX [ 4UL ] * 0.001 ) + t5 -> mX . mX [ 0UL ] != 0.0 ) ; out -> mMODE . mX [ 28UL ] = ( int32_T ) ( t2 < - 79.0 ) ; out -> mMODE . mX [ 29UL ] = ( int32_T ) ( intrm_sf_mf_10 > 80.0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
