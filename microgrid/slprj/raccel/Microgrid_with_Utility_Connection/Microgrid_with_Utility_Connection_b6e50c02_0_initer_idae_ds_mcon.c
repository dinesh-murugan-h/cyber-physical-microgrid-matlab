#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_mcon.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_mcon ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 23 ] = { - 0.05 , - 0.0 , - 0.0 , - 0.0 ,
- 0.05 , - 0.0 , - 0.0 , - 0.0 , - 0.05 , - 1.0 , - 1.0 , -
0.075762127465646187 , - 0.061983471074380181 , - 0.24114385316953843 , - 1.0
, - 0.24114385316953843 , - 1.0 , - 1.0 , - 0.075762127465646187 , -
0.061983471074380181 , - 0.24114385316953843 , - 1.0 , - 0.24114385316953843
} ; ( void ) t1 ; out -> mMCON . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mMCON
. mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mMCON . mX [ 2 ] = _cg_const_1 [ 2 ]
; out -> mMCON . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mMCON . mX [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mMCON . mX [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mMCON . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mMCON . mX [ 7 ] = _cg_const_1
[ 7 ] ; out -> mMCON . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mMCON . mX [ 9 ]
= _cg_const_1 [ 9 ] ; out -> mMCON . mX [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mMCON . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mMCON . mX [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mMCON . mX [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mMCON . mX [ 14 ] = _cg_const_1 [ 14 ] ; out -> mMCON . mX [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mMCON . mX [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mMCON . mX [ 17 ] = _cg_const_1 [ 17 ] ; out -> mMCON . mX [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mMCON . mX [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mMCON . mX [ 20 ] = _cg_const_1 [ 20 ] ; out -> mMCON . mX [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mMCON . mX [ 22 ] = _cg_const_1 [ 22 ] ; ( void )
sys ; ( void ) out ; return 0 ; }
