#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_vmm.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_vmm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static boolean_T _cg_const_1 [ 26 ] = { false , false , false , false
, false , false , false , false , false , true , true , true , false , false
, false , false , false , false , false , false , false , false , false ,
false , false , false } ; ( void ) t1 ; out -> mVMM . mX [ 0 ] = _cg_const_1
[ 0 ] ; out -> mVMM . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mVMM . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mVMM . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mVMM
. mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mVMM . mX [ 5 ] = _cg_const_1 [ 5 ] ;
out -> mVMM . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mVMM . mX [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mVMM . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mVMM
. mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mVMM . mX [ 10 ] = _cg_const_1 [ 10 ]
; out -> mVMM . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mVMM . mX [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mVMM . mX [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mVMM . mX [ 14 ] = _cg_const_1 [ 14 ] ; out -> mVMM . mX [ 15 ] = _cg_const_1
[ 15 ] ; out -> mVMM . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mVMM . mX [ 17
] = _cg_const_1 [ 17 ] ; out -> mVMM . mX [ 18 ] = _cg_const_1 [ 18 ] ; out
-> mVMM . mX [ 19 ] = _cg_const_1 [ 19 ] ; out -> mVMM . mX [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mVMM . mX [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mVMM . mX [ 22 ] = _cg_const_1 [ 22 ] ; out -> mVMM . mX [ 23 ] = _cg_const_1
[ 23 ] ; out -> mVMM . mX [ 24 ] = _cg_const_1 [ 24 ] ; out -> mVMM . mX [ 25
] = _cg_const_1 [ 25 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
