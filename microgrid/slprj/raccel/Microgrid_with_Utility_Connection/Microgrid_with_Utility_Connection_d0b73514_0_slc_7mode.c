#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7mode.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_7_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_slc_7mode ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t22 ,
SlcMethodOutput * out ) { static real_T _cg_const_1 [ 42 ] = { 3693.312 ,
4740.62976 , 4854.0671999999995 , 5000.48064 , 5241.86496 , 5567.66784 ,
3693.312 , 4740.62976 , 4854.0671999999995 , 5000.48064 , 5241.86496 ,
5567.66784 , 3693.312 , 4740.62976 , 4854.0671999999995 , 5000.48064 ,
5241.86496 , 5567.66784 , 3693.312 , 4740.62976 , 4854.0671999999995 ,
5000.48064 , 5241.86496 , 5567.66784 , 3693.312 , 4740.62976 ,
4854.0671999999995 , 5000.48064 , 5241.86496 , 5567.66784 , 3693.312 ,
4740.62976 , 4854.0671999999995 , 5000.48064 , 5241.86496 , 5567.66784 ,
3693.312 , 4740.62976 , 4854.0671999999995 , 5000.48064 , 5241.86496 ,
5567.66784 } ; static real_T _cg_const_8 [ 42 ] = { 0.63691199999999992 ,
0.6709679999999999 , 0.64994400000000008 , 0.60984 , 0.74303999999999992 ,
0.94608 , 0.460008 , 0.471888 , 0.399816 , 0.39780000000000004 , 0.435096 ,
0.56196 , 0.314208 , 0.295272 , 0.29232 , 0.24854400000000001 , 0.276912 ,
0.325224 , 0.14623199999999997 , 0.184536 , 0.182304 , 0.17712 , 0.195552 ,
0.219384 , 0.103896 , 0.1314 , 0.12924 , 0.12801600000000002 ,
0.13852799999999998 , 0.160848 , 0.0403416 , 0.0517824 , 0.0495864 ,
0.0544104 , 0.052956 , 0.07300799999999999 , 0.074016 , 0.096336 ,
0.072000000000000008 , 0.110592 , 0.11131200000000001 , 0.200808 } ; static
real_T _cg_const_3 [ 7 ] = { 243.1 , 253.1 , 263.1 , 273.1 , 283.1 , 298.1 ,
313.1 } ; static real_T _cg_const_2 [ 6 ] = { 0.0 , 0.2 , 0.4 , 0.6 , 0.8 ,
1.0 } ; ETTSf3049b48 t0 ; ETTSf3049b48 t1 ; real_T nonscalar0 [ 42 ] ; real_T
nonscalar3 [ 42 ] ; real_T nonscalar2 [ 7 ] ; real_T nonscalar1 [ 6 ] ;
real_T t2 [ 1 ] ; real_T Battery_Battery1_electricalModel_xVint ; real_T
intrm_sf_mf_0 ; real_T t20 ; real_T t21 ; size_t t3 [ 1 ] ; size_t t4 [ 1 ] ;
size_t t6 [ 1 ] ; size_t t18 ; size_t t19 ; nonscalar0 [ 0 ] = _cg_const_1 [
0 ] ; nonscalar0 [ 1 ] = _cg_const_1 [ 1 ] ; nonscalar0 [ 2 ] = _cg_const_1 [
2 ] ; nonscalar0 [ 3 ] = _cg_const_1 [ 3 ] ; nonscalar0 [ 4 ] = _cg_const_1 [
4 ] ; nonscalar0 [ 5 ] = _cg_const_1 [ 5 ] ; nonscalar0 [ 6 ] = _cg_const_1 [
6 ] ; nonscalar0 [ 7 ] = _cg_const_1 [ 7 ] ; nonscalar0 [ 8 ] = _cg_const_1 [
8 ] ; nonscalar0 [ 9 ] = _cg_const_1 [ 9 ] ; nonscalar0 [ 10 ] = _cg_const_1
[ 10 ] ; nonscalar0 [ 11 ] = _cg_const_1 [ 11 ] ; nonscalar0 [ 12 ] =
_cg_const_1 [ 12 ] ; nonscalar0 [ 13 ] = _cg_const_1 [ 13 ] ; nonscalar0 [ 14
] = _cg_const_1 [ 14 ] ; nonscalar0 [ 15 ] = _cg_const_1 [ 15 ] ; nonscalar0
[ 16 ] = _cg_const_1 [ 16 ] ; nonscalar0 [ 17 ] = _cg_const_1 [ 17 ] ;
nonscalar0 [ 18 ] = _cg_const_1 [ 18 ] ; nonscalar0 [ 19 ] = _cg_const_1 [ 19
] ; nonscalar0 [ 20 ] = _cg_const_1 [ 20 ] ; nonscalar0 [ 21 ] = _cg_const_1
[ 21 ] ; nonscalar0 [ 22 ] = _cg_const_1 [ 22 ] ; nonscalar0 [ 23 ] =
_cg_const_1 [ 23 ] ; nonscalar0 [ 24 ] = _cg_const_1 [ 24 ] ; nonscalar0 [ 25
] = _cg_const_1 [ 25 ] ; nonscalar0 [ 26 ] = _cg_const_1 [ 26 ] ; nonscalar0
[ 27 ] = _cg_const_1 [ 27 ] ; nonscalar0 [ 28 ] = _cg_const_1 [ 28 ] ;
nonscalar0 [ 29 ] = _cg_const_1 [ 29 ] ; nonscalar0 [ 30 ] = _cg_const_1 [ 30
] ; nonscalar0 [ 31 ] = _cg_const_1 [ 31 ] ; nonscalar0 [ 32 ] = _cg_const_1
[ 32 ] ; nonscalar0 [ 33 ] = _cg_const_1 [ 33 ] ; nonscalar0 [ 34 ] =
_cg_const_1 [ 34 ] ; nonscalar0 [ 35 ] = _cg_const_1 [ 35 ] ; nonscalar0 [ 36
] = _cg_const_1 [ 36 ] ; nonscalar0 [ 37 ] = _cg_const_1 [ 37 ] ; nonscalar0
[ 38 ] = _cg_const_1 [ 38 ] ; nonscalar0 [ 39 ] = _cg_const_1 [ 39 ] ;
nonscalar0 [ 40 ] = _cg_const_1 [ 40 ] ; nonscalar0 [ 41 ] = _cg_const_1 [ 41
] ; nonscalar1 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar1 [ 1 ] = _cg_const_2 [ 1
] ; nonscalar1 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar1 [ 3 ] = _cg_const_2 [ 3
] ; nonscalar1 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar1 [ 5 ] = _cg_const_2 [ 5
] ; nonscalar2 [ 0 ] = _cg_const_3 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_3 [ 1
] ; nonscalar2 [ 2 ] = _cg_const_3 [ 2 ] ; nonscalar2 [ 3 ] = _cg_const_3 [ 3
] ; nonscalar2 [ 4 ] = _cg_const_3 [ 4 ] ; nonscalar2 [ 5 ] = _cg_const_3 [ 5
] ; nonscalar2 [ 6 ] = _cg_const_3 [ 6 ] ; t2 [ 0UL ] = t22 -> mX . mX [ 4UL
] ; t3 [ 0 ] = 6UL ; t4 [ 0 ] = 1UL ; tlu2_linear_linear_prelookup ( & t0 .
mField0 [ 0UL ] , & t0 . mField1 [ 0UL ] , & t0 . mField2 [ 0UL ] , &
nonscalar1 [ 0UL ] , & t2 [ 0UL ] , & t3 [ 0UL ] , & t4 [ 0UL ] ) ; t2 [ 0 ]
= 300.0 ; t6 [ 0 ] = 7UL ; tlu2_linear_linear_prelookup ( & t1 . mField0 [
0UL ] , & t1 . mField1 [ 0UL ] , & t1 . mField2 [ 0UL ] , & nonscalar2 [ 0UL
] , & t2 [ 0UL ] , & t6 [ 0UL ] , & t4 [ 0UL ] ) ;
tlu2_2d_linear_linear_value ( & t2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 .
mField2 [ 0UL ] , & t1 . mField0 [ 0UL ] , & t1 . mField2 [ 0UL ] , &
nonscalar0 [ 0UL ] , & t3 [ 0UL ] , & t6 [ 0UL ] , & t4 [ 0UL ] ) ;
Battery_Battery1_electricalModel_xVint = t2 [ 0UL ] ; nonscalar3 [ 0 ] =
_cg_const_8 [ 0 ] ; nonscalar3 [ 1 ] = _cg_const_8 [ 1 ] ; nonscalar3 [ 2 ] =
_cg_const_8 [ 2 ] ; nonscalar3 [ 3 ] = _cg_const_8 [ 3 ] ; nonscalar3 [ 4 ] =
_cg_const_8 [ 4 ] ; nonscalar3 [ 5 ] = _cg_const_8 [ 5 ] ; nonscalar3 [ 6 ] =
_cg_const_8 [ 6 ] ; nonscalar3 [ 7 ] = _cg_const_8 [ 7 ] ; nonscalar3 [ 8 ] =
_cg_const_8 [ 8 ] ; nonscalar3 [ 9 ] = _cg_const_8 [ 9 ] ; nonscalar3 [ 10 ]
= _cg_const_8 [ 10 ] ; nonscalar3 [ 11 ] = _cg_const_8 [ 11 ] ; nonscalar3 [
12 ] = _cg_const_8 [ 12 ] ; nonscalar3 [ 13 ] = _cg_const_8 [ 13 ] ;
nonscalar3 [ 14 ] = _cg_const_8 [ 14 ] ; nonscalar3 [ 15 ] = _cg_const_8 [ 15
] ; nonscalar3 [ 16 ] = _cg_const_8 [ 16 ] ; nonscalar3 [ 17 ] = _cg_const_8
[ 17 ] ; nonscalar3 [ 18 ] = _cg_const_8 [ 18 ] ; nonscalar3 [ 19 ] =
_cg_const_8 [ 19 ] ; nonscalar3 [ 20 ] = _cg_const_8 [ 20 ] ; nonscalar3 [ 21
] = _cg_const_8 [ 21 ] ; nonscalar3 [ 22 ] = _cg_const_8 [ 22 ] ; nonscalar3
[ 23 ] = _cg_const_8 [ 23 ] ; nonscalar3 [ 24 ] = _cg_const_8 [ 24 ] ;
nonscalar3 [ 25 ] = _cg_const_8 [ 25 ] ; nonscalar3 [ 26 ] = _cg_const_8 [ 26
] ; nonscalar3 [ 27 ] = _cg_const_8 [ 27 ] ; nonscalar3 [ 28 ] = _cg_const_8
[ 28 ] ; nonscalar3 [ 29 ] = _cg_const_8 [ 29 ] ; nonscalar3 [ 30 ] =
_cg_const_8 [ 30 ] ; nonscalar3 [ 31 ] = _cg_const_8 [ 31 ] ; nonscalar3 [ 32
] = _cg_const_8 [ 32 ] ; nonscalar3 [ 33 ] = _cg_const_8 [ 33 ] ; nonscalar3
[ 34 ] = _cg_const_8 [ 34 ] ; nonscalar3 [ 35 ] = _cg_const_8 [ 35 ] ;
nonscalar3 [ 36 ] = _cg_const_8 [ 36 ] ; nonscalar3 [ 37 ] = _cg_const_8 [ 37
] ; nonscalar3 [ 38 ] = _cg_const_8 [ 38 ] ; nonscalar3 [ 39 ] = _cg_const_8
[ 39 ] ; nonscalar3 [ 40 ] = _cg_const_8 [ 40 ] ; nonscalar3 [ 41 ] =
_cg_const_8 [ 41 ] ; tlu2_2d_linear_linear_value ( & t2 [ 0UL ] , & t0 .
mField0 [ 0UL ] , & t0 . mField2 [ 0UL ] , & t1 . mField0 [ 0UL ] , & t1 .
mField2 [ 0UL ] , & nonscalar3 [ 0UL ] , & t3 [ 0UL ] , & t6 [ 0UL ] , & t4 [
0UL ] ) ; intrm_sf_mf_0 = t2 [ 0UL ] ; t2 [ 0UL ] = pmf_get_inf ( ) ; for ( t18
= 0UL ; t18 < 42UL ; t18 ++ ) { t19 = t18 / 42UL ; t20 = t2 [ t19 > 0UL ? 0UL
: t19 ] ; t21 = nonscalar0 [ t18 ] * 1.0E-5 ; t2 [ t19 > 0UL ? 0UL : t19 ] =
t20 > t21 ? t21 : t20 ; } out -> mMODE . mX [ 0UL ] = ( int32_T ) ( Battery_Battery1_electricalModel_xVint >= 0.0 ) ; out -> mMODE . mX [ 1UL ] = ( int32_T ) ( t22 -> mX . mX [ 1UL ] * intrm_sf_mf_0 <= 8.200000000000002E-8 ) ; out -> mMODE . mX [ 2UL ] = ( int32_T ) ( intrm_sf_mf_0 > 0.0 ) ; out -> mMODE . mX [ 3UL ] = ( int32_T ) ( t2 [ 0UL ] >= ( t22 -> mX . mX [ 2UL ] * 1.0000000000000001E-7 + 1.0000000000001 ) * Battery_Battery1_electricalModel_xVint ) ; out -> mMODE . mX [ 4UL ] = 1 ; out -> mMODE . mX [ 5UL ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; }
