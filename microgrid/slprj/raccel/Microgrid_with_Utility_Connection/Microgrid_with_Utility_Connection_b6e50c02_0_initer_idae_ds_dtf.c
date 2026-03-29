#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_dtf.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_dtf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t97 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 11 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 4.0 } ; real_T t0 [ 11 ] ; real_T t8 [ 11 ] ;
real_T t9 [ 11 ] ; real_T intermediate_der214 ; real_T intermediate_der76 ;
real_T t27 ; real_T t29 ; real_T t32 ; real_T t38 ; real_T t39 ; real_T t41 ;
real_T t61 ; real_T t64 ; real_T t65 ; real_T t66 ; real_T t69 ; real_T t71 ;
real_T t72 ; real_T t73 ; real_T t74 ; real_T t75 ; real_T t76 ; real_T t77 ;
real_T t78 ; real_T t83 ; real_T t95 ; real_T t96 ; size_t t11 ; t0 [ 0 ] =
_cg_const_1 [ 0 ] ; t0 [ 1 ] = _cg_const_1 [ 1 ] ; t0 [ 2 ] = _cg_const_1 [ 2
] ; t0 [ 3 ] = _cg_const_1 [ 3 ] ; t0 [ 4 ] = _cg_const_1 [ 4 ] ; t0 [ 5 ] =
_cg_const_1 [ 5 ] ; t0 [ 6 ] = _cg_const_1 [ 6 ] ; t0 [ 7 ] = _cg_const_1 [ 7
] ; t0 [ 8 ] = _cg_const_1 [ 8 ] ; t0 [ 9 ] = _cg_const_1 [ 9 ] ; t0 [ 10 ] =
_cg_const_1 [ 10 ] ; t96 = t97 -> mT . mX [ 0UL ] * 376.99111843077515 ; t95
= t97 -> mX . mX [ 6UL ] * 4.0 + t96 ; t29 = t95 ; intermediate_der214 = t95
- 2.0943951023931953 ; t83 = t95 + 2.0943951023931953 ; t95 = t97 -> mX . mX
[ 13UL ] * 4.0 + t96 ; t32 = t95 ; t64 = t95 - 2.0943951023931953 ; t96 = t95
+ 2.0943951023931953 ; t38 = - sin ( t29 ) * 376.99111843077515 *
0.66666666666666663 ; t39 = - sin ( intermediate_der214 ) *
376.99111843077515 * 0.66666666666666663 ; t61 = - sin ( t83 ) *
376.99111843077515 * 0.66666666666666663 ; t41 = - ( cos ( t29 ) *
376.99111843077515 ) * 0.66666666666666663 ; t65 = - ( cos ( intermediate_der214
) * 376.99111843077515 ) * 0.66666666666666663 ; t66 = - ( cos ( t83 ) *
376.99111843077515 ) * 0.66666666666666663 ; t95 = ( ( t97 -> mX . mX [ 38UL
] * t38 + t97 -> mX . mX [ 39UL ] * t39 ) + t97 -> mX . mX [ 40UL ] * t61 ) /
3396.6257766593408 ; t27 = - ( ( t38 * 0.0 + t39 * 0.0 ) + t61 * 0.0 ) /
3396.6257766593408 ; intermediate_der76 = ( ( t97 -> mX . mX [ 38UL ] * t41 +
t97 -> mX . mX [ 39UL ] * t65 ) + t97 -> mX . mX [ 40UL ] * t66 ) /
3396.6257766593408 ; t38 = - ( ( t41 * 0.0 + t65 * 0.0 ) + t66 * 0.0 ) /
3396.6257766593408 ; t65 = - sin ( t64 ) * 376.99111843077515 ; t66 = - ( cos
( t64 ) * 376.99111843077515 ) ; t77 = - sin ( t96 ) * 376.99111843077515 ;
t78 = - ( cos ( t96 ) * 376.99111843077515 ) ; t69 = - sin ( t29 ) *
376.99111843077515 ; t29 = - ( cos ( t29 ) * 376.99111843077515 ) ; t71 = -
sin ( intermediate_der214 ) * 376.99111843077515 ; t72 = - ( cos ( intermediate_der214 ) * 376.99111843077515 ) ; t73 = - sin ( t83 ) * 376.99111843077515 ; t74 = - ( cos ( t83 ) * 376.99111843077515 ) ; t75 = - sin ( t32 ) * 376.99111843077515 ; t76 = - ( cos ( t32 ) * 376.99111843077515 ) ; t83 = - sin ( t32 ) * 376.99111843077515 * 0.66666666666666663 ; t39 = - sin ( t64 ) * 376.99111843077515 * 0.66666666666666663 ; t61 = - sin ( t96 ) * 376.99111843077515 * 0.66666666666666663 ; t41 = - ( cos ( t32 ) * 376.99111843077515 ) * 0.66666666666666663 ; t32 = - ( cos ( t64 ) * 376.99111843077515 ) * 0.66666666666666663 ; t64 = - ( cos ( t96 ) * 376.99111843077515 ) * 0.66666666666666663 ; t96 = ( ( t97 -> mX . mX [ 32UL ] * t83 + t97 -> mX . mX [ 33UL ] * t39 ) + t97 -> mX . mX [ 34UL ] * t61 ) / 3396.6257766593408 ; intermediate_der214 = ( ( t97 -> mX . mX [ 32UL ] * t41 + t97 -> mX . mX [ 33UL ] * t32 ) + t97 -> mX . mX [ 34UL ] * t64 ) / 3396.6257766593408 ; t8 [ 0UL ] = 0.0 ; t8 [ 1UL ] = 0.0 ; t8 [ 2UL ] = 0.0 ; t8 [ 3UL ] = 0.0 ; t8 [ 4UL ] = t95 ; t8 [ 5UL ] = intermediate_der76 ; t8 [ 6UL ] = 0.0 ; t8 [ 7UL ] = 0.0 ; t8 [ 8UL ] = 0.0 ; t8 [ 9UL ] = 0.0 ; t8 [ 10UL ] = 0.0 ; t9 [ 0UL ] = 0.0 ; t9 [ 1UL ] = 0.0 ; t9 [ 2UL ] = 0.0 ; t9 [ 3UL ] = 0.0 ; t9 [ 4UL ] = t96 ; t9 [ 5UL ] = intermediate_der214 ; t9 [ 6UL ] = 0.0 ; t9 [ 7UL ] = 0.0 ; t9 [ 8UL ] = 0.0 ; t9 [ 9UL ] = 0.0 ; t9 [ 10UL ] = 0.0 ; out -> mDTF . mX [ 0UL ] = - ( ( t95 - ( - t27 ) ) / 0.011 ) ; out -> mDTF . mX [ 1UL ] = - ( ( intermediate_der76 - ( - t38 ) ) / 0.011 ) ; out -> mDTF . mX [ 2UL ] = - ( ( t96 - ( - ( - ( ( t83 * 0.0 + t39 * 0.0 ) + t61 * 0.0 ) / 3396.6257766593408 ) ) ) / 0.011 ) ; out -> mDTF . mX [ 3UL ] = - ( ( intermediate_der214 - ( - ( - ( ( t41 * 0.0 + t32 * 0.0 ) + t64 * 0.0 ) / 3396.6257766593408 ) ) ) / 0.011 ) ; for ( t11 = 0UL ; t11 < 11UL ; t11 ++ ) { out -> mDTF . mX [ t11 + 4UL ] = - t8 [ t11 ] / ( t0 [ t11 ] == 0.0 ? 1.0E-16 : t0 [ t11 ] ) ; } out -> mDTF . mX [ 15UL ] = - ( t69 * t97 -> mX . mX [ 60UL ] * - 981.36608284582462 + t29 * t97 -> mX . mX [ 62UL ] * - 981.36608284582462 ) / 933.3346079615601 ; out -> mDTF . mX [ 16UL ] = - ( t71 * t97 -> mX . mX [ 60UL ] * - 981.36608284582462 + t72 * t97 -> mX . mX [ 62UL ] * - 981.36608284582462 ) / 729.29712636592569 ; out -> mDTF . mX [ 17UL ] = - ( t73 * t97 -> mX . mX [ 60UL ] * - 981.36608284582462 + t74 * t97 -> mX . mX [ 62UL ] * - 981.36608284582462 ) / 959.92087937718145 ; out -> mDTF . mX [ 18UL ] = - ( cos ( t97 -> mT . mX [ 0UL ] * 376.99111843077515 ) * 1.2804977504336049E+6 ) ; out -> mDTF . mX [ 19UL ] = - ( cos ( t97 -> mT . mX [ 0UL ] * 376.99111843077515 - 2.0943951023931953 ) * 1.2804977504336049E+6 ) ; out -> mDTF . mX [ 20UL ] = - ( cos ( t97 -> mT . mX [ 0UL ] * 376.99111843077515 + 2.0943951023931953 ) * 1.2804977504336049E+6 ) ; for ( t11 = 0UL ; t11 < 11UL ; t11 ++ ) { out -> mDTF . mX [ t11 + 21UL ] = - t9 [ t11 ] / ( t0 [ t11 ] == 0.0 ? 1.0E-16 : t0 [ t11 ] ) ; } out -> mDTF . mX [ 32UL ] = - ( t75 * t97 -> mX . mX [ 82UL ] * - 981.36608284582462 + t76 * t97 -> mX . mX [ 84UL ] * - 981.36608284582462 ) / 933.3346079615601 ; out -> mDTF . mX [ 33UL ] = - ( t65 * t97 -> mX . mX [ 82UL ] * - 981.36608284582462 + t66 * t97 -> mX . mX [ 84UL ] * - 981.36608284582462 ) / 729.29712636592569 ; out -> mDTF . mX [ 34UL ] = - ( t77 * t97 -> mX . mX [ 82UL ] * - 981.36608284582462 + t78 * t97 -> mX . mX [ 84UL ] * - 981.36608284582462 ) / 959.92087937718145 ; ( void ) sys ; ( void ) out ; return 0 ; }
