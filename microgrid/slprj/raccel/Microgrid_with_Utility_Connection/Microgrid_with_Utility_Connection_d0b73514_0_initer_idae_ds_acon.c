#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_acon.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_acon ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t38 , NeDsMethodOutput *
out ) { real_T t1 [ 5 ] ; size_t t11 ; ( void ) t38 ; ( void ) LC ; t1 [ 0 ]
= - 0.00019096401076975906 ; t1 [ 1 ] = - 0.00019096401076975906 ; t1 [ 2 ] =
- 0.00019096401076975906 ; t1 [ 3 ] = - 0.00019096401076975906 ; t1 [ 4 ] = -
0.00019096401076975906 ; for ( t11 = 0UL ; t11 < 5UL ; t11 ++ ) { out ->
mACON . mX [ t11 ] = t1 [ t11 ] ; } out -> mACON . mX [ 5UL ] = 1.0 ; out ->
mACON . mX [ 6UL ] = 1.0 ; out -> mACON . mX [ 7UL ] = 1.0 ; out -> mACON .
mX [ 8UL ] = 1.0 ; out -> mACON . mX [ 9UL ] = 1.0 ; out -> mACON . mX [ 10UL
] = - 0.001 ; out -> mACON . mX [ 11UL ] = 1.0 ; out -> mACON . mX [ 12UL ] =
- 0.001 ; out -> mACON . mX [ 13UL ] = 1.0 ; out -> mACON . mX [ 14UL ] = -
0.001 ; out -> mACON . mX [ 15UL ] = 1.0 ; out -> mACON . mX [ 16UL ] = 1.0 ;
out -> mACON . mX [ 17UL ] = 1.0 ; out -> mACON . mX [ 18UL ] = -
1.9096401076975908E-7 ; out -> mACON . mX [ 19UL ] = 1.0 ; out -> mACON . mX
[ 20UL ] = 1.0 ; out -> mACON . mX [ 21UL ] = 0.00019096401076975906 ; out ->
mACON . mX [ 22UL ] = 1.0 ; out -> mACON . mX [ 23UL ] = 0.002462958979492069
; out -> mACON . mX [ 24UL ] = - 2.4629589794920689E-6 ; out -> mACON . mX [
25UL ] = 1.0 ; out -> mACON . mX [ 26UL ] = 0.002462958979492069 ; out ->
mACON . mX [ 27UL ] = - 2.4629589794920689E-6 ; out -> mACON . mX [ 28UL ] =
1.0 ; out -> mACON . mX [ 29UL ] = 1.0 ; out -> mACON . mX [ 30UL ] = -
0.043919121195430483 ; out -> mACON . mX [ 31UL ] = 1.0 ; out -> mACON . mX [
32UL ] = 1.0 ; out -> mACON . mX [ 33UL ] = 0.043926442269142 ; out -> mACON
. mX [ 34UL ] = - 1.0 ; out -> mACON . mX [ 35UL ] = 1.0 ; out -> mACON . mX
[ 36UL ] = 1.0 ; out -> mACON . mX [ 37UL ] = 1.0 ; out -> mACON . mX [ 38UL
] = 1.0 ; ( void ) LC ; ( void ) out ; return 0 ; }
