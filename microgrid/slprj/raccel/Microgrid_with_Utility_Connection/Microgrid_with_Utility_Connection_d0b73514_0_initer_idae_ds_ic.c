#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_ic.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds_ic ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t2 , NeDsMethodOutput *
out ) { size_t t1 ; ( void ) LC ; out -> mIC . mX [ 0UL ] = 0.0 ; out -> mIC
. mX [ 1UL ] = 0.0 ; for ( t1 = 2UL ; t1 - 2UL < 5UL ; t1 ++ ) { out -> mIC .
mX [ t1 ] = 0.0 ; } out -> mIC . mX [ 7UL ] = 0.0 ; out -> mIC . mX [ 8UL ] =
0.0 ; out -> mIC . mX [ 9UL ] = 0.0 ; out -> mIC . mX [ 10UL ] = 0.0 ; out ->
mIC . mX [ 11UL ] = 0.0 ; out -> mIC . mX [ 12UL ] = 1.0 ; out -> mIC . mX [
13UL ] = 1.0 ; out -> mIC . mX [ 14UL ] = 0.0 ; out -> mIC . mX [ 15UL ] = t2
-> mP_R . mX [ 0UL ] ; out -> mIC . mX [ 16UL ] = 0.0 ; out -> mIC . mX [
17UL ] = 0.0 ; out -> mIC . mX [ 18UL ] = 0.0 ; out -> mIC . mX [ 19UL ] =
0.0 ; out -> mIC . mX [ 20UL ] = 0.0 ; out -> mIC . mX [ 21UL ] = 0.0 ; out
-> mIC . mX [ 22UL ] = 0.0 ; out -> mIC . mX [ 23UL ] = 0.0 ; out -> mIC . mX
[ 24UL ] = 298.15 ; out -> mIC . mX [ 25UL ] = 0.0 ; out -> mIC . mX [ 26UL ]
= 0.0 ; out -> mIC . mX [ 27UL ] = 0.0 ; out -> mIC . mX [ 28UL ] = 0.0 ; out
-> mIC . mX [ 29UL ] = 298.15 ; out -> mIC . mX [ 30UL ] = 298.15 ; out ->
mIC . mX [ 31UL ] = 298.15 ; out -> mIC . mX [ 32UL ] = 298.15 ; ( void ) LC
; ( void ) out ; return 0 ; }
