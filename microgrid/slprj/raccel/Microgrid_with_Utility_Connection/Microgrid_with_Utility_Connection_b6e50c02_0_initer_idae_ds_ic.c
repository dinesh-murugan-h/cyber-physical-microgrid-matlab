#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_ic.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_ic ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t11 , NeDsMethodOutput *
out ) { real_T t0 [ 11 ] ; size_t t8 ; ( void ) t11 ; t0 [ 0 ] = 0.0 ; t0 [ 1
] = 0.0 ; t0 [ 2 ] = 0.0 ; t0 [ 3 ] = 0.0 ; t0 [ 4 ] = 0.0 ; t0 [ 5 ] = 0.0 ;
t0 [ 6 ] = 0.0 ; t0 [ 7 ] = 0.0 ; t0 [ 8 ] = 0.0 ; t0 [ 9 ] = 0.0 ; t0 [ 10 ]
= 0.0 ; out -> mIC . mX [ 0UL ] = 0.0 ; out -> mIC . mX [ 1UL ] = 0.0 ; out
-> mIC . mX [ 2UL ] = 0.0 ; out -> mIC . mX [ 3UL ] = 0.0 ; out -> mIC . mX [
4UL ] = 0.0 ; out -> mIC . mX [ 5UL ] = 0.0 ; out -> mIC . mX [ 6UL ] =
0.31415926535897931 ; out -> mIC . mX [ 7UL ] = 94.247779607693786 ; out ->
mIC . mX [ 8UL ] = 0.0 ; out -> mIC . mX [ 9UL ] = 0.0 ; out -> mIC . mX [
10UL ] = 0.0 ; out -> mIC . mX [ 11UL ] = 0.0 ; out -> mIC . mX [ 12UL ] =
0.0 ; out -> mIC . mX [ 13UL ] = 0.31415926535897931 ; out -> mIC . mX [ 14UL
] = 94.247779607693786 ; out -> mIC . mX [ 15UL ] = 0.0 ; out -> mIC . mX [
16UL ] = 0.0 ; out -> mIC . mX [ 17UL ] = 0.0 ; out -> mIC . mX [ 18UL ] =
0.0 ; out -> mIC . mX [ 19UL ] = 0.0 ; out -> mIC . mX [ 20UL ] = 0.0 ; out
-> mIC . mX [ 21UL ] = 0.0 ; out -> mIC . mX [ 22UL ] = 0.0 ; out -> mIC . mX
[ 23UL ] = 0.0 ; out -> mIC . mX [ 24UL ] = 0.0 ; out -> mIC . mX [ 25UL ] =
0.0 ; out -> mIC . mX [ 26UL ] = 0.0 ; out -> mIC . mX [ 27UL ] = 0.0 ; out
-> mIC . mX [ 28UL ] = 0.0 ; out -> mIC . mX [ 29UL ] = 0.0 ; out -> mIC . mX
[ 30UL ] = 0.0 ; out -> mIC . mX [ 31UL ] = 0.0 ; out -> mIC . mX [ 32UL ] =
0.0 ; out -> mIC . mX [ 33UL ] = 0.0 ; out -> mIC . mX [ 34UL ] = 0.0 ; out
-> mIC . mX [ 35UL ] = 0.0 ; out -> mIC . mX [ 36UL ] = 0.0 ; out -> mIC . mX
[ 37UL ] = 0.0 ; out -> mIC . mX [ 38UL ] = 0.0 ; out -> mIC . mX [ 39UL ] =
0.0 ; out -> mIC . mX [ 40UL ] = 0.0 ; out -> mIC . mX [ 41UL ] = 0.0 ; out
-> mIC . mX [ 42UL ] = 0.0 ; out -> mIC . mX [ 43UL ] = 0.0 ; out -> mIC . mX
[ 44UL ] = 0.0 ; out -> mIC . mX [ 45UL ] = 0.0 ; out -> mIC . mX [ 46UL ] =
0.0 ; for ( t8 = 0UL ; t8 < 11UL ; t8 ++ ) { out -> mIC . mX [ t8 + 47UL ] =
t0 [ t8 ] ; } out -> mIC . mX [ 58UL ] = 0.0 ; out -> mIC . mX [ 59UL ] = 0.0
; out -> mIC . mX [ 60UL ] = 0.0 ; out -> mIC . mX [ 61UL ] = 0.0 ; out ->
mIC . mX [ 62UL ] = 0.0 ; out -> mIC . mX [ 63UL ] = 0.001 ; out -> mIC . mX
[ 64UL ] = 0.001 ; out -> mIC . mX [ 65UL ] = 0.001 ; out -> mIC . mX [ 66UL
] = 0.0 ; out -> mIC . mX [ 67UL ] = 0.0 ; out -> mIC . mX [ 68UL ] = 0.0 ;
for ( t8 = 0UL ; t8 < 11UL ; t8 ++ ) { out -> mIC . mX [ t8 + 69UL ] = t0 [
t8 ] ; } out -> mIC . mX [ 80UL ] = 0.0 ; out -> mIC . mX [ 81UL ] = 0.0 ;
out -> mIC . mX [ 82UL ] = 0.0 ; out -> mIC . mX [ 83UL ] = 0.0 ; out -> mIC
. mX [ 84UL ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
