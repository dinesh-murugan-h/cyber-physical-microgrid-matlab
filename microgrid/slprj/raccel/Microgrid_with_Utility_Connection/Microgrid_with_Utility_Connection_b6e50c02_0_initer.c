#include "ne_std.h"
#include "ne_std_fwd.h"
#include "ssc_dae_fwd.h"
#include "ne_dae_construct.h"
#include "ne_initer_dae.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae.h"
SscIniter * Microgrid_with_Utility_Connection_b6e50c02_0_initer ( const
NeModelParameters * modelParams , const NeSolverParameters * solverParams ) {
NeSolverParameters ftParams = * solverParams ; NeDae * idae = NULL ; ftParams
. mUseLocalSolver = false ; ftParams . mEquationFormulation = NE_TIME_EF ;
Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae ( & idae ,
modelParams , & ftParams ) ; return sec_create_initer ( idae , FALSE ) ; }
