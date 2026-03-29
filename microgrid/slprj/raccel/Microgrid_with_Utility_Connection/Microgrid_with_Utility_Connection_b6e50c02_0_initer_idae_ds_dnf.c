#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_dnf.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_dnf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t28 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 11 ] = { - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 1.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 } ; static real_T
_cg_const_2 [ 11 ] = { - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0 , - 0.0 , - 0.0
, - 0.0 , - 0.0 , - 0.0 , - 0.0 } ; real_T t0 [ 11 ] ; real_T t1 [ 11 ] ;
size_t t12 ; t0 [ 0 ] = _cg_const_1 [ 0 ] ; t0 [ 1 ] = _cg_const_1 [ 1 ] ; t0
[ 2 ] = _cg_const_1 [ 2 ] ; t0 [ 3 ] = _cg_const_1 [ 3 ] ; t0 [ 4 ] =
_cg_const_1 [ 4 ] ; t0 [ 5 ] = _cg_const_1 [ 5 ] ; t0 [ 6 ] = _cg_const_1 [ 6
] ; t0 [ 7 ] = _cg_const_1 [ 7 ] ; t0 [ 8 ] = _cg_const_1 [ 8 ] ; t0 [ 9 ] =
_cg_const_1 [ 9 ] ; t0 [ 10 ] = _cg_const_1 [ 10 ] ; t1 [ 0 ] = _cg_const_2 [
0 ] ; t1 [ 1 ] = _cg_const_2 [ 1 ] ; t1 [ 2 ] = _cg_const_2 [ 2 ] ; t1 [ 3 ]
= _cg_const_2 [ 3 ] ; t1 [ 4 ] = _cg_const_2 [ 4 ] ; t1 [ 5 ] = _cg_const_2 [
5 ] ; t1 [ 6 ] = _cg_const_2 [ 6 ] ; t1 [ 7 ] = _cg_const_2 [ 7 ] ; t1 [ 8 ]
= _cg_const_2 [ 8 ] ; t1 [ 9 ] = _cg_const_2 [ 9 ] ; t1 [ 10 ] = _cg_const_2
[ 10 ] ; out -> mDNF . mX [ 0UL ] = 1.0 ; out -> mDNF . mX [ 1UL ] = 1.0 ;
out -> mDNF . mX [ 2UL ] = 1.0 ; out -> mDNF . mX [ 3UL ] = - ( t28 -> mX .
mX [ 60UL ] * - 981.36608284582462 + t28 -> mX . mX [ 62UL ] * - 0.0 ) /
959.92087937718145 ; out -> mDNF . mX [ 4UL ] = - ( t28 -> mX . mX [ 60UL ] *
- 0.0 + t28 -> mX . mX [ 62UL ] * - 981.36608284582462 ) / 959.92087937718145
; for ( t12 = 0UL ; t12 < 11UL ; t12 ++ ) { out -> mDNF . mX [ t12 + 5UL ] =
t1 [ t12 ] ; } for ( t12 = 0UL ; t12 < 11UL ; t12 ++ ) { out -> mDNF . mX [
t12 + 16UL ] = t0 [ t12 ] ; } out -> mDNF . mX [ 27UL ] = 1.0 ; for ( t12 =
0UL ; t12 < 11UL ; t12 ++ ) { out -> mDNF . mX [ t12 + 28UL ] = t0 [ t12 ] ;
} out -> mDNF . mX [ 39UL ] = - ( t28 -> mX . mX [ 60UL ] * -
981.36608284582462 + t28 -> mX . mX [ 62UL ] * - 0.0 ) / 729.29712636592569 ;
out -> mDNF . mX [ 40UL ] = - ( t28 -> mX . mX [ 60UL ] * - 0.0 + t28 -> mX .
mX [ 62UL ] * - 981.36608284582462 ) / 729.29712636592569 ; for ( t12 = 0UL ;
t12 < 11UL ; t12 ++ ) { out -> mDNF . mX [ t12 + 41UL ] = t1 [ t12 ] ; } ( void
) sys ; ( void ) out ; return 0 ; }
