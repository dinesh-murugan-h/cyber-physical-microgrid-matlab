#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_qx_p.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_qx_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 229 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 26 ,
27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28
, 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 ,
36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37
, 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 ,
42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 , 42 , 43
, 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1
, 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3
, 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5
, 26 , 27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 ,
27 , 28 , 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28
, 35 , 36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 ,
36 , 37 , 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37
, 41 , 42 , 43 , 0 , 1 , 2 , 3 , 4 , 5 , 26 , 27 , 28 , 35 , 36 , 37 , 41 ,
42 , 43 , 58 , 59 , 80 , 81 } ; static int32_T _cg_const_1 [ 86 ] = { 0 , 15
, 30 , 45 , 60 , 75 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 ,
90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 90 , 105 , 120 , 135 , 135 , 135
, 135 , 135 , 135 , 135 , 150 , 165 , 180 , 180 , 180 , 180 , 195 , 210 , 225
, 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225 , 225
, 225 , 226 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227
, 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 227 , 228 , 229 , 229
, 229 , 229 } ; int32_T i1 ; ( void ) t1 ; out -> mQX_P . mNumCol = 85UL ;
out -> mQX_P . mNumRow = 85UL ; out -> mQX_P . mJc [ 0 ] = _cg_const_1 [ 0 ]
; out -> mQX_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mQX_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mQX_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mQX_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mQX_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mQX_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mQX_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mQX_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mQX_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mQX_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mQX_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mQX_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mQX_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mQX_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mQX_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mQX_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mQX_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mQX_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mQX_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mQX_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mQX_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mQX_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mQX_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mQX_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mQX_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mQX_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mQX_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mQX_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mQX_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mQX_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mQX_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mQX_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mQX_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mQX_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mQX_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mQX_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mQX_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mQX_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mQX_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mQX_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mQX_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mQX_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mQX_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mQX_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mQX_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mQX_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mQX_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mQX_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mQX_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mQX_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mQX_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mQX_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mQX_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; out -> mQX_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out ->
mQX_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out -> mQX_P . mJc [ 56 ] =
_cg_const_1 [ 56 ] ; out -> mQX_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out ->
mQX_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out -> mQX_P . mJc [ 59 ] =
_cg_const_1 [ 59 ] ; out -> mQX_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out ->
mQX_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out -> mQX_P . mJc [ 62 ] =
_cg_const_1 [ 62 ] ; out -> mQX_P . mJc [ 63 ] = _cg_const_1 [ 63 ] ; out ->
mQX_P . mJc [ 64 ] = _cg_const_1 [ 64 ] ; out -> mQX_P . mJc [ 65 ] =
_cg_const_1 [ 65 ] ; out -> mQX_P . mJc [ 66 ] = _cg_const_1 [ 66 ] ; out ->
mQX_P . mJc [ 67 ] = _cg_const_1 [ 67 ] ; out -> mQX_P . mJc [ 68 ] =
_cg_const_1 [ 68 ] ; out -> mQX_P . mJc [ 69 ] = _cg_const_1 [ 69 ] ; out ->
mQX_P . mJc [ 70 ] = _cg_const_1 [ 70 ] ; out -> mQX_P . mJc [ 71 ] =
_cg_const_1 [ 71 ] ; out -> mQX_P . mJc [ 72 ] = _cg_const_1 [ 72 ] ; out ->
mQX_P . mJc [ 73 ] = _cg_const_1 [ 73 ] ; out -> mQX_P . mJc [ 74 ] =
_cg_const_1 [ 74 ] ; out -> mQX_P . mJc [ 75 ] = _cg_const_1 [ 75 ] ; out ->
mQX_P . mJc [ 76 ] = _cg_const_1 [ 76 ] ; out -> mQX_P . mJc [ 77 ] =
_cg_const_1 [ 77 ] ; out -> mQX_P . mJc [ 78 ] = _cg_const_1 [ 78 ] ; out ->
mQX_P . mJc [ 79 ] = _cg_const_1 [ 79 ] ; out -> mQX_P . mJc [ 80 ] =
_cg_const_1 [ 80 ] ; out -> mQX_P . mJc [ 81 ] = _cg_const_1 [ 81 ] ; out ->
mQX_P . mJc [ 82 ] = _cg_const_1 [ 82 ] ; out -> mQX_P . mJc [ 83 ] =
_cg_const_1 [ 83 ] ; out -> mQX_P . mJc [ 84 ] = _cg_const_1 [ 84 ] ; out ->
mQX_P . mJc [ 85 ] = _cg_const_1 [ 85 ] ; for ( i1 = 0 ; i1 < 229 ; i1 ++ ) {
out -> mQX_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) sys ; ( void )
out ; return 0 ; }
