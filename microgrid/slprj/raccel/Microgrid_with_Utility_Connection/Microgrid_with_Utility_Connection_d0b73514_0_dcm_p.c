#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dcm_p.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_dc_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_dcm_p ( const
DifferentialClump * sys , const NeDynamicSystemInput * t1 , DcMethodOutput *
out ) { static int32_T _cg_const_2 [ 27 ] = { 0 , 1 , 2 , 3 , 4 , 0 , 1 , 2 ,
3 , 4 , 0 , 1 , 2 , 3 , 4 , 0 , 1 , 2 , 3 , 4 , 0 , 1 , 2 , 3 , 4 , 6 , 5 } ;
static int32_T _cg_const_1 [ 8 ] = { 0 , 5 , 10 , 15 , 20 , 25 , 26 , 27 } ;
( void ) t1 ; out -> mM_P . mNumCol = 7UL ; out -> mM_P . mNumRow = 7UL ; out
-> mM_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mM_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mM_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mM_P
. mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mM_P . mJc [ 4 ] = _cg_const_1 [ 4 ]
; out -> mM_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mM_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mM_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mM_P
. mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mM_P . mIr [ 1 ] = _cg_const_2 [ 1 ]
; out -> mM_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mM_P . mIr [ 3 ] =
_cg_const_2 [ 3 ] ; out -> mM_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mM_P
. mIr [ 5 ] = _cg_const_2 [ 5 ] ; out -> mM_P . mIr [ 6 ] = _cg_const_2 [ 6 ]
; out -> mM_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mM_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; out -> mM_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out -> mM_P
. mIr [ 10 ] = _cg_const_2 [ 10 ] ; out -> mM_P . mIr [ 11 ] = _cg_const_2 [
11 ] ; out -> mM_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out -> mM_P . mIr [ 13
] = _cg_const_2 [ 13 ] ; out -> mM_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out
-> mM_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out -> mM_P . mIr [ 16 ] =
_cg_const_2 [ 16 ] ; out -> mM_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out ->
mM_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out -> mM_P . mIr [ 19 ] =
_cg_const_2 [ 19 ] ; out -> mM_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; out ->
mM_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out -> mM_P . mIr [ 22 ] =
_cg_const_2 [ 22 ] ; out -> mM_P . mIr [ 23 ] = _cg_const_2 [ 23 ] ; out ->
mM_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out -> mM_P . mIr [ 25 ] =
_cg_const_2 [ 25 ] ; out -> mM_P . mIr [ 26 ] = _cg_const_2 [ 26 ] ; ( void )
sys ; ( void ) out ; return 0 ; }
