#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11xnplus1.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_slc_11xnplus1 ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t23 ,
SlcMethodOutput * out ) { static real_T _cg_const_1 [ 11 ] = { 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; real_T ltiInters0 [
11 ] ; real_T t1 [ 11 ] ; real_T t2 [ 11 ] ; real_T t11 ; real_T t13 ; real_T
t14 ; real_T t15 ; real_T t16 ; real_T t17 ; real_T t22 ; size_t t6 ; t22 =
t23 -> mX . mX [ 11UL ] * 4.0 + t23 -> mT . mX [ 0UL ] * 376.99111843077515 ;
t13 = cos ( t22 ) * 0.66666666666666663 ; t14 = cos ( t22 -
2.0943951023931953 ) * 0.66666666666666663 ; t15 = cos ( t22 +
2.0943951023931953 ) * 0.66666666666666663 ; t16 = - sin ( t22 ) *
0.66666666666666663 ; t17 = - sin ( t22 - 2.0943951023931953 ) *
0.66666666666666663 ; t11 = - sin ( t22 + 2.0943951023931953 ) *
0.66666666666666663 ; t1 [ 4UL ] = ( ( t13 * t23 -> mX . mX [ 12UL ] + t14 *
t23 -> mX . mX [ 13UL ] ) + t15 * t23 -> mX . mX [ 14UL ] ) /
3396.6257766593408 ; t1 [ 5UL ] = ( ( t16 * t23 -> mX . mX [ 12UL ] + t17 *
t23 -> mX . mX [ 13UL ] ) + t11 * t23 -> mX . mX [ 14UL ] ) /
3396.6257766593408 ; t1 [ 0UL ] = t23 -> mU . mX [ 0UL ] * 73.2868021772194 *
0.013679548134489863 ; t1 [ 1UL ] = t23 -> mX . mX [ 17UL ] * 0.02 ; t1 [ 2UL
] = t23 -> mX . mX [ 15UL ] * 1.8849555921538758E-5 ; t1 [ 3UL ] = t23 -> mX
. mX [ 16UL ] * 0.01061032953945969 ; t1 [ 6UL ] = 0.0 ; t1 [ 7UL ] = t23 ->
mX . mX [ 18UL ] ; t1 [ 8UL ] = t23 -> mX . mX [ 19UL ] ; t1 [ 9UL ] = 0.0 ;
t1 [ 10UL ] = t22 ; t2 [ 0 ] = _cg_const_1 [ 0 ] ; t2 [ 1 ] = _cg_const_1 [ 1
] ; t2 [ 2 ] = _cg_const_1 [ 2 ] ; t2 [ 3 ] = _cg_const_1 [ 3 ] ; t2 [ 4 ] =
_cg_const_1 [ 4 ] ; t2 [ 5 ] = _cg_const_1 [ 5 ] ; t2 [ 6 ] = _cg_const_1 [ 6
] ; t2 [ 7 ] = _cg_const_1 [ 7 ] ; t2 [ 8 ] = _cg_const_1 [ 8 ] ; t2 [ 9 ] =
_cg_const_1 [ 9 ] ; t2 [ 10 ] = _cg_const_1 [ 10 ] ; for ( t6 = 0UL ; t6 <
11UL ; t6 ++ ) { ltiInters0 [ t6 ] = - t1 [ t6 ] / ( t2 [ t6 ] == 0.0 ?
1.0E-16 : t2 [ t6 ] ) ; } out -> mXNPLUS1 . mX [ 10UL ] = - ltiInters0 [ 10UL
] / 0.25 ; out -> mXNPLUS1 . mX [ 0UL ] = - ltiInters0 [ 0UL ] ; out ->
mXNPLUS1 . mX [ 1UL ] = - ltiInters0 [ 1UL ] ; out -> mXNPLUS1 . mX [ 2UL ] =
- ltiInters0 [ 2UL ] ; out -> mXNPLUS1 . mX [ 3UL ] = - ltiInters0 [ 3UL ] ;
out -> mXNPLUS1 . mX [ 4UL ] = - ltiInters0 [ 4UL ] ; out -> mXNPLUS1 . mX [
5UL ] = - ltiInters0 [ 5UL ] ; out -> mXNPLUS1 . mX [ 6UL ] = - ltiInters0 [
6UL ] ; out -> mXNPLUS1 . mX [ 7UL ] = - ltiInters0 [ 7UL ] ; out -> mXNPLUS1
. mX [ 8UL ] = - ltiInters0 [ 8UL ] ; out -> mXNPLUS1 . mX [ 9UL ] = -
ltiInters0 [ 9UL ] ; ( void ) sys ; ( void ) out ; return 0 ; }
