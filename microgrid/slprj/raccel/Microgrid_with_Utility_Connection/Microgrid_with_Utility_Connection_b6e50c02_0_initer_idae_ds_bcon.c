#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_bcon.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_bcon ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t17 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; static real_T _cg_const_2 [ 9 ] = { -
1.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0 , - 0.0 , - 0.0 , - 0.0 , - 1.0 } ;
real_T t4 [ 12 ] ; real_T t6 [ 12 ] ; real_T t0 [ 11 ] ; real_T t3 [ 11 ] ;
real_T intermediate_der14 [ 9 ] ; real_T t2 [ 9 ] ; size_t t11 ; ( void ) t17
; t0 [ 0 ] = _cg_const_1 [ 0 ] ; t0 [ 1 ] = _cg_const_1 [ 1 ] ; t0 [ 2 ] =
_cg_const_1 [ 2 ] ; t0 [ 3 ] = _cg_const_1 [ 3 ] ; t0 [ 4 ] = _cg_const_1 [ 4
] ; t0 [ 5 ] = _cg_const_1 [ 5 ] ; t0 [ 6 ] = _cg_const_1 [ 6 ] ; t0 [ 7 ] =
_cg_const_1 [ 7 ] ; t0 [ 8 ] = _cg_const_1 [ 8 ] ; t0 [ 9 ] = _cg_const_1 [ 9
] ; t0 [ 10 ] = _cg_const_1 [ 10 ] ; intermediate_der14 [ 0 ] = _cg_const_2 [
0 ] ; intermediate_der14 [ 1 ] = _cg_const_2 [ 1 ] ; intermediate_der14 [ 2 ]
= _cg_const_2 [ 2 ] ; intermediate_der14 [ 3 ] = _cg_const_2 [ 3 ] ;
intermediate_der14 [ 4 ] = _cg_const_2 [ 4 ] ; intermediate_der14 [ 5 ] =
_cg_const_2 [ 5 ] ; intermediate_der14 [ 6 ] = _cg_const_2 [ 6 ] ;
intermediate_der14 [ 7 ] = _cg_const_2 [ 7 ] ; intermediate_der14 [ 8 ] =
_cg_const_2 [ 8 ] ; t2 [ 0 ] = 1.0 ; t2 [ 1 ] = 1.0 ; t2 [ 2 ] = 1.0 ; t2 [ 3
] = 1.0 ; t2 [ 4 ] = 1.0 ; t2 [ 5 ] = 1.0 ; t2 [ 6 ] = 1.0 ; t2 [ 7 ] = 1.0 ;
t2 [ 8 ] = 1.0 ; t3 [ 0UL ] = 1.0025303380061092 ; t3 [ 1UL ] = 0.0 ; t3 [
2UL ] = 0.0 ; t3 [ 3UL ] = 0.0 ; t3 [ 4UL ] = 0.0 ; t3 [ 5UL ] = 0.0 ; t3 [
6UL ] = 0.0 ; t3 [ 7UL ] = 0.0 ; t3 [ 8UL ] = 0.0 ; t3 [ 9UL ] = 0.0 ; t3 [
10UL ] = 0.0 ; t4 [ 0UL ] = - 0.24865626167104418 ; for ( t11 = 0UL ; t11 <
11UL ; t11 ++ ) { t4 [ t11 + 1UL ] = - t3 [ t11 ] / ( t0 [ t11 ] == 0.0 ?
1.0E-16 : t0 [ t11 ] ) ; } t3 [ 0UL ] = 1.0025303380061092 ; t3 [ 1UL ] = 0.0
; t3 [ 2UL ] = 0.0 ; t3 [ 3UL ] = 0.0 ; t3 [ 4UL ] = 0.0 ; t3 [ 5UL ] = 0.0 ;
t3 [ 6UL ] = 0.0 ; t3 [ 7UL ] = 0.0 ; t3 [ 8UL ] = 0.0 ; t3 [ 9UL ] = 0.0 ;
t3 [ 10UL ] = 0.0 ; t6 [ 0UL ] = - 0.24865626167104418 ; for ( t11 = 0UL ;
t11 < 11UL ; t11 ++ ) { t6 [ t11 + 1UL ] = - t3 [ t11 ] / ( t0 [ t11 ] == 0.0
? 1.0E-16 : t0 [ t11 ] ) ; } for ( t11 = 0UL ; t11 < 9UL ; t11 ++ ) { out ->
mBCON . mX [ t11 ] = - ( intermediate_der14 [ t11 ] / ( t2 [ t11 ] == 0.0 ?
1.0E-16 : t2 [ t11 ] ) ) ; } for ( t11 = 0UL ; t11 < 12UL ; t11 ++ ) { out ->
mBCON . mX [ t11 + 9UL ] = t4 [ t11 ] ; } out -> mBCON . mX [ 21UL ] = -
13.368467357740393 ; for ( t11 = 0UL ; t11 < 12UL ; t11 ++ ) { out -> mBCON .
mX [ t11 + 22UL ] = t6 [ t11 ] ; } out -> mBCON . mX [ 34UL ] = -
13.368467357740393 ; ( void ) sys ; ( void ) out ; return 0 ; }
