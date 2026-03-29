#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt_sys_struct.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmtmode.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt_externals.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_gmt_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_d0b73514_0_gmtmode ( const
GlobalMethodTable * sys , const NeDynamicSystemInput * t2 , GmtMethodOutput *
out ) { real_T intrm_sf_mf_11 ; real_T intrm_sf_mf_12 ; real_T intrm_sf_mf_13
; real_T intrm_sf_mf_14 ; if ( t2 -> mU . mX [ 2UL ] >= 0.99 ) {
intrm_sf_mf_11 = 0.99 ; } else { intrm_sf_mf_11 = t2 -> mU . mX [ 2UL ] <=
0.0 ? 0.0 : t2 -> mU . mX [ 2UL ] ; } if ( t2 -> mU . mX [ 4UL ] >= 0.99 ) {
intrm_sf_mf_12 = 0.99 ; } else { intrm_sf_mf_12 = t2 -> mU . mX [ 4UL ] <=
0.0 ? 0.0 : t2 -> mU . mX [ 4UL ] ; } if ( t2 -> mU . mX [ 5UL ] >= 0.99 ) {
intrm_sf_mf_13 = 0.99 ; } else { intrm_sf_mf_13 = t2 -> mU . mX [ 5UL ] <=
0.0 ? 0.0 : t2 -> mU . mX [ 5UL ] ; } if ( t2 -> mU . mX [ 6UL ] >= 0.99 ) {
intrm_sf_mf_14 = 0.99 ; } else { intrm_sf_mf_14 = t2 -> mU . mX [ 6UL ] <=
0.0 ? 0.0 : t2 -> mU . mX [ 6UL ] ; } out -> mMODE . mX [ 0UL ] = ( int32_T )
( t2 -> mX . mX [ 7UL ] * 1.0000000000000001E-7 + 1.0000000000001 > 0.0 ) ;
out -> mMODE . mX [ 1UL ] = ( int32_T ) ( t2 -> mU . mX [ 4UL ] <= 0.0 ) ;
out -> mMODE . mX [ 2UL ] = 1 ; out -> mMODE . mX [ 3UL ] = ( int32_T ) ( 1.0
- intrm_sf_mf_11 != 0.0 ) ; out -> mMODE . mX [ 4UL ] = ( int32_T ) ( 1.0 -
intrm_sf_mf_12 != 0.0 ) ; out -> mMODE . mX [ 5UL ] = ( int32_T ) ( t2 -> mU
. mX [ 2UL ] <= 0.0 ) ; out -> mMODE . mX [ 6UL ] = ( int32_T ) ( 1.0 -
intrm_sf_mf_14 != 0.0 ) ; out -> mMODE . mX [ 7UL ] = ( int32_T ) ( ( t2 ->
mU . mX [ 3UL ] >= 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 2UL ) ) ;
out -> mMODE . mX [ 8UL ] = ( int32_T ) ( t2 -> mU . mX [ 4UL ] >= 0.99 ) ;
out -> mMODE . mX [ 9UL ] = 1 ; out -> mMODE . mX [ 10UL ] = 1 ; out -> mMODE
. mX [ 11UL ] = ( int32_T ) ( t2 -> mU . mX [ 2UL ] >= 0.99 ) ; out -> mMODE
. mX [ 12UL ] = 1 ; out -> mMODE . mX [ 13UL ] = 1 ; out -> mMODE . mX [ 14UL
] = ( int32_T ) ( ( ( t2 -> mX . mX [ 7UL ] + 1.0E-6 ) / 100.0 == ( t2 -> mX
. mX [ 7UL ] + 1.0E-6 ) / 100.0 ) && ( fabs ( ( t2 -> mX . mX [ 7UL ] +
1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) ; out -> mMODE . mX [ 15UL ] = ( int32_T ) ( t2 -> mU . mX [ 6UL ] <= 0.0 ) ; out -> mMODE . mX [ 16UL ] = ( int32_T ) ( t2 -> mU . mX [ 1UL ] > 0.0 ) ; out -> mMODE . mX [ 17UL ] = ( int32_T ) ( t2 -> mU . mX [ 5UL ] <= 0.0 ) ; out -> mMODE . mX [ 18UL ] = 1 ; out -> mMODE . mX [ 19UL ] = 1 ; out -> mMODE . mX [ 20UL ] = ( int32_T ) ( 1.0 - intrm_sf_mf_13 != 0.0 ) ; out -> mMODE . mX [ 21UL ] = ( int32_T ) ( ( t2 -> mU . mX [ 3UL ] < 0.5 ) && ( ( size_t ) t2 -> mQ . mX [ 0UL ] == 1UL ) ) ; out -> mMODE . mX [ 22UL ] = ( int32_T ) ( ( ! ( ( t2 -> mX . mX [ 7UL ] + 1.0E-6 ) / 100.0 == ( t2 -> mX . mX [ 7UL ] + 1.0E-6 ) / 100.0 ) ) || ( ! ( fabs ( ( t2 -> mX . mX [ 7UL ] + 1.0E-6 ) / 100.0 ) != pmf_get_inf ( ) ) ) || ( ( t2 -> mX . mX [ 7UL ] + 1.0E-6 ) / 100.0 >= 0.0 ) ) ; out -> mMODE . mX [ 23UL ] = ( int32_T ) ( t2 -> mU . mX [ 6UL ] >= 0.99 ) ; out -> mMODE . mX [ 24UL ] = ( int32_T ) ( t2 -> mU . mX [ 5UL ] >= 0.99 ) ; out -> mMODE . mX [ 25UL ] = 1 ; out -> mMODE . mX [ 26UL ] = 1 ; out -> mMODE . mX [ 27UL ] = 1 ; out -> mMODE . mX [ 28UL ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; }
