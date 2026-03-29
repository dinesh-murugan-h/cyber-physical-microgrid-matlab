#include "ne_std.h"
#include "ne_std_fwd.h"
#include "pm_default_allocator.h"
#include "ssc_dae_fwd.h"
#include "ne_dae_construct.h"
#include "nesl_la.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds.h"
void Microgrid_with_Utility_Connection_d0b73514_0_initer_idae ( NeDae * * dae
, const NeModelParameters * modelParams , const NeSolverParameters *
solverParams ) { PmAllocator * ne_allocator ; const McLinearAlgebraFactory *
linear_algebra_ptr = ( solverParams -> mLinearAlgebra == NE_FULL_LA ) ?
get_rtw_linear_algebra ( ) : ( ( solverParams -> mLinearAlgebra ==
NE_SPARSE_LA ) ? mc_get_csparse_linear_algebra ( ) : get_auto_linear_algebra
( ) ) ; NeRtpValues * rtpValues = NULL ; ne_allocator = pm_default_allocator
( ) ; ne_dae_create ( dae ,
Microgrid_with_Utility_Connection_d0b73514_0_initer_idae_ds ( ne_allocator )
, NULL , TRUE , rtpValues , * solverParams , * modelParams ,
linear_algebra_ptr , NULL , NULL , NULL , ne_allocator , NULL ,
DAEMON_CHOICE_NONE , NULL ) ; }
