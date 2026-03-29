#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8j.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_slc_8_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_slc_8j ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t97 ,
SlcMethodOutput * out ) { static real_T _cg_const_8 [ 161 ] = {
5409.3437280162616 , 5003.3280337531651 , 4925.5715135702931 ,
4876.9435694836448 , 4841.4649357829221 , 4813.0897934931345 ,
4789.1546824868292 , 4768.2939369024225 , 4749.7047689855244 ,
4732.871079702807 , 4717.4251394973107 , 4703.0215047240163 ,
4689.5717046799464 , 4676.9889653716327 , 4665.0144116403335 ,
4653.7500162790993 , 4643.5838667735534 , 4633.4177172680065 ,
4623.2515677624606 , 4613.0854182569146 , 4604.2089250540757 ,
4595.5514999809 , 4586.8940749077237 , 4578.2366498345473 ,
4570.5479238303451 , 4563.0593780668514 , 4555.5708323033577 ,
4548.082286539865 , 4540.5937407763722 , 4533.5486210568979 ,
4526.7809242877647 , 4520.2128201736505 , 4513.8394362508579 ,
4507.6042851946086 , 4501.5376456208187 , 4495.5741109238879 ,
4489.7814771763706 , 4484.1517526312564 , 4478.4917448113738 ,
4472.4042005090187 , 4465.8658136009753 , 4459.2816393500525 ,
4452.7396807345949 , 4446.2450093385169 , 4439.8079756791594 ,
4433.4208980848925 , 4427.0901483920106 , 4420.7961490416474 ,
4414.6280753135416 , 4408.4600015854357 , 4402.29192785733 ,
4396.1238541292232 , 4389.9557804011165 , 4383.7877066730116 ,
4377.7393344022012 , 4371.7440920384333 , 4365.7488496746646 ,
4359.7615430165706 , 4353.8468541814518 , 4347.9482492808565 ,
4342.0800306391138 , 4336.24012860583 , 4330.4141475830638 ,
4324.7341582244553 , 4319.2604491909933 , 4313.9202334314878 ,
4308.6121872602389 , 4303.4536366732154 , 4298.2950860861929 ,
4293.1365354991694 , 4287.977984912146 , 4282.8194343251234 , 4277.6608837381
, 4272.6474605858184 , 4267.7143466496555 , 4262.7812327134934 ,
4257.8481187773305 , 4252.9150048411684 , 4247.9818909050064 ,
4243.0707580272019 , 4238.3366735591026 , 4233.6025890910041 ,
4228.8685046229048 , 4224.1344201548045 , 4219.4003356867061 ,
4214.6662512186058 , 4210.039848338266 , 4205.4923479581539 ,
4200.9448475780437 , 4196.3973471979316 , 4191.8498468178213 ,
4187.30234643771 , 4182.7626797251369 , 4178.394027375819 , 4174.025375026501
, 4169.6567226771831 , 4165.2880703278652 , 4160.9194179785482 ,
4156.55076562923 , 4152.2707410482572 , 4148.0757050883667 ,
4143.8806691284763 , 4139.6856331685849 , 4135.4905972086945 ,
4131.295561248804 , 4127.1005252889136 , 4123.0713072838316 ,
4119.0459650566572 , 4115.020622829481 , 4110.9952806023066 ,
4106.9699383751313 , 4102.944596147956 , 4098.99317318505 , 4095.134375843943
, 4091.2755785028367 , 4087.416781161729 , 4083.5579838206222 ,
4079.699186479515 , 4075.8403891384078 , 4072.1306455916715 ,
4068.4355501524233 , 4064.740454713176 , 4061.0453592739282 ,
4057.3502638346804 , 4053.6551683954326 , 4050.0205687543616 ,
4046.4858548130251 , 4042.9511408716894 , 4039.4164269303524 ,
4035.8817129890158 , 4032.3469990476797 , 4028.8122851063436 ,
4025.4007025555893 , 4022.0118997900704 , 4018.6230970245515 ,
4015.2342942590326 , 4011.8454914935132 , 4008.4762378723331 ,
4005.2080025143032 , 4001.9397671562733 , 3998.671531798243 ,
3995.4032964402122 , 3992.1700913770769 , 3989.0001378378561 ,
3985.8301842986339 , 3982.6602307594117 , 3979.5013019255175 ,
3976.4116098908662 , 3973.3219178562149 , 3970.232225821564 ,
3967.1673228595964 , 3964.1407827385729 , 3961.1142426175493 ,
3958.0928105635917 , 3955.1112721041773 , 3952.1297336447628 ,
3949.1619554312028 , 3946.2071543801203 , 3943.2621182965304 ,
3940.3256095877596 , 3937.3989028648316 } ; static real_T _cg_const_3 [ 42 ]
= { 0.63691199999999992 , 0.6709679999999999 , 0.64994400000000008 , 0.60984
, 0.74303999999999992 , 0.94608 , 0.460008 , 0.471888 , 0.399816 ,
0.39780000000000004 , 0.435096 , 0.56196 , 0.314208 , 0.295272 , 0.29232 ,
0.24854400000000001 , 0.276912 , 0.325224 , 0.14623199999999997 , 0.184536 ,
0.182304 , 0.17712 , 0.195552 , 0.219384 , 0.103896 , 0.1314 , 0.12924 ,
0.12801600000000002 , 0.13852799999999998 , 0.160848 , 0.0403416 , 0.0517824
, 0.0495864 , 0.0544104 , 0.052956 , 0.07300799999999999 , 0.074016 ,
0.096336 , 0.072000000000000008 , 0.110592 , 0.11131200000000001 , 0.200808 }
; static real_T _cg_const_2 [ 7 ] = { 243.1 , 253.1 , 263.1 , 273.1 , 283.1 ,
298.1 , 313.1 } ; static real_T _cg_const_1 [ 6 ] = { 0.0 , 0.2 , 0.4 , 0.6 ,
0.8 , 1.0 } ; ETTSf3049b48 t0 ; ETTSf3049b48 t2 ; real_T nonscalar6 [ 161 ] ;
real_T nonscalar7 [ 161 ] ; real_T nonscalar3 [ 42 ] ; real_T nonscalar2 [ 7
] ; real_T nonscalar1 [ 6 ] ; real_T t11 [ 1 ] ; real_T t34 [ 1 ] ; real_T
AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 ; real_T
intermediate_der11 ; real_T intrm_sf_mf_10 ; real_T t46 ; real_T t47 ; real_T
t54 ; real_T t58 ; real_T t6 ; real_T t61 ; real_T t64 ; real_T t7 ; real_T
t96 ; real_T zc_int6 ; real_T zc_int7 ; real_T zc_int8 ; size_t t10 [ 1 ] ;
size_t t12 [ 1 ] ; size_t t18 [ 1 ] ; t96 = ( ( ( t97 -> mX . mX [ 1UL ] *
0.001 + t97 -> mX . mX [ 2UL ] * 0.001 ) + t97 -> mX . mX [ 3UL ] * 0.001 ) +
t97 -> mX . mX [ 4UL ] * 0.001 ) + t97 -> mX . mX [ 0UL ] ;
AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 = t97 -> mU . mX [
6UL ] * 0.001 ; nonscalar1 [ 0 ] = _cg_const_1 [ 0 ] ; nonscalar1 [ 1 ] =
_cg_const_1 [ 1 ] ; nonscalar1 [ 2 ] = _cg_const_1 [ 2 ] ; nonscalar1 [ 3 ] =
_cg_const_1 [ 3 ] ; nonscalar1 [ 4 ] = _cg_const_1 [ 4 ] ; nonscalar1 [ 5 ] =
_cg_const_1 [ 5 ] ; nonscalar2 [ 0 ] = _cg_const_2 [ 0 ] ; nonscalar2 [ 1 ] =
_cg_const_2 [ 1 ] ; nonscalar2 [ 2 ] = _cg_const_2 [ 2 ] ; nonscalar2 [ 3 ] =
_cg_const_2 [ 3 ] ; nonscalar2 [ 4 ] = _cg_const_2 [ 4 ] ; nonscalar2 [ 5 ] =
_cg_const_2 [ 5 ] ; nonscalar2 [ 6 ] = _cg_const_2 [ 6 ] ; nonscalar3 [ 0 ] =
_cg_const_3 [ 0 ] ; nonscalar3 [ 1 ] = _cg_const_3 [ 1 ] ; nonscalar3 [ 2 ] =
_cg_const_3 [ 2 ] ; nonscalar3 [ 3 ] = _cg_const_3 [ 3 ] ; nonscalar3 [ 4 ] =
_cg_const_3 [ 4 ] ; nonscalar3 [ 5 ] = _cg_const_3 [ 5 ] ; nonscalar3 [ 6 ] =
_cg_const_3 [ 6 ] ; nonscalar3 [ 7 ] = _cg_const_3 [ 7 ] ; nonscalar3 [ 8 ] =
_cg_const_3 [ 8 ] ; nonscalar3 [ 9 ] = _cg_const_3 [ 9 ] ; nonscalar3 [ 10 ]
= _cg_const_3 [ 10 ] ; nonscalar3 [ 11 ] = _cg_const_3 [ 11 ] ; nonscalar3 [
12 ] = _cg_const_3 [ 12 ] ; nonscalar3 [ 13 ] = _cg_const_3 [ 13 ] ;
nonscalar3 [ 14 ] = _cg_const_3 [ 14 ] ; nonscalar3 [ 15 ] = _cg_const_3 [ 15
] ; nonscalar3 [ 16 ] = _cg_const_3 [ 16 ] ; nonscalar3 [ 17 ] = _cg_const_3
[ 17 ] ; nonscalar3 [ 18 ] = _cg_const_3 [ 18 ] ; nonscalar3 [ 19 ] =
_cg_const_3 [ 19 ] ; nonscalar3 [ 20 ] = _cg_const_3 [ 20 ] ; nonscalar3 [ 21
] = _cg_const_3 [ 21 ] ; nonscalar3 [ 22 ] = _cg_const_3 [ 22 ] ; nonscalar3
[ 23 ] = _cg_const_3 [ 23 ] ; nonscalar3 [ 24 ] = _cg_const_3 [ 24 ] ;
nonscalar3 [ 25 ] = _cg_const_3 [ 25 ] ; nonscalar3 [ 26 ] = _cg_const_3 [ 26
] ; nonscalar3 [ 27 ] = _cg_const_3 [ 27 ] ; nonscalar3 [ 28 ] = _cg_const_3
[ 28 ] ; nonscalar3 [ 29 ] = _cg_const_3 [ 29 ] ; nonscalar3 [ 30 ] =
_cg_const_3 [ 30 ] ; nonscalar3 [ 31 ] = _cg_const_3 [ 31 ] ; nonscalar3 [ 32
] = _cg_const_3 [ 32 ] ; nonscalar3 [ 33 ] = _cg_const_3 [ 33 ] ; nonscalar3
[ 34 ] = _cg_const_3 [ 34 ] ; nonscalar3 [ 35 ] = _cg_const_3 [ 35 ] ;
nonscalar3 [ 36 ] = _cg_const_3 [ 36 ] ; nonscalar3 [ 37 ] = _cg_const_3 [ 37
] ; nonscalar3 [ 38 ] = _cg_const_3 [ 38 ] ; nonscalar3 [ 39 ] = _cg_const_3
[ 39 ] ; nonscalar3 [ 40 ] = _cg_const_3 [ 40 ] ; nonscalar3 [ 41 ] =
_cg_const_3 [ 41 ] ; t11 [ 0UL ] = t97 -> mX . mX [ 14UL ] ; t18 [ 0 ] = 6UL
; t10 [ 0 ] = 1UL ; tlu2_linear_linear_prelookup ( & t2 . mField0 [ 0UL ] , &
t2 . mField1 [ 0UL ] , & t2 . mField2 [ 0UL ] , & nonscalar1 [ 0UL ] , & t11
[ 0UL ] , & t18 [ 0UL ] , & t10 [ 0UL ] ) ; t11 [ 0 ] = 300.0 ; t12 [ 0 ] =
7UL ; tlu2_linear_linear_prelookup ( & t0 . mField0 [ 0UL ] , & t0 . mField1
[ 0UL ] , & t0 . mField2 [ 0UL ] , & nonscalar2 [ 0UL ] , & t11 [ 0UL ] , &
t12 [ 0UL ] , & t10 [ 0UL ] ) ; tlu2_2d_linear_linear_value ( & t34 [ 0UL ] ,
& t2 . mField0 [ 0UL ] , & t2 . mField2 [ 0UL ] , & t0 . mField0 [ 0UL ] , &
t0 . mField2 [ 0UL ] , & nonscalar3 [ 0UL ] , & t18 [ 0UL ] , & t12 [ 0UL ] ,
& t10 [ 0UL ] ) ; t47 = ( t97 -> mX . mX [ 21UL ] * - 0.99983333333333335 +
t97 -> mX . mX [ 23UL ] ) * 1.602176487E-19 ; t58 = t97 -> mX . mX [ 28UL ] *
3.5932794656167223E-23 ; intrm_sf_mf_10 = t47 / ( t58 == 0.0 ? 1.0E-16 : t58
) ; t61 = t97 -> mX . mX [ 27UL ] * 2.0864177915013142E-23 ; t7 = pmf_pow ( t97
-> mX . mX [ 27UL ] / 298.15 , 2.803373431666683 ) * pmf_exp ( ( 1.0 - t97 ->
mX . mX [ 27UL ] / 298.15 ) * ( - 1.7944376352000002E-19 / ( t61 == 0.0 ?
1.0E-16 : t61 ) ) ) * 9.74470343951559E-6 ; t46 = t47 / ( t61 == 0.0 ?
1.0E-16 : t61 ) ; t47 = pmf_pow ( t97 -> mX . mX [ 28UL ] / 298.15 ,
6.2510257048300453 ) * pmf_exp ( ( 1.0 - t97 -> mX . mX [ 28UL ] / 298.15 ) *
( - 1.7944376352000002E-19 / ( t58 == 0.0 ? 1.0E-16 : t58 ) ) ) *
2.8112459123761107E-8 ; nonscalar6 [ 0 ] = _cg_const_8 [ 0 ] ; nonscalar6 [ 1
] = _cg_const_8 [ 1 ] ; nonscalar6 [ 2 ] = _cg_const_8 [ 2 ] ; nonscalar6 [ 3
] = _cg_const_8 [ 3 ] ; nonscalar6 [ 4 ] = _cg_const_8 [ 4 ] ; nonscalar6 [ 5
] = _cg_const_8 [ 5 ] ; nonscalar6 [ 6 ] = _cg_const_8 [ 6 ] ; nonscalar6 [ 7
] = _cg_const_8 [ 7 ] ; nonscalar6 [ 8 ] = _cg_const_8 [ 8 ] ; nonscalar6 [ 9
] = _cg_const_8 [ 9 ] ; nonscalar6 [ 10 ] = _cg_const_8 [ 10 ] ; nonscalar6 [
11 ] = _cg_const_8 [ 11 ] ; nonscalar6 [ 12 ] = _cg_const_8 [ 12 ] ;
nonscalar6 [ 13 ] = _cg_const_8 [ 13 ] ; nonscalar6 [ 14 ] = _cg_const_8 [ 14
] ; nonscalar6 [ 15 ] = _cg_const_8 [ 15 ] ; nonscalar6 [ 16 ] = _cg_const_8
[ 16 ] ; nonscalar6 [ 17 ] = _cg_const_8 [ 17 ] ; nonscalar6 [ 18 ] =
_cg_const_8 [ 18 ] ; nonscalar6 [ 19 ] = _cg_const_8 [ 19 ] ; nonscalar6 [ 20
] = _cg_const_8 [ 20 ] ; nonscalar6 [ 21 ] = _cg_const_8 [ 21 ] ; nonscalar6
[ 22 ] = _cg_const_8 [ 22 ] ; nonscalar6 [ 23 ] = _cg_const_8 [ 23 ] ;
nonscalar6 [ 24 ] = _cg_const_8 [ 24 ] ; nonscalar6 [ 25 ] = _cg_const_8 [ 25
] ; nonscalar6 [ 26 ] = _cg_const_8 [ 26 ] ; nonscalar6 [ 27 ] = _cg_const_8
[ 27 ] ; nonscalar6 [ 28 ] = _cg_const_8 [ 28 ] ; nonscalar6 [ 29 ] =
_cg_const_8 [ 29 ] ; nonscalar6 [ 30 ] = _cg_const_8 [ 30 ] ; nonscalar6 [ 31
] = _cg_const_8 [ 31 ] ; nonscalar6 [ 32 ] = _cg_const_8 [ 32 ] ; nonscalar6
[ 33 ] = _cg_const_8 [ 33 ] ; nonscalar6 [ 34 ] = _cg_const_8 [ 34 ] ;
nonscalar6 [ 35 ] = _cg_const_8 [ 35 ] ; nonscalar6 [ 36 ] = _cg_const_8 [ 36
] ; nonscalar6 [ 37 ] = _cg_const_8 [ 37 ] ; nonscalar6 [ 38 ] = _cg_const_8
[ 38 ] ; nonscalar6 [ 39 ] = _cg_const_8 [ 39 ] ; nonscalar6 [ 40 ] =
_cg_const_8 [ 40 ] ; nonscalar6 [ 41 ] = _cg_const_8 [ 41 ] ; nonscalar6 [ 42
] = _cg_const_8 [ 42 ] ; nonscalar6 [ 43 ] = _cg_const_8 [ 43 ] ; nonscalar6
[ 44 ] = _cg_const_8 [ 44 ] ; nonscalar6 [ 45 ] = _cg_const_8 [ 45 ] ;
nonscalar6 [ 46 ] = _cg_const_8 [ 46 ] ; nonscalar6 [ 47 ] = _cg_const_8 [ 47
] ; nonscalar6 [ 48 ] = _cg_const_8 [ 48 ] ; nonscalar6 [ 49 ] = _cg_const_8
[ 49 ] ; nonscalar6 [ 50 ] = _cg_const_8 [ 50 ] ; nonscalar6 [ 51 ] =
_cg_const_8 [ 51 ] ; nonscalar6 [ 52 ] = _cg_const_8 [ 52 ] ; nonscalar6 [ 53
] = _cg_const_8 [ 53 ] ; nonscalar6 [ 54 ] = _cg_const_8 [ 54 ] ; nonscalar6
[ 55 ] = _cg_const_8 [ 55 ] ; nonscalar6 [ 56 ] = _cg_const_8 [ 56 ] ;
nonscalar6 [ 57 ] = _cg_const_8 [ 57 ] ; nonscalar6 [ 58 ] = _cg_const_8 [ 58
] ; nonscalar6 [ 59 ] = _cg_const_8 [ 59 ] ; nonscalar6 [ 60 ] = _cg_const_8
[ 60 ] ; nonscalar6 [ 61 ] = _cg_const_8 [ 61 ] ; nonscalar6 [ 62 ] =
_cg_const_8 [ 62 ] ; nonscalar6 [ 63 ] = _cg_const_8 [ 63 ] ; nonscalar6 [ 64
] = _cg_const_8 [ 64 ] ; nonscalar6 [ 65 ] = _cg_const_8 [ 65 ] ; nonscalar6
[ 66 ] = _cg_const_8 [ 66 ] ; nonscalar6 [ 67 ] = _cg_const_8 [ 67 ] ;
nonscalar6 [ 68 ] = _cg_const_8 [ 68 ] ; nonscalar6 [ 69 ] = _cg_const_8 [ 69
] ; nonscalar6 [ 70 ] = _cg_const_8 [ 70 ] ; nonscalar6 [ 71 ] = _cg_const_8
[ 71 ] ; nonscalar6 [ 72 ] = _cg_const_8 [ 72 ] ; nonscalar6 [ 73 ] =
_cg_const_8 [ 73 ] ; nonscalar6 [ 74 ] = _cg_const_8 [ 74 ] ; nonscalar6 [ 75
] = _cg_const_8 [ 75 ] ; nonscalar6 [ 76 ] = _cg_const_8 [ 76 ] ; nonscalar6
[ 77 ] = _cg_const_8 [ 77 ] ; nonscalar6 [ 78 ] = _cg_const_8 [ 78 ] ;
nonscalar6 [ 79 ] = _cg_const_8 [ 79 ] ; nonscalar6 [ 80 ] = _cg_const_8 [ 80
] ; nonscalar6 [ 81 ] = _cg_const_8 [ 81 ] ; nonscalar6 [ 82 ] = _cg_const_8
[ 82 ] ; nonscalar6 [ 83 ] = _cg_const_8 [ 83 ] ; nonscalar6 [ 84 ] =
_cg_const_8 [ 84 ] ; nonscalar6 [ 85 ] = _cg_const_8 [ 85 ] ; nonscalar6 [ 86
] = _cg_const_8 [ 86 ] ; nonscalar6 [ 87 ] = _cg_const_8 [ 87 ] ; nonscalar6
[ 88 ] = _cg_const_8 [ 88 ] ; nonscalar6 [ 89 ] = _cg_const_8 [ 89 ] ;
nonscalar6 [ 90 ] = _cg_const_8 [ 90 ] ; nonscalar6 [ 91 ] = _cg_const_8 [ 91
] ; nonscalar6 [ 92 ] = _cg_const_8 [ 92 ] ; nonscalar6 [ 93 ] = _cg_const_8
[ 93 ] ; nonscalar6 [ 94 ] = _cg_const_8 [ 94 ] ; nonscalar6 [ 95 ] =
_cg_const_8 [ 95 ] ; nonscalar6 [ 96 ] = _cg_const_8 [ 96 ] ; nonscalar6 [ 97
] = _cg_const_8 [ 97 ] ; nonscalar6 [ 98 ] = _cg_const_8 [ 98 ] ; nonscalar6
[ 99 ] = _cg_const_8 [ 99 ] ; nonscalar6 [ 100 ] = _cg_const_8 [ 100 ] ;
nonscalar6 [ 101 ] = _cg_const_8 [ 101 ] ; nonscalar6 [ 102 ] = _cg_const_8 [
102 ] ; nonscalar6 [ 103 ] = _cg_const_8 [ 103 ] ; nonscalar6 [ 104 ] =
_cg_const_8 [ 104 ] ; nonscalar6 [ 105 ] = _cg_const_8 [ 105 ] ; nonscalar6 [
106 ] = _cg_const_8 [ 106 ] ; nonscalar6 [ 107 ] = _cg_const_8 [ 107 ] ;
nonscalar6 [ 108 ] = _cg_const_8 [ 108 ] ; nonscalar6 [ 109 ] = _cg_const_8 [
109 ] ; nonscalar6 [ 110 ] = _cg_const_8 [ 110 ] ; nonscalar6 [ 111 ] =
_cg_const_8 [ 111 ] ; nonscalar6 [ 112 ] = _cg_const_8 [ 112 ] ; nonscalar6 [
113 ] = _cg_const_8 [ 113 ] ; nonscalar6 [ 114 ] = _cg_const_8 [ 114 ] ;
nonscalar6 [ 115 ] = _cg_const_8 [ 115 ] ; nonscalar6 [ 116 ] = _cg_const_8 [
116 ] ; nonscalar6 [ 117 ] = _cg_const_8 [ 117 ] ; nonscalar6 [ 118 ] =
_cg_const_8 [ 118 ] ; nonscalar6 [ 119 ] = _cg_const_8 [ 119 ] ; nonscalar6 [
120 ] = _cg_const_8 [ 120 ] ; nonscalar6 [ 121 ] = _cg_const_8 [ 121 ] ;
nonscalar6 [ 122 ] = _cg_const_8 [ 122 ] ; nonscalar6 [ 123 ] = _cg_const_8 [
123 ] ; nonscalar6 [ 124 ] = _cg_const_8 [ 124 ] ; nonscalar6 [ 125 ] =
_cg_const_8 [ 125 ] ; nonscalar6 [ 126 ] = _cg_const_8 [ 126 ] ; nonscalar6 [
127 ] = _cg_const_8 [ 127 ] ; nonscalar6 [ 128 ] = _cg_const_8 [ 128 ] ;
nonscalar6 [ 129 ] = _cg_const_8 [ 129 ] ; nonscalar6 [ 130 ] = _cg_const_8 [
130 ] ; nonscalar6 [ 131 ] = _cg_const_8 [ 131 ] ; nonscalar6 [ 132 ] =
_cg_const_8 [ 132 ] ; nonscalar6 [ 133 ] = _cg_const_8 [ 133 ] ; nonscalar6 [
134 ] = _cg_const_8 [ 134 ] ; nonscalar6 [ 135 ] = _cg_const_8 [ 135 ] ;
nonscalar6 [ 136 ] = _cg_const_8 [ 136 ] ; nonscalar6 [ 137 ] = _cg_const_8 [
137 ] ; nonscalar6 [ 138 ] = _cg_const_8 [ 138 ] ; nonscalar6 [ 139 ] =
_cg_const_8 [ 139 ] ; nonscalar6 [ 140 ] = _cg_const_8 [ 140 ] ; nonscalar6 [
141 ] = _cg_const_8 [ 141 ] ; nonscalar6 [ 142 ] = _cg_const_8 [ 142 ] ;
nonscalar6 [ 143 ] = _cg_const_8 [ 143 ] ; nonscalar6 [ 144 ] = _cg_const_8 [
144 ] ; nonscalar6 [ 145 ] = _cg_const_8 [ 145 ] ; nonscalar6 [ 146 ] =
_cg_const_8 [ 146 ] ; nonscalar6 [ 147 ] = _cg_const_8 [ 147 ] ; nonscalar6 [
148 ] = _cg_const_8 [ 148 ] ; nonscalar6 [ 149 ] = _cg_const_8 [ 149 ] ;
nonscalar6 [ 150 ] = _cg_const_8 [ 150 ] ; nonscalar6 [ 151 ] = _cg_const_8 [
151 ] ; nonscalar6 [ 152 ] = _cg_const_8 [ 152 ] ; nonscalar6 [ 153 ] =
_cg_const_8 [ 153 ] ; nonscalar6 [ 154 ] = _cg_const_8 [ 154 ] ; nonscalar6 [
155 ] = _cg_const_8 [ 155 ] ; nonscalar6 [ 156 ] = _cg_const_8 [ 156 ] ;
nonscalar6 [ 157 ] = _cg_const_8 [ 157 ] ; nonscalar6 [ 158 ] = _cg_const_8 [
158 ] ; nonscalar6 [ 159 ] = _cg_const_8 [ 159 ] ; nonscalar6 [ 160 ] =
_cg_const_8 [ 160 ] ; nonscalar7 [ 0 ] = 0.0 ; nonscalar7 [ 1 ] = 1.0 ;
nonscalar7 [ 2 ] = 2.0 ; nonscalar7 [ 3 ] = 3.0 ; nonscalar7 [ 4 ] = 4.0 ;
nonscalar7 [ 5 ] = 5.0 ; nonscalar7 [ 6 ] = 6.0 ; nonscalar7 [ 7 ] = 7.0 ;
nonscalar7 [ 8 ] = 8.0 ; nonscalar7 [ 9 ] = 9.0 ; nonscalar7 [ 10 ] = 10.0 ;
nonscalar7 [ 11 ] = 11.0 ; nonscalar7 [ 12 ] = 12.0 ; nonscalar7 [ 13 ] =
13.0 ; nonscalar7 [ 14 ] = 14.0 ; nonscalar7 [ 15 ] = 15.0 ; nonscalar7 [ 16
] = 16.0 ; nonscalar7 [ 17 ] = 17.0 ; nonscalar7 [ 18 ] = 18.0 ; nonscalar7 [
19 ] = 19.0 ; nonscalar7 [ 20 ] = 20.0 ; nonscalar7 [ 21 ] = 21.0 ;
nonscalar7 [ 22 ] = 22.0 ; nonscalar7 [ 23 ] = 23.0 ; nonscalar7 [ 24 ] =
24.0 ; nonscalar7 [ 25 ] = 25.0 ; nonscalar7 [ 26 ] = 26.0 ; nonscalar7 [ 27
] = 27.0 ; nonscalar7 [ 28 ] = 28.0 ; nonscalar7 [ 29 ] = 29.0 ; nonscalar7 [
30 ] = 30.0 ; nonscalar7 [ 31 ] = 31.0 ; nonscalar7 [ 32 ] = 32.0 ;
nonscalar7 [ 33 ] = 33.0 ; nonscalar7 [ 34 ] = 34.0 ; nonscalar7 [ 35 ] =
35.0 ; nonscalar7 [ 36 ] = 36.0 ; nonscalar7 [ 37 ] = 37.0 ; nonscalar7 [ 38
] = 38.0 ; nonscalar7 [ 39 ] = 39.0 ; nonscalar7 [ 40 ] = 40.0 ; nonscalar7 [
41 ] = 41.0 ; nonscalar7 [ 42 ] = 42.0 ; nonscalar7 [ 43 ] = 43.0 ;
nonscalar7 [ 44 ] = 44.0 ; nonscalar7 [ 45 ] = 45.0 ; nonscalar7 [ 46 ] =
46.0 ; nonscalar7 [ 47 ] = 47.0 ; nonscalar7 [ 48 ] = 48.0 ; nonscalar7 [ 49
] = 49.0 ; nonscalar7 [ 50 ] = 50.0 ; nonscalar7 [ 51 ] = 51.0 ; nonscalar7 [
52 ] = 52.0 ; nonscalar7 [ 53 ] = 53.0 ; nonscalar7 [ 54 ] = 54.0 ;
nonscalar7 [ 55 ] = 55.0 ; nonscalar7 [ 56 ] = 56.0 ; nonscalar7 [ 57 ] =
57.0 ; nonscalar7 [ 58 ] = 58.0 ; nonscalar7 [ 59 ] = 59.0 ; nonscalar7 [ 60
] = 60.0 ; nonscalar7 [ 61 ] = 61.0 ; nonscalar7 [ 62 ] = 62.0 ; nonscalar7 [
63 ] = 63.0 ; nonscalar7 [ 64 ] = 64.0 ; nonscalar7 [ 65 ] = 65.0 ;
nonscalar7 [ 66 ] = 66.0 ; nonscalar7 [ 67 ] = 67.0 ; nonscalar7 [ 68 ] =
68.0 ; nonscalar7 [ 69 ] = 69.0 ; nonscalar7 [ 70 ] = 70.0 ; nonscalar7 [ 71
] = 71.0 ; nonscalar7 [ 72 ] = 72.0 ; nonscalar7 [ 73 ] = 73.0 ; nonscalar7 [
74 ] = 74.0 ; nonscalar7 [ 75 ] = 75.0 ; nonscalar7 [ 76 ] = 76.0 ;
nonscalar7 [ 77 ] = 77.0 ; nonscalar7 [ 78 ] = 78.0 ; nonscalar7 [ 79 ] =
79.0 ; nonscalar7 [ 80 ] = 80.0 ; nonscalar7 [ 81 ] = 81.0 ; nonscalar7 [ 82
] = 82.0 ; nonscalar7 [ 83 ] = 83.0 ; nonscalar7 [ 84 ] = 84.0 ; nonscalar7 [
85 ] = 85.0 ; nonscalar7 [ 86 ] = 86.0 ; nonscalar7 [ 87 ] = 87.0 ;
nonscalar7 [ 88 ] = 88.0 ; nonscalar7 [ 89 ] = 89.0 ; nonscalar7 [ 90 ] =
90.0 ; nonscalar7 [ 91 ] = 91.0 ; nonscalar7 [ 92 ] = 92.0 ; nonscalar7 [ 93
] = 93.0 ; nonscalar7 [ 94 ] = 94.0 ; nonscalar7 [ 95 ] = 95.0 ; nonscalar7 [
96 ] = 96.0 ; nonscalar7 [ 97 ] = 97.0 ; nonscalar7 [ 98 ] = 98.0 ;
nonscalar7 [ 99 ] = 99.0 ; nonscalar7 [ 100 ] = 100.0 ; nonscalar7 [ 101 ] =
101.0 ; nonscalar7 [ 102 ] = 102.0 ; nonscalar7 [ 103 ] = 103.0 ; nonscalar7
[ 104 ] = 104.0 ; nonscalar7 [ 105 ] = 105.0 ; nonscalar7 [ 106 ] = 106.0 ;
nonscalar7 [ 107 ] = 107.0 ; nonscalar7 [ 108 ] = 108.0 ; nonscalar7 [ 109 ]
= 109.0 ; nonscalar7 [ 110 ] = 110.0 ; nonscalar7 [ 111 ] = 111.0 ;
nonscalar7 [ 112 ] = 112.0 ; nonscalar7 [ 113 ] = 113.0 ; nonscalar7 [ 114 ]
= 114.0 ; nonscalar7 [ 115 ] = 115.0 ; nonscalar7 [ 116 ] = 116.0 ;
nonscalar7 [ 117 ] = 117.0 ; nonscalar7 [ 118 ] = 118.0 ; nonscalar7 [ 119 ]
= 119.0 ; nonscalar7 [ 120 ] = 120.0 ; nonscalar7 [ 121 ] = 121.0 ;
nonscalar7 [ 122 ] = 122.0 ; nonscalar7 [ 123 ] = 123.0 ; nonscalar7 [ 124 ]
= 124.0 ; nonscalar7 [ 125 ] = 125.0 ; nonscalar7 [ 126 ] = 126.0 ;
nonscalar7 [ 127 ] = 127.0 ; nonscalar7 [ 128 ] = 128.0 ; nonscalar7 [ 129 ]
= 129.0 ; nonscalar7 [ 130 ] = 130.0 ; nonscalar7 [ 131 ] = 131.0 ;
nonscalar7 [ 132 ] = 132.0 ; nonscalar7 [ 133 ] = 133.0 ; nonscalar7 [ 134 ]
= 134.0 ; nonscalar7 [ 135 ] = 135.0 ; nonscalar7 [ 136 ] = 136.0 ;
nonscalar7 [ 137 ] = 137.0 ; nonscalar7 [ 138 ] = 138.0 ; nonscalar7 [ 139 ]
= 139.0 ; nonscalar7 [ 140 ] = 140.0 ; nonscalar7 [ 141 ] = 141.0 ;
nonscalar7 [ 142 ] = 142.0 ; nonscalar7 [ 143 ] = 143.0 ; nonscalar7 [ 144 ]
= 144.0 ; nonscalar7 [ 145 ] = 145.0 ; nonscalar7 [ 146 ] = 146.0 ;
nonscalar7 [ 147 ] = 147.0 ; nonscalar7 [ 148 ] = 148.0 ; nonscalar7 [ 149 ]
= 149.0 ; nonscalar7 [ 150 ] = 150.0 ; nonscalar7 [ 151 ] = 151.0 ;
nonscalar7 [ 152 ] = 152.0 ; nonscalar7 [ 153 ] = 153.0 ; nonscalar7 [ 154 ]
= 154.0 ; nonscalar7 [ 155 ] = 155.0 ; nonscalar7 [ 156 ] = 156.0 ;
nonscalar7 [ 157 ] = 157.0 ; nonscalar7 [ 158 ] = 158.0 ; nonscalar7 [ 159 ]
= 159.0 ; nonscalar7 [ 160 ] = 160.0 ; if ( t97 -> mM . mX [ 11UL ] != 0 ) {
t64 = 8.200000000000002E-8 ; } else { t64 = t34 [ 0UL ] * t97 -> mX . mX [
5UL ] ; } if ( t97 -> mM . mX [ 3UL ] != 0 ) { t54 = 0.99 ; } else { t54 =
t97 -> mM . mX [ 4UL ] != 0 ? 0.0 : t97 -> mU . mX [ 2UL ] ; } if ( t97 -> mM
. mX [ 5UL ] != 0 ) { zc_int6 = 0.99 ; } else { zc_int6 = t97 -> mM . mX [
6UL ] != 0 ? 0.0 : t97 -> mU . mX [ 5UL ] ; } if ( t97 -> mM . mX [ 7UL ] !=
0 ) { zc_int7 = 0.99 ; } else { zc_int7 = t97 -> mM . mX [ 8UL ] != 0 ? 0.0 :
t97 -> mU . mX [ 4UL ] ; } if ( t97 -> mM . mX [ 9UL ] != 0 ) { zc_int8 =
0.99 ; } else { zc_int8 = t97 -> mM . mX [ 10UL ] != 0 ? 0.0 : t97 -> mU . mX
[ 1UL ] ; } t6 = - 1.6019094575855E-19 / ( t58 == 0.0 ? 1.0E-16 : t58 ) ;
intermediate_der11 = 1.602176487E-19 / ( t58 == 0.0 ? 1.0E-16 : t58 ) ; t58 =
- 1.6019094575855E-19 / ( t61 == 0.0 ? 1.0E-16 : t61 ) ; t61 =
1.602176487E-19 / ( t61 == 0.0 ? 1.0E-16 : t61 ) ; t11 [ 0UL ] = - t97 -> mX
. mX [ 16UL ] ; t18 [ 0 ] = 161UL ; tlu2_linear_linear_prelookup ( & t0 .
mField0 [ 0UL ] , & t0 . mField1 [ 0UL ] , & t0 . mField2 [ 0UL ] , &
nonscalar7 [ 0UL ] , & t11 [ 0UL ] , & t18 [ 0UL ] , & t10 [ 0UL ] ) ; t11 [
0UL ] = - t97 -> mX . mX [ 18UL ] ; tlu2_linear_linear_prelookup ( & t2 .
mField0 [ 0UL ] , & t2 . mField1 [ 0UL ] , & t2 . mField2 [ 0UL ] , &
nonscalar7 [ 0UL ] , & t11 [ 0UL ] , & t18 [ 0UL ] , & t10 [ 0UL ] ) ; if ( t97
-> mM . mX [ 39UL ] != 0 ) { out -> mJ . mX [ 17UL ] = - ( t58 * t7 *
5.54062238439351E+34 ) ; } else if ( t97 -> mM . mX [ 41UL ] != 0 ) { out ->
mJ . mX [ 17UL ] = - ( t58 * t7 * 4.9060947306492808E-35 ) ; } else { out ->
mJ . mX [ 17UL ] = - ( pmf_exp ( t46 ) * t58 * t7 ) ; } if ( t97 -> mM . mX [
42UL ] != 0 ) { out -> mJ . mX [ 18UL ] = - ( t6 * t47 * 5.54062238439351E+34
) ; } else if ( t97 -> mM . mX [ 2UL ] != 0 ) { out -> mJ . mX [ 18UL ] = - ( t6
* t47 * 4.9060947306492808E-35 ) ; } else { out -> mJ . mX [ 18UL ] = - ( pmf_exp ( intrm_sf_mf_10 ) * t6 * t47 ) ; } if ( t97 -> mM . mX [ 39UL ] != 0 ) { out -> mJ . mX [ 20UL ] = - ( t61 * t7 * 5.54062238439351E+34 ) ; } else if ( t97 -> mM . mX [ 41UL ] != 0 ) { out -> mJ . mX [ 20UL ] = - ( t61 * t7 * 4.9060947306492808E-35 ) ; } else { out -> mJ . mX [ 20UL ] = - ( pmf_exp ( t46 ) * t61 * t7 ) ; } if ( t97 -> mM . mX [ 42UL ] != 0 ) { out -> mJ . mX [ 21UL ] = - ( intermediate_der11 * t47 * 5.54062238439351E+34 ) ; } else if ( t97 -> mM . mX [ 2UL ] != 0 ) { out -> mJ . mX [ 21UL ] = - ( intermediate_der11 * t47 * 4.9060947306492808E-35 ) ; } else { out -> mJ . mX [ 21UL ] = - ( pmf_exp ( intrm_sf_mf_10 ) * intermediate_der11 * t47 ) ; } t61 = t96 * t96 ; out -> mJ . mX [ 1UL ] = 1.0 - - AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 / ( t61 == 0.0 ? 1.0E-16 : t61 ) * 0.001 * 1000.0 ; out -> mJ . mX [ 2UL ] = ( ( size_t ) t97 -> mQ . mX [ 0UL ] == 1UL ? - 1.0E+6 : - 0.001 ) / 1.0E+6 ; out -> mJ . mX [ 3UL ] = - ( t54 / ( 1.0 - t54 == 0.0 ? 1.0E-16 : 1.0 - t54 ) ) ; out -> mJ . mX [ 4UL ] = 1.0 - - AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 / ( t61 == 0.0 ? 1.0E-16 : t61 ) * 0.001 * 1000.0 ; out -> mJ . mX [ 5UL ] = - ( zc_int6 / ( 1.0 - zc_int6 == 0.0 ? 1.0E-16 : 1.0 - zc_int6 ) ) ; out -> mJ . mX [ 6UL ] = - ( zc_int7 / ( 1.0 - zc_int7 == 0.0 ? 1.0E-16 : 1.0 - zc_int7 ) ) ; out -> mJ . mX [ 7UL ] = 1.0 - - AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 / ( t61 == 0.0 ? 1.0E-16 : t61 ) * 0.001 * 1000.0 ; out -> mJ . mX [ 8UL ] = - ( zc_int8 / ( 1.0 - zc_int8 == 0.0 ? 1.0E-16 : 1.0 - zc_int8 ) ) ; out -> mJ . mX [ 9UL ] = 1.0 - - AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 / ( t61 == 0.0 ? 1.0E-16 : t61 ) * 0.001 * 1000.0 ; tlu2_1d_linear_linear_value ( & t11 [ 0UL ] , & t0 . mField1 [ 0UL ] , & t0 . mField2 [ 0UL ] , & nonscalar6 [ 0UL ] , & t18 [ 0UL ] , & t10 [ 0UL ] ) ; tlu2_1d_linear_linear_value ( & t34 [ 0UL ] , & t2 . mField1 [ 0UL ] , & t2 . mField2 [ 0UL ] , & nonscalar6 [ 0UL ] , & t18 [ 0UL ] , & t10 [ 0UL ] ) ; out -> mJ . mX [ 19UL ] = - ( t54 / ( 1.0 - t54 == 0.0 ? 1.0E-16 : 1.0 - t54 ) ) ; out -> mJ . mX [ 0UL ] = - ( - AC_DC_Power_Conversion_AC_DC_Power_Conversion_PS_Divide_I1 / ( t61 == 0.0 ? 1.0E-16 : t61 ) * 1000.0 ) ; out -> mJ . mX [ 10UL ] = ( - 0.001 - t64 ) / 5236.5888000000014 ; out -> mJ . mX [ 11UL ] = - ( zc_int6 / ( 1.0 - zc_int6 == 0.0 ? 1.0E-16 : 1.0 - zc_int6 ) ) ; out -> mJ . mX [ 12UL ] = ( - 0.001 - ( - t11 [ 0UL ] ) ) / 406.01569426309652 ; out -> mJ . mX [ 13UL ] = - ( zc_int7 / ( 1.0 - zc_int7 == 0.0 ? 1.0E-16 : 1.0 - zc_int7 ) ) ; out -> mJ . mX [ 14UL ] = ( - 0.001 - ( - t34 [ 0UL ] ) ) / 406.01569426309652 ; out -> mJ . mX [ 15UL ] = - ( zc_int8 / ( 1.0 - zc_int8 == 0.0 ? 1.0E-16 : 1.0 - zc_int8 ) ) ; out -> mJ . mX [ 16UL ] = - ( pmf_pow ( t97 -> mX . mX [ 30UL ] / 298.15 , 0.243341028305912 ) * 6.4849423325067E-7 ) ; out -> mJ . mX [ 22UL ] = - 1.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
