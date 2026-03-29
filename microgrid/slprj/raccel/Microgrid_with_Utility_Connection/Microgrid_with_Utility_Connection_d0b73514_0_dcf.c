#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dcf.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_dcf ( const
DifferentialClump * sys , const NeDynamicSystemInput * t9 , DcMethodOutput *
out ) { real_T nonscalar4 [ 7 ] ; real_T zc_int4 ; size_t t1 [ 1 ] ; size_t
t2 ; size_t t3 ; size_t t4 ; nonscalar4 [ 0 ] = 19080.0 ; nonscalar4 [ 1 ] =
19080.0 ; nonscalar4 [ 2 ] = 19080.0 ; nonscalar4 [ 3 ] = 19080.0 ;
nonscalar4 [ 4 ] = 19080.0 ; nonscalar4 [ 5 ] = 19080.0 ; nonscalar4 [ 6 ] =
19080.0 ; if ( t9 -> mM . mX [ 45UL ] != 0 ) { t1 [ 0UL ] = 0UL ; for ( t2 =
0UL ; t2 < 7UL ; t2 ++ ) { t3 = t2 / 7UL ; t4 = ( t2 - t2 % 7UL ) + t1 [ t3 >
0UL ? 0UL : t3 ] ; if ( nonscalar4 [ t2 ] * 1.0E-5 < nonscalar4 [ t4 > 6UL ?
6UL : t4 ] * 1.0E-5 ) { t1 [ t3 > 0UL ? 0UL : t3 ] = t2 % 7UL ; } } zc_int4 =
nonscalar4 [ t1 [ 0UL ] > 6UL ? 6UL : t1 [ 0UL ] ] * 1.0E-5 ; } else {
zc_int4 = t9 -> mX . mX [ 5UL ] * 19080.0 ; } out -> mF . mX [ 0UL ] = - 0.0
; out -> mF . mX [ 1UL ] = - 0.0 ; out -> mF . mX [ 2UL ] = - 0.0 ; out -> mF
. mX [ 3UL ] = - 0.0 ; out -> mF . mX [ 4UL ] = - 0.0 ; out -> mF . mX [ 5UL
] = - t9 -> mX . mX [ 9UL ] ; out -> mF . mX [ 6UL ] = - ( - t9 -> mX . mX [
9UL ] * ( real_T ) ( t9 -> mM . mX [ 34UL ] != 0 ) / ( zc_int4 == 0.0 ?
1.0E-16 : zc_int4 ) ) ; ( void ) sys ; ( void ) out ; return 0 ; }
