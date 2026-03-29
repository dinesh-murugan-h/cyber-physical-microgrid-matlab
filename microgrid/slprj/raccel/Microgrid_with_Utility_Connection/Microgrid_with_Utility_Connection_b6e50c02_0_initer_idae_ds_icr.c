#include "ne_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_sys_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_icr.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_externals.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Microgrid_with_Utility_Connection_b6e50c02_0_initer_idae_ds_icr ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t14 , NeDsMethodOutput *
out ) { out -> mICR . mX [ 0UL ] = t14 -> mX . mX [ 6UL ] - -
0.78539814589744827 ; out -> mICR . mX [ 1UL ] = t14 -> mX . mX [ 10UL ] -
1.0000000010999976 ; out -> mICR . mX [ 2UL ] = t14 -> mX . mX [ 12UL ] - -
6.9999999999999819E-8 ; out -> mICR . mX [ 3UL ] = t14 -> mX . mX [ 11UL ] -
1.2889535422433607 ; out -> mICR . mX [ 4UL ] = t14 -> mX . mX [ 8UL ] -
1.0000000010999985 ; out -> mICR . mX [ 5UL ] = t14 -> mX . mX [ 9UL ] - -
5.4999999999999857E-8 ; out -> mICR . mX [ 6UL ] = t14 -> mX . mX [ 13UL ] -
- 0.78539814589744827 ; out -> mICR . mX [ 7UL ] = t14 -> mX . mX [ 17UL ] -
1.0000000010999976 ; out -> mICR . mX [ 8UL ] = t14 -> mX . mX [ 19UL ] - -
6.9999999999999819E-8 ; out -> mICR . mX [ 9UL ] = t14 -> mX . mX [ 18UL ] -
1.2889535422433607 ; out -> mICR . mX [ 10UL ] = t14 -> mX . mX [ 15UL ] -
1.0000000010999985 ; out -> mICR . mX [ 11UL ] = t14 -> mX . mX [ 16UL ] - -
5.4999999999999857E-8 ; out -> mICR . mX [ 12UL ] = t14 -> mX . mX [ 0UL ] ;
out -> mICR . mX [ 13UL ] = t14 -> mX . mX [ 1UL ] ; out -> mICR . mX [ 14UL
] = t14 -> mX . mX [ 2UL ] ; out -> mICR . mX [ 15UL ] = 0.0 ; out -> mICR .
mX [ 16UL ] = 0.0 ; out -> mICR . mX [ 17UL ] = 0.0 ; out -> mICR . mX [ 18UL
] = 0.0 ; out -> mICR . mX [ 19UL ] = 0.0 ; ( void ) sys ; ( void ) out ;
return 0 ; }
