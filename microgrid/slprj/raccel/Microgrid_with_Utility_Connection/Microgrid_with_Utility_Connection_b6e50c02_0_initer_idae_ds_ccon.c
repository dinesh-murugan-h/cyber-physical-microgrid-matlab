#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_ccon.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_ccon ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t8 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; real_T t1 [ 22 ] ; real_T t0 [ 11 ] ;
real_T t2 [ 11 ] ; real_T t3 [ 11 ] ; size_t t4 ; ( void ) t8 ; t0 [ 0 ] =
_cg_const_1 [ 0 ] ; t0 [ 1 ] = _cg_const_1 [ 1 ] ; t0 [ 2 ] = _cg_const_1 [ 2
] ; t0 [ 3 ] = _cg_const_1 [ 3 ] ; t0 [ 4 ] = _cg_const_1 [ 4 ] ; t0 [ 5 ] =
_cg_const_1 [ 5 ] ; t0 [ 6 ] = _cg_const_1 [ 6 ] ; t0 [ 7 ] = _cg_const_1 [ 7
] ; t0 [ 8 ] = _cg_const_1 [ 8 ] ; t0 [ 9 ] = _cg_const_1 [ 9 ] ; t0 [ 10 ] =
_cg_const_1 [ 10 ] ; t2 [ 0UL ] = 0.0 ; t2 [ 1UL ] = 0.0 ; t2 [ 2UL ] = 0.0 ;
t2 [ 3UL ] = 0.0 ; t2 [ 4UL ] = 0.0 ; t2 [ 5UL ] = 0.0 ; t2 [ 6UL ] = 0.0 ;
t2 [ 7UL ] = 0.0 ; t2 [ 8UL ] = 0.0 ; t2 [ 9UL ] = 0.0 ; t2 [ 10UL ] =
376.99111843077515 ; t3 [ 0UL ] = 0.0 ; t3 [ 1UL ] = 0.0 ; t3 [ 2UL ] = 0.0 ;
t3 [ 3UL ] = 0.0 ; t3 [ 4UL ] = 0.0 ; t3 [ 5UL ] = 0.0 ; t3 [ 6UL ] = 0.0 ;
t3 [ 7UL ] = 0.0 ; t3 [ 8UL ] = 0.0 ; t3 [ 9UL ] = 0.0 ; t3 [ 10UL ] =
376.99111843077515 ; for ( t4 = 0UL ; t4 < 11UL ; t4 ++ ) { t1 [ t4 ] = - t2
[ t4 ] / ( t0 [ t4 ] == 0.0 ? 1.0E-16 : t0 [ t4 ] ) ; } for ( t4 = 0UL ; t4 <
11UL ; t4 ++ ) { t1 [ t4 + 11UL ] = - t3 [ t4 ] / ( t0 [ t4 ] == 0.0 ?
1.0E-16 : t0 [ t4 ] ) ; } out -> mCCON . mX [ 0 ] = t1 [ 0 ] ; out -> mCCON .
mX [ 1 ] = t1 [ 1 ] ; out -> mCCON . mX [ 2 ] = t1 [ 2 ] ; out -> mCCON . mX
[ 3 ] = t1 [ 3 ] ; out -> mCCON . mX [ 4 ] = t1 [ 4 ] ; out -> mCCON . mX [ 5
] = t1 [ 5 ] ; out -> mCCON . mX [ 6 ] = t1 [ 6 ] ; out -> mCCON . mX [ 7 ] =
t1 [ 7 ] ; out -> mCCON . mX [ 8 ] = t1 [ 8 ] ; out -> mCCON . mX [ 9 ] = t1
[ 9 ] ; out -> mCCON . mX [ 10 ] = t1 [ 10 ] ; out -> mCCON . mX [ 11 ] = t1
[ 11 ] ; out -> mCCON . mX [ 12 ] = t1 [ 12 ] ; out -> mCCON . mX [ 13 ] = t1
[ 13 ] ; out -> mCCON . mX [ 14 ] = t1 [ 14 ] ; out -> mCCON . mX [ 15 ] = t1
[ 15 ] ; out -> mCCON . mX [ 16 ] = t1 [ 16 ] ; out -> mCCON . mX [ 17 ] = t1
[ 17 ] ; out -> mCCON . mX [ 18 ] = t1 [ 18 ] ; out -> mCCON . mX [ 19 ] = t1
[ 19 ] ; out -> mCCON . mX [ 20 ] = t1 [ 20 ] ; out -> mCCON . mX [ 21 ] = t1
[ 21 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
