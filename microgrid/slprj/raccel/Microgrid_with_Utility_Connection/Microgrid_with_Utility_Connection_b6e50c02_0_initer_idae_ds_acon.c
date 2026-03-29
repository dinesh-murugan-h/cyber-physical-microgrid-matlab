#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_acon.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_acon ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t97 , NeDsMethodOutput *
out ) { static real_T _cg_const_7 [ 121 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
1.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.25 } ;
static real_T _cg_const_1 [ 11 ] = { - 0.0 , - 0.0 , - 1.8849555921538758E-5
, - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 } ; static
real_T _cg_const_2 [ 11 ] = { - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 1.0 , - 0.0 , - 0.0 , - 0.0 } ; static real_T _cg_const_5 [ 11 ] =
{ 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; static
real_T _cg_const_6 [ 11 ] = { - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 ,
- 0.0 , - 0.0 , - 1.0 , - 0.0 , - 0.0 } ; static real_T _cg_const_8 [ 11 ] =
{ - 0.0 , - 0.02 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , - 0.0 , -
0.0 , - 0.0 } ; static real_T _cg_const_3 [ 9 ] = { - 0.0010714271082093911 ,
- 0.0 , - 0.0 , - 0.0 , - 0.0013711832445891866 , - 0.0 , - 0.0 , - 0.0 , -
0.0010417525251131352 } ; static real_T _cg_const_4 [ 9 ] = { -
1.0714271082093909E-15 , - 0.0 , - 0.0 , - 0.0 , - 1.3711832445891866E-15 , -
0.0 , - 0.0 , - 0.0 , - 1.0417525251131352E-15 } ; static real_T _cg_const_9
[ 9 ] = { 1.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 0.0 , 0.0 , 1.0 } ; real_T t7 [
121 ] ; real_T t19 [ 15 ] ; real_T t20 [ 15 ] ; real_T t24 [ 15 ] ; real_T
t25 [ 15 ] ; real_T t22 [ 14 ] ; real_T t27 [ 14 ] ; real_T t11 [ 13 ] ;
real_T t15 [ 13 ] ; real_T t18 [ 13 ] ; real_T t23 [ 13 ] ; real_T t0 [ 11 ]
; real_T t1 [ 11 ] ; real_T t13 [ 11 ] ; real_T t14 [ 11 ] ; real_T t4 [ 11 ]
; real_T t5 [ 11 ] ; real_T t6 [ 11 ] ; real_T t9 [ 11 ] ; real_T
intermediate_der0 [ 9 ] ; real_T t17 [ 9 ] ; real_T t2 [ 9 ] ; real_T t3 [ 9
] ; size_t t32 ; int32_T i6 ; ( void ) t97 ; t1 [ 0 ] = _cg_const_1 [ 0 ] ;
t1 [ 1 ] = _cg_const_1 [ 1 ] ; t1 [ 2 ] = _cg_const_1 [ 2 ] ; t1 [ 3 ] =
_cg_const_1 [ 3 ] ; t1 [ 4 ] = _cg_const_1 [ 4 ] ; t1 [ 5 ] = _cg_const_1 [ 5
] ; t1 [ 6 ] = _cg_const_1 [ 6 ] ; t1 [ 7 ] = _cg_const_1 [ 7 ] ; t1 [ 8 ] =
_cg_const_1 [ 8 ] ; t1 [ 9 ] = _cg_const_1 [ 9 ] ; t1 [ 10 ] = _cg_const_1 [
10 ] ; t0 [ 0 ] = _cg_const_2 [ 0 ] ; t0 [ 1 ] = _cg_const_2 [ 1 ] ; t0 [ 2 ]
= _cg_const_2 [ 2 ] ; t0 [ 3 ] = _cg_const_2 [ 3 ] ; t0 [ 4 ] = _cg_const_2 [
4 ] ; t0 [ 5 ] = _cg_const_2 [ 5 ] ; t0 [ 6 ] = _cg_const_2 [ 6 ] ; t0 [ 7 ]
= _cg_const_2 [ 7 ] ; t0 [ 8 ] = _cg_const_2 [ 8 ] ; t0 [ 9 ] = _cg_const_2 [
9 ] ; t0 [ 10 ] = _cg_const_2 [ 10 ] ; t2 [ 0 ] = _cg_const_3 [ 0 ] ; t2 [ 1
] = _cg_const_3 [ 1 ] ; t2 [ 2 ] = _cg_const_3 [ 2 ] ; t2 [ 3 ] = _cg_const_3
[ 3 ] ; t2 [ 4 ] = _cg_const_3 [ 4 ] ; t2 [ 5 ] = _cg_const_3 [ 5 ] ; t2 [ 6
] = _cg_const_3 [ 6 ] ; t2 [ 7 ] = _cg_const_3 [ 7 ] ; t2 [ 8 ] = _cg_const_3
[ 8 ] ; t3 [ 0 ] = _cg_const_4 [ 0 ] ; t3 [ 1 ] = _cg_const_4 [ 1 ] ; t3 [ 2
] = _cg_const_4 [ 2 ] ; t3 [ 3 ] = _cg_const_4 [ 3 ] ; t3 [ 4 ] = _cg_const_4
[ 4 ] ; t3 [ 5 ] = _cg_const_4 [ 5 ] ; t3 [ 6 ] = _cg_const_4 [ 6 ] ; t3 [ 7
] = _cg_const_4 [ 7 ] ; t3 [ 8 ] = _cg_const_4 [ 8 ] ; t4 [ 0 ] = _cg_const_5
[ 0 ] ; t4 [ 1 ] = _cg_const_5 [ 1 ] ; t4 [ 2 ] = _cg_const_5 [ 2 ] ; t4 [ 3
] = _cg_const_5 [ 3 ] ; t4 [ 4 ] = _cg_const_5 [ 4 ] ; t4 [ 5 ] = _cg_const_5
[ 5 ] ; t4 [ 6 ] = _cg_const_5 [ 6 ] ; t4 [ 7 ] = _cg_const_5 [ 7 ] ; t4 [ 8
] = _cg_const_5 [ 8 ] ; t4 [ 9 ] = _cg_const_5 [ 9 ] ; t4 [ 10 ] =
_cg_const_5 [ 10 ] ; t5 [ 0 ] = _cg_const_6 [ 0 ] ; t5 [ 1 ] = _cg_const_6 [
1 ] ; t5 [ 2 ] = _cg_const_6 [ 2 ] ; t5 [ 3 ] = _cg_const_6 [ 3 ] ; t5 [ 4 ]
= _cg_const_6 [ 4 ] ; t5 [ 5 ] = _cg_const_6 [ 5 ] ; t5 [ 6 ] = _cg_const_6 [
6 ] ; t5 [ 7 ] = _cg_const_6 [ 7 ] ; t5 [ 8 ] = _cg_const_6 [ 8 ] ; t5 [ 9 ]
= _cg_const_6 [ 9 ] ; t5 [ 10 ] = _cg_const_6 [ 10 ] ; for ( i6 = 0 ; i6 <
121 ; i6 ++ ) { t7 [ i6 ] = _cg_const_7 [ i6 ] ; } t6 [ 0 ] = _cg_const_8 [ 0
] ; t6 [ 1 ] = _cg_const_8 [ 1 ] ; t6 [ 2 ] = _cg_const_8 [ 2 ] ; t6 [ 3 ] =
_cg_const_8 [ 3 ] ; t6 [ 4 ] = _cg_const_8 [ 4 ] ; t6 [ 5 ] = _cg_const_8 [ 5
] ; t6 [ 6 ] = _cg_const_8 [ 6 ] ; t6 [ 7 ] = _cg_const_8 [ 7 ] ; t6 [ 8 ] =
_cg_const_8 [ 8 ] ; t6 [ 9 ] = _cg_const_8 [ 9 ] ; t6 [ 10 ] = _cg_const_8 [
10 ] ; intermediate_der0 [ 0 ] = _cg_const_9 [ 0 ] ; intermediate_der0 [ 1 ]
= _cg_const_9 [ 1 ] ; intermediate_der0 [ 2 ] = _cg_const_9 [ 2 ] ;
intermediate_der0 [ 3 ] = _cg_const_9 [ 3 ] ; intermediate_der0 [ 4 ] =
_cg_const_9 [ 4 ] ; intermediate_der0 [ 5 ] = _cg_const_9 [ 5 ] ;
intermediate_der0 [ 6 ] = _cg_const_9 [ 6 ] ; intermediate_der0 [ 7 ] =
_cg_const_9 [ 7 ] ; intermediate_der0 [ 8 ] = _cg_const_9 [ 8 ] ; t9 [ 0UL ]
= 0.0 ; t9 [ 1UL ] = 0.0 ; t9 [ 2UL ] = 0.0 ; t9 [ 3UL ] = 0.0 ; t9 [ 4UL ] =
0.0 ; t9 [ 5UL ] = 0.0 ; t9 [ 6UL ] = 0.0 ; t9 [ 7UL ] = 0.0 ; t9 [ 8UL ] =
0.0 ; t9 [ 9UL ] = 0.0 ; t9 [ 10UL ] = 4.0 ; t13 [ 0UL ] = 0.0 ; t13 [ 1UL ]
= 0.0 ; t13 [ 2UL ] = 0.0 ; t13 [ 3UL ] = 0.01061032953945969 ; t13 [ 4UL ] =
0.0 ; t13 [ 5UL ] = 0.0 ; t13 [ 6UL ] = 0.0 ; t13 [ 7UL ] = 0.0 ; t13 [ 8UL ]
= 0.0 ; t13 [ 9UL ] = 0.0 ; t13 [ 10UL ] = 0.0 ; t11 [ 0UL ] = - 1.0 ; t11 [
1UL ] = 0.0014184397163120566 ; for ( t32 = 0UL ; t32 < 11UL ; t32 ++ ) { t11
[ t32 + 2UL ] = - t13 [ t32 ] / ( t4 [ t32 ] == 0.0 ? 1.0E-16 : t4 [ t32 ] )
; } t13 [ 0UL ] = 0.0 ; t13 [ 1UL ] = 0.0 ; t13 [ 2UL ] = 0.0 ; t13 [ 3UL ] =
0.0 ; t13 [ 4UL ] = 0.0 ; t13 [ 5UL ] = 0.0 ; t13 [ 6UL ] = 0.0 ; t13 [ 7UL ]
= 0.0 ; t13 [ 8UL ] = 0.0 ; t13 [ 9UL ] = 0.0 ; t13 [ 10UL ] = 4.0 ; t14 [
0UL ] = 0.0 ; t14 [ 1UL ] = 0.0 ; t14 [ 2UL ] = 0.0 ; t14 [ 3UL ] =
0.01061032953945969 ; t14 [ 4UL ] = 0.0 ; t14 [ 5UL ] = 0.0 ; t14 [ 6UL ] =
0.0 ; t14 [ 7UL ] = 0.0 ; t14 [ 8UL ] = 0.0 ; t14 [ 9UL ] = 0.0 ; t14 [ 10UL
] = 0.0 ; t15 [ 0UL ] = - 1.0 ; t15 [ 1UL ] = 0.0014184397163120566 ; for ( t32
= 0UL ; t32 < 11UL ; t32 ++ ) { t15 [ t32 + 2UL ] = - t14 [ t32 ] / ( t4 [
t32 ] == 0.0 ? 1.0E-16 : t4 [ t32 ] ) ; } t17 [ 0 ] = 1.0 ; t17 [ 1 ] = 1.0 ;
t17 [ 2 ] = 1.0 ; t17 [ 3 ] = 1.0 ; t17 [ 4 ] = 1.0 ; t17 [ 5 ] = 1.0 ; t17 [
6 ] = 1.0 ; t17 [ 7 ] = 1.0 ; t17 [ 8 ] = 1.0 ; t18 [ 0UL ] =
0.00025198989960228144 ; t18 [ 1UL ] = 1.0 ; for ( t32 = 0UL ; t32 < 11UL ;
t32 ++ ) { t18 [ t32 + 2UL ] = t1 [ t32 ] ; } t19 [ 0UL ] =
0.0049605733062519823 ; t19 [ 1UL ] = - 0.018210437553916343 ; t19 [ 2UL ] =
- 0.0034386725728336094 ; t19 [ 3UL ] = - 0.0093896770179855218 ; for ( t32 =
0UL ; t32 < 11UL ; t32 ++ ) { t19 [ t32 + 4UL ] = t6 [ t32 ] ; } t20 [ 0UL ]
= - 1.0 ; t20 [ 1UL ] = 0.81946968992623526 ; t20 [ 2UL ] =
0.29759740863465556 ; t20 [ 3UL ] = 0.1624772790663882 ; for ( t32 = 0UL ;
t32 < 11UL ; t32 ++ ) { t20 [ t32 + 4UL ] = t0 [ t32 ] ; } t22 [ 0UL ] = -
1.0 ; t22 [ 1UL ] = 0.7 ; t22 [ 2UL ] = 0.54999999999999993 ; for ( t32 = 0UL
; t32 < 11UL ; t32 ++ ) { t22 [ t32 + 3UL ] = t5 [ t32 ] ; } t23 [ 0UL ] =
0.00025198989960228144 ; t23 [ 1UL ] = 1.0 ; for ( t32 = 0UL ; t32 < 11UL ;
t32 ++ ) { t23 [ t32 + 2UL ] = t1 [ t32 ] ; } t24 [ 0UL ] =
0.0049605733062519823 ; t24 [ 1UL ] = - 0.018210437553916343 ; t24 [ 2UL ] =
- 0.0034386725728336094 ; t24 [ 3UL ] = - 0.0093896770179855218 ; for ( t32 =
0UL ; t32 < 11UL ; t32 ++ ) { t24 [ t32 + 4UL ] = t6 [ t32 ] ; } t25 [ 0UL ]
= - 1.0 ; t25 [ 1UL ] = 0.81946968992623526 ; t25 [ 2UL ] =
0.29759740863465556 ; t25 [ 3UL ] = 0.1624772790663882 ; for ( t32 = 0UL ;
t32 < 11UL ; t32 ++ ) { t25 [ t32 + 4UL ] = t0 [ t32 ] ; } t27 [ 0UL ] = -
1.0 ; t27 [ 1UL ] = 0.7 ; t27 [ 2UL ] = 0.54999999999999993 ; for ( t32 = 0UL
; t32 < 11UL ; t32 ++ ) { t27 [ t32 + 3UL ] = t5 [ t32 ] ; } for ( t32 = 0UL
; t32 < 11UL ; t32 ++ ) { out -> mACON . mX [ t32 ] = - t9 [ t32 ] / ( t4 [
t32 ] == 0.0 ? 1.0E-16 : t4 [ t32 ] ) ; } for ( t32 = 0UL ; t32 < 13UL ; t32
++ ) { out -> mACON . mX [ t32 + 11UL ] = t11 [ t32 ] ; } out -> mACON . mX [
24UL ] = 0.91052187769581694 ; out -> mACON . mX [ 25UL ] = -
0.78044732373927161 ; out -> mACON . mX [ 26UL ] = - 0.81946968992623537 ;
out -> mACON . mX [ 27UL ] = 1.0 ; out -> mACON . mX [ 28UL ] =
0.95238095238095233 ; out -> mACON . mX [ 29UL ] = 1.0 ; out -> mACON . mX [
30UL ] = 1.0 ; for ( t32 = 0UL ; t32 < 11UL ; t32 ++ ) { out -> mACON . mX [
t32 + 31UL ] = - t13 [ t32 ] / ( t4 [ t32 ] == 0.0 ? 1.0E-16 : t4 [ t32 ] ) ;
} for ( t32 = 0UL ; t32 < 13UL ; t32 ++ ) { out -> mACON . mX [ t32 + 42UL ]
= t15 [ t32 ] ; } out -> mACON . mX [ 55UL ] = 0.91052187769581694 ; out ->
mACON . mX [ 56UL ] = - 0.78044732373927161 ; out -> mACON . mX [ 57UL ] = -
0.81946968992623537 ; out -> mACON . mX [ 58UL ] = 1.0 ; out -> mACON . mX [
59UL ] = 0.95238095238095233 ; out -> mACON . mX [ 60UL ] = 1.0 ; out ->
mACON . mX [ 61UL ] = 1.0 ; for ( t32 = 0UL ; t32 < 9UL ; t32 ++ ) { out ->
mACON . mX [ t32 + 62UL ] = - ( intermediate_der0 [ t32 ] / ( t17 [ t32 ] ==
0.0 ? 1.0E-16 : t17 [ t32 ] ) ) ; } out -> mACON . mX [ 71UL ] = - 1.0 ; out
-> mACON . mX [ 72UL ] = - 1.0 ; out -> mACON . mX [ 73UL ] = - 1.0 ; for ( t32
= 0UL ; t32 < 9UL ; t32 ++ ) { out -> mACON . mX [ t32 + 74UL ] = t3 [ t32 ]
; } for ( t32 = 0UL ; t32 < 9UL ; t32 ++ ) { out -> mACON . mX [ t32 + 83UL ]
= t2 [ t32 ] ; } for ( t32 = 0UL ; t32 < 9UL ; t32 ++ ) { out -> mACON . mX [
t32 + 92UL ] = t3 [ t32 ] ; } for ( t32 = 0UL ; t32 < 9UL ; t32 ++ ) { out ->
mACON . mX [ t32 + 101UL ] = t2 [ t32 ] ; } for ( t32 = 0UL ; t32 < 121UL ;
t32 ++ ) { out -> mACON . mX [ t32 + 110UL ] = t7 [ t32 ] ; } for ( t32 = 0UL
; t32 < 13UL ; t32 ++ ) { out -> mACON . mX [ t32 + 231UL ] = t18 [ t32 ] ; }
for ( t32 = 0UL ; t32 < 15UL ; t32 ++ ) { out -> mACON . mX [ t32 + 244UL ] =
t19 [ t32 ] ; } for ( t32 = 0UL ; t32 < 15UL ; t32 ++ ) { out -> mACON . mX [
t32 + 259UL ] = t20 [ t32 ] ; } out -> mACON . mX [ 274UL ] = 1.0 ; out ->
mACON . mX [ 275UL ] = - 0.54999999999999993 ; out -> mACON . mX [ 276UL ] =
- 0.80666666666666653 ; for ( t32 = 0UL ; t32 < 14UL ; t32 ++ ) { out ->
mACON . mX [ t32 + 277UL ] = t22 [ t32 ] ; } out -> mACON . mX [ 291UL ] = -
1.0 ; out -> mACON . mX [ 292UL ] = - 1.0 ; out -> mACON . mX [ 293UL ] = -
1.0 ; out -> mACON . mX [ 294UL ] = 1.0 ; out -> mACON . mX [ 295UL ] = 1.0 ;
out -> mACON . mX [ 296UL ] = 1.0 ; for ( t32 = 0UL ; t32 < 121UL ; t32 ++ )
{ out -> mACON . mX [ t32 + 297UL ] = t7 [ t32 ] ; } for ( t32 = 0UL ; t32 <
13UL ; t32 ++ ) { out -> mACON . mX [ t32 + 418UL ] = t23 [ t32 ] ; } for ( t32
= 0UL ; t32 < 15UL ; t32 ++ ) { out -> mACON . mX [ t32 + 431UL ] = t24 [ t32
] ; } for ( t32 = 0UL ; t32 < 15UL ; t32 ++ ) { out -> mACON . mX [ t32 +
446UL ] = t25 [ t32 ] ; } out -> mACON . mX [ 461UL ] = 1.0 ; out -> mACON .
mX [ 462UL ] = - 0.54999999999999993 ; out -> mACON . mX [ 463UL ] = -
0.80666666666666653 ; for ( t32 = 0UL ; t32 < 14UL ; t32 ++ ) { out -> mACON
. mX [ t32 + 464UL ] = t27 [ t32 ] ; } ( void ) sys ; ( void ) out ; return 0
; }
