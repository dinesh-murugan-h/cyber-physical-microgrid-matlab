#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7f.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_slc_7f ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t9 , SlcMethodOutput
* out ) { real_T nonscalar4 [ 7 ] ; real_T zc_int4 ; size_t t1 [ 1 ] ; size_t
t2 ; size_t t3 ; size_t t4 ; nonscalar4 [ 0 ] = 19080.0 ; nonscalar4 [ 1 ] =
19080.0 ; nonscalar4 [ 2 ] = 19080.0 ; nonscalar4 [ 3 ] = 19080.0 ;
nonscalar4 [ 4 ] = 19080.0 ; nonscalar4 [ 5 ] = 19080.0 ; nonscalar4 [ 6 ] =
19080.0 ; if ( t9 -> mM . mX [ 6UL ] != 0 ) { t1 [ 0UL ] = 0UL ; for ( t2 =
0UL ; t2 < 7UL ; t2 ++ ) { t3 = t2 / 7UL ; t4 = ( t2 - t2 % 7UL ) + t1 [ t3 >
0UL ? 0UL : t3 ] ; if ( nonscalar4 [ t2 ] * 1.0E-5 < nonscalar4 [ t4 > 6UL ?
6UL : t4 ] * 1.0E-5 ) { t1 [ t3 > 0UL ? 0UL : t3 ] = t2 % 7UL ; } } zc_int4 =
nonscalar4 [ t1 [ 0UL ] > 6UL ? 6UL : t1 [ 0UL ] ] * 1.0E-5 ; } else {
zc_int4 = t9 -> mX . mX [ 0UL ] * 19080.0 ; } out -> mF . mX [ 0UL ] = - ( t9
-> mX . mX [ 3UL ] / ( zc_int4 == 0.0 ? 1.0E-16 : zc_int4 ) ) ; ( void ) sys
; ( void ) out ; return 0 ; }
