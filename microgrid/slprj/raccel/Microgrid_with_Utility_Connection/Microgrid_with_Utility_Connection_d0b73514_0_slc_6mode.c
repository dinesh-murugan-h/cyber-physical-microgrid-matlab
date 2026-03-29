#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_6_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_6mode.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_6.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_6_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_6_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_slc_6mode ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t13 ,
SlcMethodOutput * out ) { real_T nonscalar4 [ 7 ] ; real_T t2 [ 1 ] ; real_T
t11 ; real_T t12 ; real_T t7 ; size_t t3 ; size_t t6 ; nonscalar4 [ 0 ] =
19080.0 ; nonscalar4 [ 1 ] = 19080.0 ; nonscalar4 [ 2 ] = 19080.0 ;
nonscalar4 [ 3 ] = 19080.0 ; nonscalar4 [ 4 ] = 19080.0 ; nonscalar4 [ 5 ] =
19080.0 ; nonscalar4 [ 6 ] = 19080.0 ; t2 [ 0UL ] = pmf_get_inf ( ) ; for ( t3
= 0UL ; t3 < 7UL ; t3 ++ ) { t6 = t3 / 7UL ; t7 = t2 [ t6 > 0UL ? 0UL : t6 ]
; t11 = nonscalar4 [ t3 ] * 1.0E-5 ; t2 [ t6 > 0UL ? 0UL : t6 ] = t7 > t11 ?
t11 : t7 ; } t11 = t13 -> mX . mX [ 0UL ] * 19080.0 ; t7 = t11 > t2 [ 0UL ] ?
t11 : t2 [ 0UL ] ; t2 [ 0UL ] = pmf_get_inf ( ) ; for ( t3 = 0UL ; t3 < 7UL ;
t3 ++ ) { t6 = t3 / 7UL ; t11 = t2 [ t6 > 0UL ? 0UL : t6 ] ; t12 = nonscalar4
[ t3 ] * 1.0E-5 ; t2 [ t6 > 0UL ? 0UL : t6 ] = t11 > t12 ? t12 : t11 ; } out
-> mMODE . mX [ 0UL ] = ( int32_T ) ( t13 -> mX . mX [ 0UL ] > 0.0 ) ; out ->
mMODE . mX [ 1UL ] = ( int32_T ) ( t2 [ 0UL ] >= t13 -> mX . mX [ 0UL ] *
19080.0 ) ; out -> mMODE . mX [ 2UL ] = ( int32_T ) ( t7 != 0.0 ) ; ( void )
sys ; ( void ) out ; return 0 ; }
