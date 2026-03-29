#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmty.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_gmt_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_gmty ( const
GlobalMethodTable * sys , const NeDynamicSystemInput * t84 , GmtMethodOutput
* out ) { real_T intrm_sf_mf_107 ; real_T t55 ; real_T t63 ; real_T t64 ;
real_T t65 ; real_T t75 ; real_T t78 ; out -> mY . mX [ 3UL ] = - t84 -> mX .
mX [ 4UL ] + t84 -> mX . mX [ 3UL ] ; out -> mY . mX [ 4UL ] = - t84 -> mX .
mX [ 5UL ] + t84 -> mX . mX [ 4UL ] ; out -> mY . mX [ 5UL ] = - t84 -> mX .
mX [ 3UL ] + t84 -> mX . mX [ 5UL ] ; out -> mY . mX [ 8UL ] = ( t84 -> mX .
mX [ 37UL ] * t84 -> mX . mX [ 40UL ] + t84 -> mX . mX [ 38UL ] * t84 -> mX .
mX [ 41UL ] ) + t84 -> mX . mX [ 39UL ] * t84 -> mX . mX [ 42UL ] * 2.0 ; out
-> mY . mX [ 9UL ] = t84 -> mX . mX [ 38UL ] * t84 -> mX . mX [ 40UL ] - t84
-> mX . mX [ 37UL ] * t84 -> mX . mX [ 41UL ] ; out -> mY . mX [ 10UL ] = t84
-> mX . mX [ 36UL ] ; t75 = - pmf_sqrt ( t84 -> mX . mX [ 37UL ] * t84 -> mX
. mX [ 37UL ] + t84 -> mX . mX [ 38UL ] * t84 -> mX . mX [ 38UL ] ) ; out ->
mY . mX [ 11UL ] = - t75 ; t75 = - t84 -> mX . mX [ 9UL ] + t84 -> mX . mX [
30UL ] ; t55 = - t84 -> mX . mX [ 10UL ] + t84 -> mX . mX [ 31UL ] ;
intrm_sf_mf_107 = - t84 -> mX . mX [ 11UL ] + t84 -> mX . mX [ 32UL ] ; out
-> mY . mX [ 23UL ] = t84 -> mX . mX [ 59UL ] ; out -> mY . mX [ 24UL ] = t84
-> mX . mX [ 60UL ] ; out -> mY . mX [ 25UL ] = t84 -> mX . mX [ 61UL ] ; out
-> mY . mX [ 20UL ] = ( ( ( - t84 -> mX . mX [ 18UL ] - t84 -> mX . mX [ 24UL
] ) - t84 -> mX . mX [ 9UL ] ) + t84 -> mX . mX [ 0UL ] ) + t84 -> mX . mX [
30UL ] ; out -> mY . mX [ 21UL ] = ( ( ( - t84 -> mX . mX [ 19UL ] - t84 ->
mX . mX [ 25UL ] ) - t84 -> mX . mX [ 10UL ] ) + t84 -> mX . mX [ 1UL ] ) +
t84 -> mX . mX [ 31UL ] ; out -> mY . mX [ 22UL ] = ( ( ( - t84 -> mX . mX [
20UL ] - t84 -> mX . mX [ 26UL ] ) - t84 -> mX . mX [ 11UL ] ) + t84 -> mX .
mX [ 2UL ] ) + t84 -> mX . mX [ 32UL ] ; t63 = ( ( ( - t84 -> mX . mX [ 0UL ]
- t84 -> mX . mX [ 30UL ] ) + t84 -> mX . mX [ 18UL ] ) + t84 -> mX . mX [
24UL ] ) + t84 -> mX . mX [ 9UL ] ; t64 = ( ( ( - t84 -> mX . mX [ 1UL ] -
t84 -> mX . mX [ 31UL ] ) + t84 -> mX . mX [ 19UL ] ) + t84 -> mX . mX [ 25UL
] ) + t84 -> mX . mX [ 10UL ] ; t65 = ( ( ( - t84 -> mX . mX [ 2UL ] - t84 ->
mX . mX [ 32UL ] ) + t84 -> mX . mX [ 20UL ] ) + t84 -> mX . mX [ 26UL ] ) +
t84 -> mX . mX [ 11UL ] ; out -> mY . mX [ 28UL ] = ( t84 -> mX . mX [ 67UL ]
* t84 -> mX . mX [ 70UL ] + t84 -> mX . mX [ 68UL ] * t84 -> mX . mX [ 71UL ]
) + t84 -> mX . mX [ 69UL ] * t84 -> mX . mX [ 72UL ] * 2.0 ; out -> mY . mX
[ 29UL ] = t84 -> mX . mX [ 68UL ] * t84 -> mX . mX [ 70UL ] - t84 -> mX . mX
[ 67UL ] * t84 -> mX . mX [ 71UL ] ; out -> mY . mX [ 30UL ] = t84 -> mX . mX
[ 66UL ] ; t78 = - pmf_sqrt ( t84 -> mX . mX [ 67UL ] * t84 -> mX . mX [ 67UL
] + t84 -> mX . mX [ 68UL ] * t84 -> mX . mX [ 68UL ] ) ; out -> mY . mX [
31UL ] = - t78 ; out -> mY . mX [ 0UL ] = t84 -> mX . mX [ 0UL ] ; out -> mY
. mX [ 1UL ] = t84 -> mX . mX [ 1UL ] ; out -> mY . mX [ 2UL ] = t84 -> mX .
mX [ 2UL ] ; out -> mY . mX [ 6UL ] = ( ( - ( t84 -> mX . mX [ 0UL ] * t84 ->
mX . mX [ 3UL ] ) - t84 -> mX . mX [ 1UL ] * t84 -> mX . mX [ 4UL ] ) - t84
-> mX . mX [ 2UL ] * t84 -> mX . mX [ 5UL ] ) * 0.001 * 1000.0 ; out -> mY .
mX [ 7UL ] = ( ( ( - ( t84 -> mX . mX [ 0UL ] * t84 -> mX . mX [ 4UL ] ) -
t84 -> mX . mX [ 1UL ] * t84 -> mX . mX [ 5UL ] ) - t84 -> mX . mX [ 2UL ] *
t84 -> mX . mX [ 3UL ] ) - ( ( - ( t84 -> mX . mX [ 0UL ] * t84 -> mX . mX [
5UL ] ) - t84 -> mX . mX [ 1UL ] * t84 -> mX . mX [ 3UL ] ) - t84 -> mX . mX
[ 2UL ] * t84 -> mX . mX [ 4UL ] ) ) / 1.7320508075688772 * 0.001 * 1000.0 ;
out -> mY . mX [ 12UL ] = ( ( t84 -> mX . mX [ 3UL ] * t75 + t84 -> mX . mX [
4UL ] * t55 ) + t84 -> mX . mX [ 5UL ] * intrm_sf_mf_107 ) * 0.001 * 1000.0 ;
out -> mY . mX [ 13UL ] = ( ( ( t84 -> mX . mX [ 4UL ] * t75 + t84 -> mX . mX
[ 5UL ] * t55 ) + t84 -> mX . mX [ 3UL ] * intrm_sf_mf_107 ) - ( ( t84 -> mX
. mX [ 5UL ] * t75 + t84 -> mX . mX [ 3UL ] * t55 ) + t84 -> mX . mX [ 4UL ]
* intrm_sf_mf_107 ) ) / 1.7320508075688772 * 0.001 * 1000.0 ; out -> mY . mX
[ 14UL ] = - t63 ; out -> mY . mX [ 15UL ] = - t64 ; out -> mY . mX [ 16UL ]
= - t65 ; out -> mY . mX [ 17UL ] = t84 -> mX . mX [ 3UL ] ; out -> mY . mX [
18UL ] = t84 -> mX . mX [ 4UL ] ; out -> mY . mX [ 19UL ] = t84 -> mX . mX [
5UL ] ; out -> mY . mX [ 26UL ] = ( ( - ( t84 -> mX . mX [ 3UL ] * t63 ) -
t84 -> mX . mX [ 4UL ] * t64 ) - t84 -> mX . mX [ 5UL ] * t65 ) * 0.001 *
1000.0 ; out -> mY . mX [ 27UL ] = ( ( ( - ( t84 -> mX . mX [ 4UL ] * t63 ) -
t84 -> mX . mX [ 5UL ] * t64 ) - t84 -> mX . mX [ 3UL ] * t65 ) - ( ( - ( t84
-> mX . mX [ 5UL ] * t63 ) - t84 -> mX . mX [ 3UL ] * t64 ) - t84 -> mX . mX
[ 4UL ] * t65 ) ) / 1.7320508075688772 * 0.001 * 1000.0 ; ( void ) sys ; ( void
) out ; return 0 ; }
