#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9m_p.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_slc_9m_p ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t1 , SlcMethodOutput
* out ) { static int32_T _cg_const_1 [ 55 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 ,
2 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3
, 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 } ; ( void ) t1 ; out -> mM_P . mNumCol =
54UL ; out -> mM_P . mNumRow = 54UL ; out -> mM_P . mJc [ 0 ] = _cg_const_1 [
0 ] ; out -> mM_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mM_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mM_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mM_P
. mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mM_P . mJc [ 5 ] = _cg_const_1 [ 5 ]
; out -> mM_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mM_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mM_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mM_P
. mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mM_P . mJc [ 10 ] = _cg_const_1 [ 10
] ; out -> mM_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mM_P . mJc [ 12 ]
= _cg_const_1 [ 12 ] ; out -> mM_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mM_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mM_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mM_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mM_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mM_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mM_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mM_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mM_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mM_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mM_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mM_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mM_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mM_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mM_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mM_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mM_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mM_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mM_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mM_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mM_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mM_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mM_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mM_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mM_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mM_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mM_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mM_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mM_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mM_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mM_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mM_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mM_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mM_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mM_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mM_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mM_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mM_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mM_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mM_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mM_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mM_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mM_P . mIr [ 0 ] = 16 ; out -> mM_P . mIr [ 1 ] =
18 ; out -> mM_P . mIr [ 2 ] = 20 ; ( void ) sys ; ( void ) out ; return 0 ;
}
