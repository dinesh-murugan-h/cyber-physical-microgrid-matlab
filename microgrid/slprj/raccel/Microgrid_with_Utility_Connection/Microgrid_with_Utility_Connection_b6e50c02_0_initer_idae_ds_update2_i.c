#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_update2_i.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_update2_i
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t16 ,
NeDsMethodOutput * out ) { real_T
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i ; real_T
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i ; real_T
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i ; size_t t0 ;
size_t t1 ; size_t t10 ; size_t t11 ; size_t t12 ; size_t t13 ; size_t t14 ;
size_t t2 ; size_t t3 ; size_t t4 ; size_t t5 ; size_t t6 ; size_t t7 ;
size_t t8 ; size_t t9 ;
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i = ( ( ( - t16 ->
mX . mX [ 37UL ] - t16 -> mX . mX [ 43UL ] ) - t16 -> mX . mX [ 28UL ] ) +
t16 -> mX . mX [ 2UL ] ) + t16 -> mX . mX [ 5UL ] ;
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i = ( ( ( - t16 ->
mX . mX [ 35UL ] - t16 -> mX . mX [ 41UL ] ) - t16 -> mX . mX [ 26UL ] ) +
t16 -> mX . mX [ 0UL ] ) + t16 -> mX . mX [ 3UL ] ;
d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i = ( ( ( - t16 ->
mX . mX [ 36UL ] - t16 -> mX . mX [ 42UL ] ) - t16 -> mX . mX [ 27UL ] ) +
t16 -> mX . mX [ 1UL ] ) + t16 -> mX . mX [ 4UL ] ; if ( ( t16 -> mCI . mX [
15UL ] == 0 ) && ( t16 -> mU . mX [ 9UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ .
mX [ 0UL ] == 1UL ) ) { t0 = 2UL ; } else if ( ( t16 -> mCI . mX [ 14UL ] ==
0 ) && ( t16 -> mU . mX [ 9UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 0UL
] == 2UL ) ) { t0 = 3UL ; } else if ( ( t16 -> mCI . mX [ 11UL ] == 0 ) && ( t16
-> mX . mX [ 35UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 0UL ] == 3UL ) )
{ t0 = 4UL ; } else if ( ( t16 -> mCI . mX [ 10UL ] == 0 ) && ( t16 -> mX .
mX [ 35UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 0UL ] == 3UL ) ) { t0 =
5UL ; } else if ( ( t16 -> mCI . mX [ 9UL ] == 0 ) && ( t16 -> mX . mX [ 35UL
] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 0UL ] == 4UL ) ) { t0 = 1UL ; }
else if ( ( t16 -> mCI . mX [ 8UL ] == 0 ) && ( t16 -> mX . mX [ 35UL ] < 0.0
) && ( ( size_t ) t16 -> mQ . mX [ 0UL ] == 5UL ) ) { t0 = 1UL ; } else { t0
= ( size_t ) t16 -> mQ . mX [ 0UL ] ; } if ( ( t16 -> mCI . mX [ 22UL ] == 0
) && ( t16 -> mU . mX [ 9UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 1UL ]
== 1UL ) ) { t1 = 2UL ; } else if ( ( t16 -> mCI . mX [ 21UL ] == 0 ) && ( t16
-> mU . mX [ 9UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 1UL ] == 2UL ) )
{ t1 = 3UL ; } else if ( ( t16 -> mCI . mX [ 19UL ] == 0 ) && ( t16 -> mX .
mX [ 36UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 1UL ] == 3UL ) ) { t1 =
4UL ; } else if ( ( t16 -> mCI . mX [ 18UL ] == 0 ) && ( t16 -> mX . mX [
36UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 1UL ] == 3UL ) ) { t1 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 17UL ] == 0 ) && ( t16 -> mX . mX [ 36UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 1UL ] == 4UL ) ) { t1 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 16UL ] == 0 ) && ( t16 -> mX . mX [ 36UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 1UL ] == 5UL ) ) { t1 = 1UL ; } else { t1 =
( size_t ) t16 -> mQ . mX [ 1UL ] ; } if ( ( t16 -> mCI . mX [ 30UL ] == 0 )
&& ( t16 -> mU . mX [ 9UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 2UL ] ==
1UL ) ) { t2 = 2UL ; } else if ( ( t16 -> mCI . mX [ 29UL ] == 0 ) && ( t16
-> mU . mX [ 9UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 2UL ] == 2UL ) )
{ t2 = 3UL ; } else if ( ( t16 -> mCI . mX [ 27UL ] == 0 ) && ( t16 -> mX .
mX [ 37UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 2UL ] == 3UL ) ) { t2 =
4UL ; } else if ( ( t16 -> mCI . mX [ 26UL ] == 0 ) && ( t16 -> mX . mX [
37UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 2UL ] == 3UL ) ) { t2 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 25UL ] == 0 ) && ( t16 -> mX . mX [ 37UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 2UL ] == 4UL ) ) { t2 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 23UL ] == 0 ) && ( t16 -> mX . mX [ 37UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 2UL ] == 5UL ) ) { t2 = 1UL ; } else { t2 =
( size_t ) t16 -> mQ . mX [ 2UL ] ; } if ( ( t16 -> mCI . mX [ 38UL ] == 0 )
&& ( t16 -> mU . mX [ 10UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 3UL ]
== 1UL ) ) { t3 = 2UL ; } else if ( ( t16 -> mCI . mX [ 37UL ] == 0 ) && ( t16
-> mU . mX [ 10UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 3UL ] == 2UL ) )
{ t3 = 3UL ; } else if ( ( t16 -> mCI . mX [ 34UL ] == 0 ) && ( t16 -> mX .
mX [ 41UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 3UL ] == 3UL ) ) { t3 =
4UL ; } else if ( ( t16 -> mCI . mX [ 33UL ] == 0 ) && ( t16 -> mX . mX [
41UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 3UL ] == 3UL ) ) { t3 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 32UL ] == 0 ) && ( t16 -> mX . mX [ 41UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 3UL ] == 4UL ) ) { t3 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 31UL ] == 0 ) && ( t16 -> mX . mX [ 41UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 3UL ] == 5UL ) ) { t3 = 1UL ; } else { t3 =
( size_t ) t16 -> mQ . mX [ 3UL ] ; } if ( ( t16 -> mCI . mX [ 45UL ] == 0 )
&& ( t16 -> mU . mX [ 10UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 4UL ]
== 1UL ) ) { t4 = 2UL ; } else if ( ( t16 -> mCI . mX [ 44UL ] == 0 ) && ( t16
-> mU . mX [ 10UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 4UL ] == 2UL ) )
{ t4 = 3UL ; } else if ( ( t16 -> mCI . mX [ 42UL ] == 0 ) && ( t16 -> mX .
mX [ 42UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 4UL ] == 3UL ) ) { t4 =
4UL ; } else if ( ( t16 -> mCI . mX [ 41UL ] == 0 ) && ( t16 -> mX . mX [
42UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 4UL ] == 3UL ) ) { t4 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 40UL ] == 0 ) && ( t16 -> mX . mX [ 42UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 4UL ] == 4UL ) ) { t4 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 39UL ] == 0 ) && ( t16 -> mX . mX [ 42UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 4UL ] == 5UL ) ) { t4 = 1UL ; } else { t4 =
( size_t ) t16 -> mQ . mX [ 4UL ] ; } if ( ( t16 -> mCI . mX [ 53UL ] == 0 )
&& ( t16 -> mU . mX [ 10UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 5UL ]
== 1UL ) ) { t5 = 2UL ; } else if ( ( t16 -> mCI . mX [ 52UL ] == 0 ) && ( t16
-> mU . mX [ 10UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 5UL ] == 2UL ) )
{ t5 = 3UL ; } else if ( ( t16 -> mCI . mX [ 50UL ] == 0 ) && ( t16 -> mX .
mX [ 43UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 5UL ] == 3UL ) ) { t5 =
4UL ; } else if ( ( t16 -> mCI . mX [ 49UL ] == 0 ) && ( t16 -> mX . mX [
43UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 5UL ] == 3UL ) ) { t5 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 48UL ] == 0 ) && ( t16 -> mX . mX [ 43UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 5UL ] == 4UL ) ) { t5 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 47UL ] == 0 ) && ( t16 -> mX . mX [ 43UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 5UL ] == 5UL ) ) { t5 = 1UL ; } else { t5 =
( size_t ) t16 -> mQ . mX [ 5UL ] ; } if ( ( t16 -> mCI . mX [ 61UL ] == 0 )
&& ( t16 -> mU . mX [ 7UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 6UL ] ==
1UL ) ) { t6 = 2UL ; } else if ( ( t16 -> mCI . mX [ 60UL ] == 0 ) && ( t16
-> mU . mX [ 7UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 6UL ] == 2UL ) )
{ t6 = 3UL ; } else if ( ( t16 -> mCI . mX [ 58UL ] == 0 ) && ( t16 -> mX .
mX [ 26UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 6UL ] == 3UL ) ) { t6 =
4UL ; } else if ( ( t16 -> mCI . mX [ 56UL ] == 0 ) && ( t16 -> mX . mX [
26UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 6UL ] == 3UL ) ) { t6 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 55UL ] == 0 ) && ( t16 -> mX . mX [ 26UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 6UL ] == 4UL ) ) { t6 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 54UL ] == 0 ) && ( t16 -> mX . mX [ 26UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 6UL ] == 5UL ) ) { t6 = 1UL ; } else { t6 =
( size_t ) t16 -> mQ . mX [ 6UL ] ; } if ( ( t16 -> mCI . mX [ 69UL ] == 0 )
&& ( t16 -> mU . mX [ 7UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 7UL ] ==
1UL ) ) { t7 = 2UL ; } else if ( ( t16 -> mCI . mX [ 67UL ] == 0 ) && ( t16
-> mU . mX [ 7UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 7UL ] == 2UL ) )
{ t7 = 3UL ; } else if ( ( t16 -> mCI . mX [ 65UL ] == 0 ) && ( t16 -> mX .
mX [ 27UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 7UL ] == 3UL ) ) { t7 =
4UL ; } else if ( ( t16 -> mCI . mX [ 64UL ] == 0 ) && ( t16 -> mX . mX [
27UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 7UL ] == 3UL ) ) { t7 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 63UL ] == 0 ) && ( t16 -> mX . mX [ 27UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 7UL ] == 4UL ) ) { t7 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 62UL ] == 0 ) && ( t16 -> mX . mX [ 27UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 7UL ] == 5UL ) ) { t7 = 1UL ; } else { t7 =
( size_t ) t16 -> mQ . mX [ 7UL ] ; } if ( ( t16 -> mCI . mX [ 76UL ] == 0 )
&& ( t16 -> mU . mX [ 7UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 8UL ] ==
1UL ) ) { t8 = 2UL ; } else if ( ( t16 -> mCI . mX [ 75UL ] == 0 ) && ( t16
-> mU . mX [ 7UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 8UL ] == 2UL ) )
{ t8 = 3UL ; } else if ( ( t16 -> mCI . mX [ 73UL ] == 0 ) && ( t16 -> mX .
mX [ 28UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 8UL ] == 3UL ) ) { t8 =
4UL ; } else if ( ( t16 -> mCI . mX [ 72UL ] == 0 ) && ( t16 -> mX . mX [
28UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 8UL ] == 3UL ) ) { t8 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 71UL ] == 0 ) && ( t16 -> mX . mX [ 28UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 8UL ] == 4UL ) ) { t8 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 70UL ] == 0 ) && ( t16 -> mX . mX [ 28UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 8UL ] == 5UL ) ) { t8 = 1UL ; } else { t8 =
( size_t ) t16 -> mQ . mX [ 8UL ] ; } if ( ( t16 -> mCI . mX [ 84UL ] == 0 )
&& ( t16 -> mU . mX [ 8UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 9UL ] ==
1UL ) ) { t9 = 2UL ; } else if ( ( t16 -> mCI . mX [ 83UL ] == 0 ) && ( t16
-> mU . mX [ 8UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 9UL ] == 2UL ) )
{ t9 = 3UL ; } else if ( ( t16 -> mCI . mX [ 81UL ] == 0 ) && ( - t16 -> mX .
mX [ 3UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 9UL ] == 3UL ) ) { t9 =
4UL ; } else if ( ( t16 -> mCI . mX [ 80UL ] == 0 ) && ( - t16 -> mX . mX [
3UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 9UL ] == 3UL ) ) { t9 = 5UL ;
} else if ( ( t16 -> mCI . mX [ 78UL ] == 0 ) && ( - t16 -> mX . mX [ 3UL ] >
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 9UL ] == 4UL ) ) { t9 = 1UL ; } else
if ( ( t16 -> mCI . mX [ 77UL ] == 0 ) && ( - t16 -> mX . mX [ 3UL ] < 0.0 )
&& ( ( size_t ) t16 -> mQ . mX [ 9UL ] == 5UL ) ) { t9 = 1UL ; } else { t9 =
( size_t ) t16 -> mQ . mX [ 9UL ] ; } if ( ( t16 -> mCI . mX [ 92UL ] == 0 )
&& ( t16 -> mU . mX [ 8UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ]
== 1UL ) ) { t10 = 2UL ; } else if ( ( t16 -> mCI . mX [ 91UL ] == 0 ) && ( t16
-> mU . mX [ 8UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ] == 2UL ) )
{ t10 = 3UL ; } else if ( ( t16 -> mCI . mX [ 88UL ] == 0 ) && ( - t16 -> mX
. mX [ 4UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ] == 3UL ) ) { t10
= 4UL ; } else if ( ( t16 -> mCI . mX [ 87UL ] == 0 ) && ( - t16 -> mX . mX [
4UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ] == 3UL ) ) { t10 = 5UL
; } else if ( ( t16 -> mCI . mX [ 86UL ] == 0 ) && ( - t16 -> mX . mX [ 4UL ]
> 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ] == 4UL ) ) { t10 = 1UL ; }
else if ( ( t16 -> mCI . mX [ 85UL ] == 0 ) && ( - t16 -> mX . mX [ 4UL ] <
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 10UL ] == 5UL ) ) { t10 = 1UL ; } else
{ t10 = ( size_t ) t16 -> mQ . mX [ 10UL ] ; } if ( ( t16 -> mCI . mX [ 99UL
] == 0 ) && ( t16 -> mU . mX [ 8UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [
11UL ] == 1UL ) ) { t11 = 2UL ; } else if ( ( t16 -> mCI . mX [ 98UL ] == 0 )
&& ( t16 -> mU . mX [ 8UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 11UL ]
== 2UL ) ) { t11 = 3UL ; } else if ( ( t16 -> mCI . mX [ 96UL ] == 0 ) && ( -
t16 -> mX . mX [ 5UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 11UL ] == 3UL
) ) { t11 = 4UL ; } else if ( ( t16 -> mCI . mX [ 95UL ] == 0 ) && ( - t16 ->
mX . mX [ 5UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 11UL ] == 3UL ) ) {
t11 = 5UL ; } else if ( ( t16 -> mCI . mX [ 94UL ] == 0 ) && ( - t16 -> mX .
mX [ 5UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 11UL ] == 4UL ) ) { t11 =
1UL ; } else if ( ( t16 -> mCI . mX [ 93UL ] == 0 ) && ( - t16 -> mX . mX [
5UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 11UL ] == 5UL ) ) { t11 = 1UL
; } else { t11 = ( size_t ) t16 -> mQ . mX [ 11UL ] ; } if ( ( t16 -> mCI .
mX [ 123UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] < 0.0 ) && ( ( size_t ) t16
-> mQ . mX [ 12UL ] == 1UL ) ) { t12 = 2UL ; } else if ( ( t16 -> mCI . mX [
122UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ
. mX [ 12UL ] == 2UL ) ) { t12 = 3UL ; } else if ( ( t16 -> mCI . mX [ 120UL
] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i <
0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 12UL ] == 3UL ) ) { t12 = 4UL ; } else
if ( ( t16 -> mCI . mX [ 119UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 12UL ] == 3UL ) ) { t12 = 5UL ; } else if ( ( t16 -> mCI . mX [ 118UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 12UL ] == 4UL ) ) { t12 = 1UL ; } else if ( ( t16 -> mCI . mX [ 117UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerC_i < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 12UL ] == 5UL ) ) { t12 = 1UL ; } else { t12 = ( size_t ) t16 -> mQ . mX [ 12UL ] ; } if ( ( t16 -> mCI . mX [ 107UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 1UL ) ) { t13 = 2UL ; } else if ( ( t16 -> mCI . mX [ 106UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 2UL ) ) { t13 = 3UL ; } else if ( ( t16 -> mCI . mX [ 104UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 3UL ) ) { t13 = 4UL ; } else if ( ( t16 -> mCI . mX [ 103UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 3UL ) ) { t13 = 5UL ; } else if ( ( t16 -> mCI . mX [ 102UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 4UL ) ) { t13 = 1UL ; } else if ( ( t16 -> mCI . mX [ 100UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerA_i < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 13UL ] == 5UL ) ) { t13 = 1UL ; } else { t13 = ( size_t ) t16 -> mQ . mX [ 13UL ] ; } if ( ( t16 -> mCI . mX [ 116UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 1UL ) ) { t14 = 2UL ; } else if ( ( t16 -> mCI . mX [ 115UL ] == 0 ) && ( t16 -> mU . mX [ 11UL ] > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 2UL ) ) { t14 = 3UL ; } else if ( ( t16 -> mCI . mX [ 111UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 3UL ) ) { t14 = 4UL ; } else if ( ( t16 -> mCI . mX [ 110UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 3UL ) ) { t14 = 5UL ; } else if ( ( t16 -> mCI . mX [ 109UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i > 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 4UL ) ) { t14 = 1UL ; } else if ( ( t16 -> mCI . mX [ 108UL ] == 0 ) && ( d_Circuit_Breaker_at_Point_of_Common_Coupling_PCC_breakerB_i < 0.0 ) && ( ( size_t ) t16 -> mQ . mX [ 14UL ] == 5UL ) ) { t14 = 1UL ; } else { t14 = ( size_t ) t16 -> mQ . mX [ 14UL ] ; } out -> mUPDATE2_I . mX [ 0UL ] = ( int32_T ) t0 ; out -> mUPDATE2_I . mX [ 1UL ] = ( int32_T ) t1 ; out -> mUPDATE2_I . mX [ 2UL ] = ( int32_T ) t2 ; out -> mUPDATE2_I . mX [ 3UL ] = ( int32_T ) t3 ; out -> mUPDATE2_I . mX [ 4UL ] = ( int32_T ) t4 ; out -> mUPDATE2_I . mX [ 5UL ] = ( int32_T ) t5 ; out -> mUPDATE2_I . mX [ 6UL ] = ( int32_T ) t6 ; out -> mUPDATE2_I . mX [ 7UL ] = ( int32_T ) t7 ; out -> mUPDATE2_I . mX [ 8UL ] = ( int32_T ) t8 ; out -> mUPDATE2_I . mX [ 9UL ] = ( int32_T ) t9 ; out -> mUPDATE2_I . mX [ 10UL ] = ( int32_T ) t10 ; out -> mUPDATE2_I . mX [ 11UL ] = ( int32_T ) t11 ; out -> mUPDATE2_I . mX [ 12UL ] = ( int32_T ) t12 ; out -> mUPDATE2_I . mX [ 13UL ] = ( int32_T ) t13 ; out -> mUPDATE2_I . mX [ 14UL ] = ( int32_T ) t14 ; out -> mUPDATE2_I . mX [ 15UL ] = ( int32_T ) ( t16 -> mQ . mX [ 15UL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
