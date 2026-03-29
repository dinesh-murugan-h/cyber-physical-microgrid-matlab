#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif
#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_simulator.h"
static Simulator * out = NULL ; Simulator *
Microgrid_with_Utility_Connection_b6e50c02_0_simulator_create ( void ) { if ( out == NULL ) { NeSolverParameters solverparams = { FALSE , FALSE , TRUE , FALSE , FALSE , 0.001 , 1e-06 , 1e-09 , FALSE , FALSE , 100U , FALSE , 1U , ( enum NeConsistencySolverTag ) 0 , ( enum NeIndexReductionMethodTag ) 1 , FALSE , 1e-09 , ( enum NeToleranceSourceTag ) 1 , 0.001 , 0.001 , 0.001 , TRUE , ( enum NeLocalSolverChoiceTag ) 4 , FALSE , 1U , 0.001 , TRUE , 1U , 2U , FALSE , 2U , ( enum NeLinearAlgebraChoiceTag ) 0 , 0U , ( enum NeEquationFormulationChoiceTag ) 0 , 1024U , TRUE , 0.001 , ( enum NePartitionStorageMethodTag ) 0 , 1024U , ( enum NePartitionMethodTag ) 0 , FALSE , ( enum NeMultibodyLocalSolverChoiceTag ) 0 , 0.001 } ; NeModelParameters modelparams = { ( enum NeSolverTypeTag ) 0 , 0.001 , 0.001 , 0.001 , TRUE , FALSE , ( enum NeModifyAbsTolTag ) 0 , 0.001 , 0.0 , FALSE , FALSE , FALSE , ( enum SscLoggingSettingTag ) 0 , 694558623.0 , FALSE , FALSE , FALSE } ; NeSolverParameters * spMp [ 2 ] ; spMp [ 0 ] = & solverparams ; spMp [ 1 ] = ( NeSolverParameters * ) & modelparams ; { SwitchedLinearSystem * sls = Microgrid_with_Utility_Connection_b6e50c02_0 ( ( PmAllocator * ) spMp ) ; out = simulator_create ( sls , solverparams , ( solverparams . mLinearAlgebra == NE_AUTO_LA ) ? get_auto_linear_algebra ( ) : ( ( solverparams . mLinearAlgebra == NE_FULL_LA ) ? get_rtw_linear_algebra ( ) : mc_get_csparse_linear_algebra ( ) ) , NULL , NULL , 0 , DAEMON_CHOICE_NONE ) ; } } return out ; } void Microgrid_with_Utility_Connection_b6e50c02_0_simulator_destroy ( void ) { if ( out != NULL ) { out -> mDestroy ( out ) ; out = NULL ; } }
