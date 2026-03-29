#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_y.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_y ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t84 , NeDsMethodOutput *
out ) { real_T intrm_sf_mf_107 ; real_T t55 ; real_T t63 ; real_T t64 ;
real_T t65 ; real_T t75 ; real_T t78 ; out -> mY . mX [ 3UL ] = - t84 -> mX .
mX [ 21UL ] + t84 -> mX . mX [ 20UL ] ; out -> mY . mX [ 4UL ] = - t84 -> mX
. mX [ 22UL ] + t84 -> mX . mX [ 21UL ] ; out -> mY . mX [ 5UL ] = - t84 ->
mX . mX [ 20UL ] + t84 -> mX . mX [ 22UL ] ; out -> mY . mX [ 8UL ] = ( t84
-> mX . mX [ 51UL ] * t84 -> mX . mX [ 54UL ] + t84 -> mX . mX [ 52UL ] * t84
-> mX . mX [ 55UL ] ) + t84 -> mX . mX [ 53UL ] * t84 -> mX . mX [ 56UL ] *
2.0 ; out -> mY . mX [ 9UL ] = t84 -> mX . mX [ 52UL ] * t84 -> mX . mX [
54UL ] - t84 -> mX . mX [ 51UL ] * t84 -> mX . mX [ 55UL ] ; out -> mY . mX [
10UL ] = t84 -> mX . mX [ 50UL ] ; t75 = - pmf_sqrt ( t84 -> mX . mX [ 51UL ]
* t84 -> mX . mX [ 51UL ] + t84 -> mX . mX [ 52UL ] * t84 -> mX . mX [ 52UL ]
) ; out -> mY . mX [ 11UL ] = - t75 ; t75 = - t84 -> mX . mX [ 26UL ] + t84
-> mX . mX [ 3UL ] ; t55 = - t84 -> mX . mX [ 27UL ] + t84 -> mX . mX [ 4UL ]
; intrm_sf_mf_107 = - t84 -> mX . mX [ 28UL ] + t84 -> mX . mX [ 5UL ] ; out
-> mY . mX [ 23UL ] = t84 -> mX . mX [ 66UL ] ; out -> mY . mX [ 24UL ] = t84
-> mX . mX [ 67UL ] ; out -> mY . mX [ 25UL ] = t84 -> mX . mX [ 68UL ] ; out
-> mY . mX [ 20UL ] = ( ( ( - t84 -> mX . mX [ 35UL ] - t84 -> mX . mX [ 41UL
] ) - t84 -> mX . mX [ 26UL ] ) + t84 -> mX . mX [ 0UL ] ) + t84 -> mX . mX [
3UL ] ; out -> mY . mX [ 21UL ] = ( ( ( - t84 -> mX . mX [ 36UL ] - t84 -> mX
. mX [ 42UL ] ) - t84 -> mX . mX [ 27UL ] ) + t84 -> mX . mX [ 1UL ] ) + t84
-> mX . mX [ 4UL ] ; out -> mY . mX [ 22UL ] = ( ( ( - t84 -> mX . mX [ 37UL
] - t84 -> mX . mX [ 43UL ] ) - t84 -> mX . mX [ 28UL ] ) + t84 -> mX . mX [
2UL ] ) + t84 -> mX . mX [ 5UL ] ; t63 = ( ( ( - t84 -> mX . mX [ 0UL ] - t84
-> mX . mX [ 3UL ] ) + t84 -> mX . mX [ 35UL ] ) + t84 -> mX . mX [ 41UL ] )
+ t84 -> mX . mX [ 26UL ] ; t64 = ( ( ( - t84 -> mX . mX [ 1UL ] - t84 -> mX
. mX [ 4UL ] ) + t84 -> mX . mX [ 36UL ] ) + t84 -> mX . mX [ 42UL ] ) + t84
-> mX . mX [ 27UL ] ; t65 = ( ( ( - t84 -> mX . mX [ 2UL ] - t84 -> mX . mX [
5UL ] ) + t84 -> mX . mX [ 37UL ] ) + t84 -> mX . mX [ 43UL ] ) + t84 -> mX .
mX [ 28UL ] ; out -> mY . mX [ 28UL ] = ( t84 -> mX . mX [ 73UL ] * t84 -> mX
. mX [ 76UL ] + t84 -> mX . mX [ 74UL ] * t84 -> mX . mX [ 77UL ] ) + t84 ->
mX . mX [ 75UL ] * t84 -> mX . mX [ 78UL ] * 2.0 ; out -> mY . mX [ 29UL ] =
t84 -> mX . mX [ 74UL ] * t84 -> mX . mX [ 76UL ] - t84 -> mX . mX [ 73UL ] *
t84 -> mX . mX [ 77UL ] ; out -> mY . mX [ 30UL ] = t84 -> mX . mX [ 72UL ] ;
t78 = - pmf_sqrt ( t84 -> mX . mX [ 73UL ] * t84 -> mX . mX [ 73UL ] + t84 ->
mX . mX [ 74UL ] * t84 -> mX . mX [ 74UL ] ) ; out -> mY . mX [ 31UL ] = -
t78 ; out -> mY . mX [ 0UL ] = t84 -> mX . mX [ 0UL ] ; out -> mY . mX [ 1UL
] = t84 -> mX . mX [ 1UL ] ; out -> mY . mX [ 2UL ] = t84 -> mX . mX [ 2UL ]
; out -> mY . mX [ 6UL ] = ( ( - ( t84 -> mX . mX [ 0UL ] * t84 -> mX . mX [
20UL ] ) - t84 -> mX . mX [ 1UL ] * t84 -> mX . mX [ 21UL ] ) - t84 -> mX .
mX [ 2UL ] * t84 -> mX . mX [ 22UL ] ) * 0.001 * 1000.0 ; out -> mY . mX [
7UL ] = ( ( ( - ( t84 -> mX . mX [ 0UL ] * t84 -> mX . mX [ 21UL ] ) - t84 ->
mX . mX [ 1UL ] * t84 -> mX . mX [ 22UL ] ) - t84 -> mX . mX [ 2UL ] * t84 ->
mX . mX [ 20UL ] ) - ( ( - ( t84 -> mX . mX [ 0UL ] * t84 -> mX . mX [ 22UL ]
) - t84 -> mX . mX [ 1UL ] * t84 -> mX . mX [ 20UL ] ) - t84 -> mX . mX [ 2UL
] * t84 -> mX . mX [ 21UL ] ) ) / 1.7320508075688772 * 0.001 * 1000.0 ; out
-> mY . mX [ 12UL ] = ( ( t84 -> mX . mX [ 20UL ] * t75 + t84 -> mX . mX [
21UL ] * t55 ) + t84 -> mX . mX [ 22UL ] * intrm_sf_mf_107 ) * 0.001 * 1000.0
; out -> mY . mX [ 13UL ] = ( ( ( t84 -> mX . mX [ 21UL ] * t75 + t84 -> mX .
mX [ 22UL ] * t55 ) + t84 -> mX . mX [ 20UL ] * intrm_sf_mf_107 ) - ( ( t84
-> mX . mX [ 22UL ] * t75 + t84 -> mX . mX [ 20UL ] * t55 ) + t84 -> mX . mX
[ 21UL ] * intrm_sf_mf_107 ) ) / 1.7320508075688772 * 0.001 * 1000.0 ; out ->
mY . mX [ 14UL ] = - t63 ; out -> mY . mX [ 15UL ] = - t64 ; out -> mY . mX [
16UL ] = - t65 ; out -> mY . mX [ 17UL ] = t84 -> mX . mX [ 20UL ] ; out ->
mY . mX [ 18UL ] = t84 -> mX . mX [ 21UL ] ; out -> mY . mX [ 19UL ] = t84 ->
mX . mX [ 22UL ] ; out -> mY . mX [ 26UL ] = ( ( - ( t84 -> mX . mX [ 20UL ]
* t63 ) - t84 -> mX . mX [ 21UL ] * t64 ) - t84 -> mX . mX [ 22UL ] * t65 ) *
0.001 * 1000.0 ; out -> mY . mX [ 27UL ] = ( ( ( - ( t84 -> mX . mX [ 21UL ]
* t63 ) - t84 -> mX . mX [ 22UL ] * t64 ) - t84 -> mX . mX [ 20UL ] * t65 ) -
( ( - ( t84 -> mX . mX [ 22UL ] * t63 ) - t84 -> mX . mX [ 20UL ] * t64 ) -
t84 -> mX . mX [ 21UL ] * t65 ) ) / 1.7320508075688772 * 0.001 * 1000.0 ; ( void
) sys ; ( void ) out ; return 0 ; }
