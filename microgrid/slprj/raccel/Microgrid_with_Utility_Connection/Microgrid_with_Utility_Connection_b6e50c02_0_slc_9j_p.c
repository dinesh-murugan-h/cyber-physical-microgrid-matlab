#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j_p.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j_p ( const
SwitchedLinearClump * sys , const NeDynamicSystemInput * t1 , SlcMethodOutput
* out ) { static int32_T _cg_const_2 [ 122 ] = { 51 , 52 , 53 , 51 , 52 , 53
, 51 , 52 , 53 , 28 , 37 , 51 , 29 , 38 , 52 , 30 , 39 , 53 , 21 , 22 , 31 ,
32 , 33 , 51 , 52 , 53 , 21 , 22 , 31 , 32 , 33 , 51 , 52 , 53 , 21 , 22 , 31
, 32 , 33 , 51 , 52 , 53 , 21 , 22 , 21 , 22 , 21 , 22 , 4 , 6 , 34 , 35 , 36
, 51 , 52 , 53 , 4 , 6 , 34 , 35 , 36 , 51 , 52 , 53 , 4 , 6 , 34 , 35 , 36 ,
51 , 52 , 53 , 4 , 6 , 4 , 6 , 4 , 6 , 40 , 51 , 41 , 52 , 42 , 53 , 4 , 6 ,
48 , 49 , 50 , 4 , 6 , 47 , 48 , 49 , 50 , 47 , 48 , 49 , 50 , 6 , 47 , 4 ,
47 , 15 , 17 , 19 , 21 , 22 , 21 , 22 , 11 , 15 , 17 , 19 , 11 , 15 , 17 , 19
, 11 , 22 , 11 , 21 } ; static int32_T _cg_const_1 [ 55 ] = { 0 , 0 , 0 , 0 ,
3 , 6 , 9 , 9 , 9 , 9 , 12 , 15 , 18 , 26 , 34 , 42 , 44 , 46 , 48 , 56 , 64
, 72 , 74 , 76 , 78 , 80 , 80 , 82 , 82 , 84 , 84 , 89 , 89 , 91 , 91 , 95 ,
95 , 95 , 99 , 99 , 101 , 101 , 103 , 108 , 108 , 108 , 110 , 114 , 114 , 114
, 118 , 118 , 120 , 120 , 122 } ; ( void ) t1 ; out -> mJ_P . mNumCol = 54UL
; out -> mJ_P . mNumRow = 54UL ; out -> mJ_P . mJc [ 0 ] = _cg_const_1 [ 0 ]
; out -> mJ_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mJ_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mJ_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mJ_P
. mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mJ_P . mJc [ 5 ] = _cg_const_1 [ 5 ]
; out -> mJ_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mJ_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mJ_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mJ_P
. mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mJ_P . mJc [ 10 ] = _cg_const_1 [ 10
] ; out -> mJ_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mJ_P . mJc [ 12 ]
= _cg_const_1 [ 12 ] ; out -> mJ_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out ->
mJ_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mJ_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mJ_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mJ_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mJ_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mJ_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mJ_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mJ_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mJ_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mJ_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mJ_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mJ_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mJ_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mJ_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mJ_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mJ_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mJ_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mJ_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mJ_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mJ_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mJ_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mJ_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mJ_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mJ_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mJ_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mJ_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mJ_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mJ_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mJ_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mJ_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mJ_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mJ_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mJ_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mJ_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mJ_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mJ_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mJ_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mJ_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mJ_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mJ_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mJ_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mJ_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mJ_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mJ_P . mIr [ 2 ] = _cg_const_2
[ 2 ] ; out -> mJ_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mJ_P . mIr [ 4 ]
= _cg_const_2 [ 4 ] ; out -> mJ_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mJ_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out -> mJ_P . mIr [ 7 ] = _cg_const_2
[ 7 ] ; out -> mJ_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out -> mJ_P . mIr [ 9 ]
= _cg_const_2 [ 9 ] ; out -> mJ_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out ->
mJ_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out -> mJ_P . mIr [ 12 ] =
_cg_const_2 [ 12 ] ; out -> mJ_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out ->
mJ_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out -> mJ_P . mIr [ 15 ] =
_cg_const_2 [ 15 ] ; out -> mJ_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out ->
mJ_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out -> mJ_P . mIr [ 18 ] =
_cg_const_2 [ 18 ] ; out -> mJ_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out ->
mJ_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; out -> mJ_P . mIr [ 21 ] =
_cg_const_2 [ 21 ] ; out -> mJ_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out ->
mJ_P . mIr [ 23 ] = _cg_const_2 [ 23 ] ; out -> mJ_P . mIr [ 24 ] =
_cg_const_2 [ 24 ] ; out -> mJ_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out ->
mJ_P . mIr [ 26 ] = _cg_const_2 [ 26 ] ; out -> mJ_P . mIr [ 27 ] =
_cg_const_2 [ 27 ] ; out -> mJ_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out ->
mJ_P . mIr [ 29 ] = _cg_const_2 [ 29 ] ; out -> mJ_P . mIr [ 30 ] =
_cg_const_2 [ 30 ] ; out -> mJ_P . mIr [ 31 ] = _cg_const_2 [ 31 ] ; out ->
mJ_P . mIr [ 32 ] = _cg_const_2 [ 32 ] ; out -> mJ_P . mIr [ 33 ] =
_cg_const_2 [ 33 ] ; out -> mJ_P . mIr [ 34 ] = _cg_const_2 [ 34 ] ; out ->
mJ_P . mIr [ 35 ] = _cg_const_2 [ 35 ] ; out -> mJ_P . mIr [ 36 ] =
_cg_const_2 [ 36 ] ; out -> mJ_P . mIr [ 37 ] = _cg_const_2 [ 37 ] ; out ->
mJ_P . mIr [ 38 ] = _cg_const_2 [ 38 ] ; out -> mJ_P . mIr [ 39 ] =
_cg_const_2 [ 39 ] ; out -> mJ_P . mIr [ 40 ] = _cg_const_2 [ 40 ] ; out ->
mJ_P . mIr [ 41 ] = _cg_const_2 [ 41 ] ; out -> mJ_P . mIr [ 42 ] =
_cg_const_2 [ 42 ] ; out -> mJ_P . mIr [ 43 ] = _cg_const_2 [ 43 ] ; out ->
mJ_P . mIr [ 44 ] = _cg_const_2 [ 44 ] ; out -> mJ_P . mIr [ 45 ] =
_cg_const_2 [ 45 ] ; out -> mJ_P . mIr [ 46 ] = _cg_const_2 [ 46 ] ; out ->
mJ_P . mIr [ 47 ] = _cg_const_2 [ 47 ] ; out -> mJ_P . mIr [ 48 ] =
_cg_const_2 [ 48 ] ; out -> mJ_P . mIr [ 49 ] = _cg_const_2 [ 49 ] ; out ->
mJ_P . mIr [ 50 ] = _cg_const_2 [ 50 ] ; out -> mJ_P . mIr [ 51 ] =
_cg_const_2 [ 51 ] ; out -> mJ_P . mIr [ 52 ] = _cg_const_2 [ 52 ] ; out ->
mJ_P . mIr [ 53 ] = _cg_const_2 [ 53 ] ; out -> mJ_P . mIr [ 54 ] =
_cg_const_2 [ 54 ] ; out -> mJ_P . mIr [ 55 ] = _cg_const_2 [ 55 ] ; out ->
mJ_P . mIr [ 56 ] = _cg_const_2 [ 56 ] ; out -> mJ_P . mIr [ 57 ] =
_cg_const_2 [ 57 ] ; out -> mJ_P . mIr [ 58 ] = _cg_const_2 [ 58 ] ; out ->
mJ_P . mIr [ 59 ] = _cg_const_2 [ 59 ] ; out -> mJ_P . mIr [ 60 ] =
_cg_const_2 [ 60 ] ; out -> mJ_P . mIr [ 61 ] = _cg_const_2 [ 61 ] ; out ->
mJ_P . mIr [ 62 ] = _cg_const_2 [ 62 ] ; out -> mJ_P . mIr [ 63 ] =
_cg_const_2 [ 63 ] ; out -> mJ_P . mIr [ 64 ] = _cg_const_2 [ 64 ] ; out ->
mJ_P . mIr [ 65 ] = _cg_const_2 [ 65 ] ; out -> mJ_P . mIr [ 66 ] =
_cg_const_2 [ 66 ] ; out -> mJ_P . mIr [ 67 ] = _cg_const_2 [ 67 ] ; out ->
mJ_P . mIr [ 68 ] = _cg_const_2 [ 68 ] ; out -> mJ_P . mIr [ 69 ] =
_cg_const_2 [ 69 ] ; out -> mJ_P . mIr [ 70 ] = _cg_const_2 [ 70 ] ; out ->
mJ_P . mIr [ 71 ] = _cg_const_2 [ 71 ] ; out -> mJ_P . mIr [ 72 ] =
_cg_const_2 [ 72 ] ; out -> mJ_P . mIr [ 73 ] = _cg_const_2 [ 73 ] ; out ->
mJ_P . mIr [ 74 ] = _cg_const_2 [ 74 ] ; out -> mJ_P . mIr [ 75 ] =
_cg_const_2 [ 75 ] ; out -> mJ_P . mIr [ 76 ] = _cg_const_2 [ 76 ] ; out ->
mJ_P . mIr [ 77 ] = _cg_const_2 [ 77 ] ; out -> mJ_P . mIr [ 78 ] =
_cg_const_2 [ 78 ] ; out -> mJ_P . mIr [ 79 ] = _cg_const_2 [ 79 ] ; out ->
mJ_P . mIr [ 80 ] = _cg_const_2 [ 80 ] ; out -> mJ_P . mIr [ 81 ] =
_cg_const_2 [ 81 ] ; out -> mJ_P . mIr [ 82 ] = _cg_const_2 [ 82 ] ; out ->
mJ_P . mIr [ 83 ] = _cg_const_2 [ 83 ] ; out -> mJ_P . mIr [ 84 ] =
_cg_const_2 [ 84 ] ; out -> mJ_P . mIr [ 85 ] = _cg_const_2 [ 85 ] ; out ->
mJ_P . mIr [ 86 ] = _cg_const_2 [ 86 ] ; out -> mJ_P . mIr [ 87 ] =
_cg_const_2 [ 87 ] ; out -> mJ_P . mIr [ 88 ] = _cg_const_2 [ 88 ] ; out ->
mJ_P . mIr [ 89 ] = _cg_const_2 [ 89 ] ; out -> mJ_P . mIr [ 90 ] =
_cg_const_2 [ 90 ] ; out -> mJ_P . mIr [ 91 ] = _cg_const_2 [ 91 ] ; out ->
mJ_P . mIr [ 92 ] = _cg_const_2 [ 92 ] ; out -> mJ_P . mIr [ 93 ] =
_cg_const_2 [ 93 ] ; out -> mJ_P . mIr [ 94 ] = _cg_const_2 [ 94 ] ; out ->
mJ_P . mIr [ 95 ] = _cg_const_2 [ 95 ] ; out -> mJ_P . mIr [ 96 ] =
_cg_const_2 [ 96 ] ; out -> mJ_P . mIr [ 97 ] = _cg_const_2 [ 97 ] ; out ->
mJ_P . mIr [ 98 ] = _cg_const_2 [ 98 ] ; out -> mJ_P . mIr [ 99 ] =
_cg_const_2 [ 99 ] ; out -> mJ_P . mIr [ 100 ] = _cg_const_2 [ 100 ] ; out ->
mJ_P . mIr [ 101 ] = _cg_const_2 [ 101 ] ; out -> mJ_P . mIr [ 102 ] =
_cg_const_2 [ 102 ] ; out -> mJ_P . mIr [ 103 ] = _cg_const_2 [ 103 ] ; out
-> mJ_P . mIr [ 104 ] = _cg_const_2 [ 104 ] ; out -> mJ_P . mIr [ 105 ] =
_cg_const_2 [ 105 ] ; out -> mJ_P . mIr [ 106 ] = _cg_const_2 [ 106 ] ; out
-> mJ_P . mIr [ 107 ] = _cg_const_2 [ 107 ] ; out -> mJ_P . mIr [ 108 ] =
_cg_const_2 [ 108 ] ; out -> mJ_P . mIr [ 109 ] = _cg_const_2 [ 109 ] ; out
-> mJ_P . mIr [ 110 ] = _cg_const_2 [ 110 ] ; out -> mJ_P . mIr [ 111 ] =
_cg_const_2 [ 111 ] ; out -> mJ_P . mIr [ 112 ] = _cg_const_2 [ 112 ] ; out
-> mJ_P . mIr [ 113 ] = _cg_const_2 [ 113 ] ; out -> mJ_P . mIr [ 114 ] =
_cg_const_2 [ 114 ] ; out -> mJ_P . mIr [ 115 ] = _cg_const_2 [ 115 ] ; out
-> mJ_P . mIr [ 116 ] = _cg_const_2 [ 116 ] ; out -> mJ_P . mIr [ 117 ] =
_cg_const_2 [ 117 ] ; out -> mJ_P . mIr [ 118 ] = _cg_const_2 [ 118 ] ; out
-> mJ_P . mIr [ 119 ] = _cg_const_2 [ 119 ] ; out -> mJ_P . mIr [ 120 ] =
_cg_const_2 [ 120 ] ; out -> mJ_P . mIr [ 121 ] = _cg_const_2 [ 121 ] ; ( void
) sys ; ( void ) out ; return 0 ; }
