#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11fx.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_11_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_slc_11fx ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t5 , SlcMethodOutput
* out ) { static real_T _cg_const_1 [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; real_T t0 [ 11 ] ; real_T t1 [ 11 ] ;
size_t t2 ; t1 [ 0 ] = _cg_const_1 [ 0 ] ; t1 [ 1 ] = _cg_const_1 [ 1 ] ; t1
[ 2 ] = _cg_const_1 [ 2 ] ; t1 [ 3 ] = _cg_const_1 [ 3 ] ; t1 [ 4 ] =
_cg_const_1 [ 4 ] ; t1 [ 5 ] = _cg_const_1 [ 5 ] ; t1 [ 6 ] = _cg_const_1 [ 6
] ; t1 [ 7 ] = _cg_const_1 [ 7 ] ; t1 [ 8 ] = _cg_const_1 [ 8 ] ; t1 [ 9 ] =
_cg_const_1 [ 9 ] ; t1 [ 10 ] = _cg_const_1 [ 10 ] ; for ( t2 = 0UL ; t2 <
11UL ; t2 ++ ) { t0 [ t2 ] = t5 -> mX . mX [ t2 ] / ( t1 [ t2 ] == 0.0 ?
1.0E-16 : t1 [ t2 ] ) ; } out -> mFX . mX [ 0 ] = t0 [ 0 ] ; out -> mFX . mX
[ 1 ] = t0 [ 1 ] ; out -> mFX . mX [ 2 ] = t0 [ 2 ] ; out -> mFX . mX [ 3 ] =
t0 [ 3 ] ; out -> mFX . mX [ 4 ] = t0 [ 4 ] ; out -> mFX . mX [ 5 ] = t0 [ 5
] ; out -> mFX . mX [ 6 ] = t0 [ 6 ] ; out -> mFX . mX [ 7 ] = t0 [ 7 ] ; out
-> mFX . mX [ 8 ] = t0 [ 8 ] ; out -> mFX . mX [ 9 ] = t0 [ 9 ] ; out -> mFX
. mX [ 10 ] = t0 [ 10 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
