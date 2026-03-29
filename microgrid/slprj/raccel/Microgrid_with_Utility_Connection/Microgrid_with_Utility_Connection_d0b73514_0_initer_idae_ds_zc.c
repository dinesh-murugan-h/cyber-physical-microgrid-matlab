#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_zc.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_zc ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t28 , NeDsMethodOutput *
out ) { static real_T _cg_const_2 [ 7 ] = { 243.1 , 253.1 , 263.1 , 273.1 ,
283.1 , 298.1 , 313.1 } ; static real_T _cg_const_1 [ 6 ] = { 0.0 , 0.2 , 0.4
, 0.6 , 0.8 , 1.0 } ; ETTSf3049b48 t0 ; ETTSf3049b48 t1 ; real_T nonscalar2 [
7 ] ; real_T nonscalar4 [ 7 ] ; real_T nonscalar1 [ 6 ] ; real_T t18 [ 1 ] ;
real_T t2 [ 1 ] ; real_T Battery_Battery1_cyclingAgingModel_xdVint_fade ;
real_T Battery_Battery1_electricalModel_xVint ; real_T intrm_sf_mf_0 ; real_T
intrm_sf_mf_10 ; real_T intrm_sf_mf_5 ; real_T t26 ; real_T t27 ; size_t t3 [
1 ] ; size_t t4 [ 1 ] ; size_t t6 [ 1 ] ; size_t t21 ; size_t t22 ;
nonscalar1 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] = _cg_const_1 [ 1 ] ;
nonscalar1 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] = _cg_const_1 [ 3 ] ;
nonscalar1 [ 4 ] = _cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] = _cg_const_1 [ 5 ] ;
nonscalar2 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] = _cg_const_2 [ 1 ] ;
nonscalar2 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] = _cg_const_2 [ 3 ] ;
nonscalar2 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar2 [ 5 ] = _cg_const_2 [ 5 ] ;
nonscalar2 [ 6 ] = _cg_const_2 [ 6 ] ; nonscalar4 [ 0 ] = 19080.0 ;
nonscalar4 [ 1 ] = 19080.0 ; nonscalar4 [ 2 ] = 19080.0 ; nonscalar4 [ 3 ] =
19080.0 ; nonscalar4 [ 4 ] = 19080.0 ; nonscalar4 [ 5 ] = 19080.0 ;
nonscalar4 [ 6 ] = 19080.0 ; Battery_Battery1_cyclingAgingModel_xdVint_fade =
t28 -> mX . mX [ 0UL ] * 1.0000000000000001E-7 + 1.0000000000001 ; t2 [ 0UL ]
= t28 -> mX . mX [ 15UL ] ; t3 [ 0 ] = 6UL ; t4 [ 0 ] = 1UL ;
tlu2_linear_linear_prelookup ( & t1 . mField0 [ 0UL ] , & t1 . mField1 [ 0UL
] , & t1 . mField2 [ 0UL ] , & nonscalar1 [ 0UL ] , & t2 [ 0UL ] , & t3 [ 0UL
] , & t4 [ 0UL ] ) ; t2 [ 0 ] = 300.0 ; t6 [ 0 ] = 7UL ;
tlu2_linear_linear_prelookup ( & t0 . mField0 [ 0UL ] , & t0 . mField1 [ 0UL
] , & t0 . mField2 [ 0UL ] , & nonscalar2 [ 0UL ] , & t2 [ 0UL ] , & t6 [ 0UL
] , & t4 [ 0UL ] ) ; tlu2_2d_linear_linear_value ( & t2 [ 0UL ] , & t1 .
mField0 [ 0UL ] , & t1 . mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 .
mField2 [ 0UL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t3 [ 0UL ]
, & t6 [ 0UL ] , & t4 [ 0UL ] ) ; Battery_Battery1_electricalModel_xVint = t2
[ 0UL ] ; tlu2_2d_linear_linear_value ( & t2 [ 0UL ] , & t1 . mField0 [ 0UL ]
, & t1 . mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , & t0 . mField2 [ 0UL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t3 [ 0UL ] , & t6 [ 0UL ] ,
& t4 [ 0UL ] ) ; intrm_sf_mf_0 = t2 [ 0UL ] ; out -> mZC . mX [ 25UL ] = t28
-> mU . mX [ 1UL ] ; out -> mZC . mX [ 24UL ] = ( ( t28 -> mX . mX [ 24UL ] -
298.15 ) * 0.000499942933005141 + 1.0 ) * 304.20016522524 ; out -> mZC . mX [
10UL ] = t28 -> mX . mX [ 23UL ] ; t27 = ( t28 -> mX . mX [ 23UL ] * -
0.99983333333333335 + t28 -> mX . mX [ 25UL ] ) * 1.602176487E-19 ;
intrm_sf_mf_5 = t28 -> mX . mX [ 30UL ] * 3.5932794656167223E-23 ;
intrm_sf_mf_10 = t27 / ( intrm_sf_mf_5 == 0.0 ? 1.0E-16 : intrm_sf_mf_5 ) ;
t26 = t28 -> mX . mX [ 29UL ] * 2.0864177915013142E-23 ; intrm_sf_mf_5 = t27
/ ( t26 == 0.0 ? 1.0E-16 : t26 ) ; t2 [ 0UL ] = pmf_get_inf ( ) ; for ( t21 =
0UL ; t21 < 42UL ; t21 ++ ) { t22 = t21 / 42UL ; t27 = t2 [ t22 > 0UL ? 0UL :
t22 ] ; t26 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t21 ] * 1.0E-5 ;
t2 [ t22 > 0UL ? 0UL : t22 ] = t27 > t26 ? t26 : t27 ; } t18 [ 0UL ] =
pmf_get_inf ( ) ; for ( t21 = 0UL ; t21 < 7UL ; t21 ++ ) { t22 = t21 / 7UL ;
t27 = t18 [ t22 > 0UL ? 0UL : t22 ] ; t26 = nonscalar4 [ t21 ] * 1.0E-5 ; t18
[ t22 > 0UL ? 0UL : t22 ] = t27 > t26 ? t26 : t27 ; } out -> mZC . mX [ 0UL ]
= t2 [ 0UL ] - Battery_Battery1_cyclingAgingModel_xdVint_fade *
Battery_Battery1_electricalModel_xVint ; out -> mZC . mX [ 1UL ] =
8.200000000000002E-8 - t28 -> mX . mX [ 13UL ] * intrm_sf_mf_0 ; out -> mZC .
mX [ 2UL ] = t18 [ 0UL ] - t28 -> mX . mX [ 12UL ] * 19080.0 ; out -> mZC .
mX [ 3UL ] = Battery_Battery1_electricalModel_xVint ; out -> mZC . mX [ 4UL ]
= intrm_sf_mf_0 ; out -> mZC . mX [ 5UL ] = t28 -> mX . mX [ 13UL ] ; out ->
mZC . mX [ 6UL ] = Battery_Battery1_cyclingAgingModel_xdVint_fade ; out ->
mZC . mX [ 7UL ] = t28 -> mX . mX [ 12UL ] ; out -> mZC . mX [ 8UL ] = - 79.0
- intrm_sf_mf_5 ; out -> mZC . mX [ 9UL ] = - 79.0 - intrm_sf_mf_10 ; out ->
mZC . mX [ 11UL ] = t28 -> mU . mX [ 2UL ] - 0.99 ; out -> mZC . mX [ 12UL ]
= t28 -> mM . mX [ 24UL ] == 0 ? - t28 -> mU . mX [ 2UL ] : 0.0 ; out -> mZC
. mX [ 13UL ] = t28 -> mX . mX [ 16UL ] ; out -> mZC . mX [ 14UL ] = t28 ->
mU . mX [ 4UL ] - 0.99 ; out -> mZC . mX [ 15UL ] = t28 -> mM . mX [ 2UL ] ==
0 ? - t28 -> mU . mX [ 4UL ] : 0.0 ; out -> mZC . mX [ 16UL ] = t28 -> mX .
mX [ 18UL ] ; out -> mZC . mX [ 17UL ] = t28 -> mU . mX [ 5UL ] - 0.99 ; out
-> mZC . mX [ 18UL ] = t28 -> mM . mX [ 4UL ] == 0 ? - t28 -> mU . mX [ 5UL ]
: 0.0 ; out -> mZC . mX [ 19UL ] = t28 -> mX . mX [ 20UL ] ; out -> mZC . mX
[ 20UL ] = t28 -> mU . mX [ 6UL ] - 0.99 ; out -> mZC . mX [ 21UL ] = t28 ->
mM . mX [ 6UL ] == 0 ? - t28 -> mU . mX [ 6UL ] : 0.0 ; out -> mZC . mX [
22UL ] = ( real_T ) ( ( t28 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t28 ->
mQ . mX [ 0UL ] == 1UL ) ) ; out -> mZC . mX [ 23UL ] = ( real_T ) ( ( t28 ->
mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t28 -> mQ . mX [ 0UL ] == 2UL ) ) ;
( void ) LC ; ( void ) out ; return 0 ; }
