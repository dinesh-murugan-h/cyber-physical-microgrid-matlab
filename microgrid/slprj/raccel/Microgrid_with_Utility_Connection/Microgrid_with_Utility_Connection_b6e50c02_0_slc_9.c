#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9xnplus1.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j_p.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9mode.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9m_p.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9fx.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9f.h"
#include "ssc_ml_fun.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_external_struct.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_slc_9_externals.h"
static int32_T slc_m ( const SwitchedLinearClump * ds , const
NeDynamicSystemInput * in , SlcMethodOutput * out ) ; SwitchedLinearClump *
Microgrid_with_Utility_Connection_b6e50c02_0_slc_9 ( PmAllocator * allocator
) { static NeDynamicSystemInputSizes sizes = { { 16U , 139U , 1U , 12U , 0U ,
63U , 0U , 0U , 0U , 210U , 0U , 1U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
} } ; static size_t selector_Q_ [ 16 ] = { 0U , 1U , 2U , 3U , 4U , 5U , 6U ,
7U , 8U , 9U , 10U , 11U , 12U , 13U , 14U , 15U } ; static PmSizeVector
selector_Q = { 16U , selector_Q_ } ; static size_t selector_M_ [ 139 ] = { 0U
, 1U , 2U , 3U , 4U , 5U , 6U , 7U , 8U , 9U , 10U , 11U , 12U , 13U , 14U ,
15U , 16U , 17U , 18U , 19U , 20U , 21U , 22U , 23U , 24U , 25U , 26U , 27U ,
28U , 29U , 30U , 31U , 32U , 33U , 34U , 35U , 36U , 37U , 38U , 39U , 40U ,
41U , 42U , 43U , 44U , 45U , 46U , 47U , 48U , 49U , 50U , 51U , 52U , 53U ,
54U , 55U , 56U , 57U , 58U , 59U , 60U , 61U , 62U , 63U , 64U , 65U , 66U ,
67U , 68U , 69U , 70U , 71U , 72U , 73U , 74U , 75U , 76U , 77U , 78U , 79U ,
80U , 81U , 82U , 83U , 84U , 85U , 86U , 87U , 88U , 89U , 90U , 91U , 92U ,
93U , 94U , 95U , 96U , 97U , 98U , 99U , 100U , 101U , 102U , 103U , 104U ,
105U , 106U , 107U , 108U , 109U , 110U , 111U , 112U , 113U , 114U , 115U ,
116U , 118U , 119U , 120U , 121U , 122U , 123U , 124U , 125U , 133U , 134U ,
135U , 136U , 137U , 138U , 139U , 140U , 141U , 142U , 143U , 144U , 145U ,
146U } ; static PmSizeVector selector_M = { 139U , selector_M_ } ; static
size_t selector_T_ [ 1 ] = { 0U } ; static PmSizeVector selector_T = { 1U ,
selector_T_ } ; static size_t selector_U_ [ 12 ] = { 0U , 1U , 2U , 11U , 4U
, 10U , 9U , 7U , 12U , 5U , 13U , 8U } ; static PmSizeVector selector_U = {
12U , selector_U_ } ; static PmSizeVector selector_V = { 0U , NULL } ; static
size_t selector_X_ [ 63 ] = { 3U , 4U , 5U , 0U , 1U , 2U , 6U , 7U , 8U , 9U
, 10U , 11U , 12U , 13U , 14U , 18U , 19U , 20U , 15U , 16U , 17U , 24U , 25U
, 26U , 21U , 22U , 23U , 30U , 27U , 31U , 28U , 32U , 29U , 44U , 45U , 46U
, 47U , 48U , 49U , 50U , 51U , 52U , 53U , 54U , 55U , 56U , 57U , 58U , 59U
, 60U , 61U , 62U , 74U , 75U , 76U , 77U , 78U , 79U , 80U , 81U , 82U , 83U
, 84U } ; static PmSizeVector selector_X = { 63U , selector_X_ } ; static
PmSizeVector selector_D = { 0U , NULL } ; static PmSizeVector selector_E = {
0U , NULL } ; static PmSizeVector selector_CR = { 0U , NULL } ; static size_t
selector_CI_ [ 210 ] = { 0U , 1U , 2U , 3U , 4U , 5U , 6U , 7U , 8U , 9U ,
10U , 11U , 12U , 13U , 14U , 15U , 16U , 17U , 18U , 19U , 20U , 21U , 22U ,
23U , 24U , 25U , 26U , 27U , 28U , 29U , 30U , 31U , 32U , 33U , 34U , 35U ,
36U , 37U , 38U , 39U , 40U , 41U , 42U , 43U , 44U , 45U , 46U , 47U , 48U ,
49U , 50U , 51U , 52U , 53U , 54U , 55U , 56U , 57U , 58U , 59U , 60U , 61U ,
62U , 63U , 64U , 65U , 66U , 67U , 68U , 69U , 70U , 71U , 72U , 73U , 74U ,
75U , 76U , 77U , 78U , 79U , 80U , 81U , 82U , 83U , 84U , 85U , 86U , 87U ,
88U , 89U , 90U , 91U , 92U , 93U , 94U , 95U , 96U , 97U , 98U , 99U , 100U
, 101U , 102U , 103U , 104U , 105U , 106U , 107U , 108U , 109U , 110U , 111U
, 112U , 113U , 114U , 115U , 116U , 117U , 118U , 119U , 120U , 121U , 122U
, 123U , 124U , 125U , 126U , 127U , 128U , 129U , 130U , 131U , 132U , 133U
, 134U , 135U , 136U , 137U , 138U , 139U , 140U , 141U , 142U , 143U , 144U
, 145U , 146U , 147U , 148U , 149U , 150U , 151U , 152U , 153U , 154U , 155U
, 156U , 157U , 158U , 159U , 160U , 161U , 162U , 163U , 164U , 165U , 166U
, 167U , 168U , 169U , 170U , 171U , 172U , 173U , 174U , 175U , 176U , 177U
, 178U , 179U , 180U , 181U , 182U , 183U , 184U , 185U , 186U , 187U , 188U
, 189U , 190U , 191U , 192U , 193U , 194U , 195U , 196U , 197U , 198U , 199U
, 200U , 201U , 202U , 203U , 204U , 205U , 206U , 207U , 208U , 209U } ;
static PmSizeVector selector_CI = { 210U , selector_CI_ } ; static
PmSizeVector selector_W = { 0U , NULL } ; static size_t selector_S_ [ 1 ] = {
0U } ; static PmSizeVector selector_S = { 1U , selector_S_ } ; static
PmSizeVector selector_P_L = { 0U , NULL } ; static PmSizeVector selector_P_I
= { 0U , NULL } ; static PmSizeVector selector_P_J = { 0U , NULL } ; static
PmSizeVector selector_P_R = { 0U , NULL } ; static PmSizeVector selector_DP_L
= { 0U , NULL } ; static PmSizeVector selector_DP_I = { 0U , NULL } ; static
PmSizeVector selector_DP_J = { 0U , NULL } ; static PmSizeVector
selector_DP_R = { 0U , NULL } ; static int32_T state_indices_ [ 54 ] = { 0 ,
1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 , 15 , 16 , 17 , 18 , 19 , 20 ,
21 , 22 , 23 , 24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36
, 37 , 38 , 39 , 40 , 41 , 42 , 43 , 44 , 51 , 52 , 53 , 54 , 55 , 56 , 57 ,
58 , 59 , 60 , 61 , 62 } ; static PmIntVector state_indices = { 54U ,
state_indices_ } ; static int32_T state_indices_out_ [ 54 ] = { 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static PmIntVector
state_indices_out = { 54U , state_indices_out_ } ; static int32_T
mode_indices_ [ 133 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 ,
12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 , 24 , 25 , 26 , 27
, 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 ,
43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 , 55 , 56 , 57 , 58
, 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70 , 71 , 72 , 73 ,
74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 , 86 , 87 , 88 , 89
, 90 , 91 , 92 , 93 , 94 , 95 , 96 , 97 , 98 , 99 , 100 , 101 , 102 , 103 ,
104 , 111 , 112 , 113 , 114 , 115 , 116 , 117 , 118 , 119 , 120 , 121 , 122 ,
123 , 124 , 125 , 126 , 127 , 128 , 129 , 130 , 131 , 132 , 133 , 134 , 135 ,
136 , 137 , 138 } ; static PmIntVector mode_indices = { 133U , mode_indices_
} ; static int32_T m_ref_indices_ [ 111 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 ,
8 , 9 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 17 , 18 , 19 , 20 , 21 , 22 , 23 ,
24 , 25 , 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39
, 40 , 41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 , 53 , 54 ,
55 , 56 , 57 , 58 , 59 , 60 , 61 , 62 , 63 , 64 , 65 , 66 , 67 , 68 , 69 , 70
, 71 , 72 , 73 , 74 , 75 , 76 , 77 , 78 , 79 , 80 , 81 , 82 , 83 , 84 , 85 ,
86 , 87 , 88 , 89 , 90 , 91 , 92 , 93 , 94 , 95 , 96 , 97 , 98 , 99 , 100 ,
101 , 102 , 103 , 104 , 105 , 106 , 107 , 108 , 109 , 110 } ; static
PmIntVector m_ref_indices = { 111U , m_ref_indices_ } ; static int32_T
q_ref_indices_ [ 16 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 , 11 ,
12 , 13 , 14 , 15 } ; static PmIntVector q_ref_indices = { 16U ,
q_ref_indices_ } ; static int32_T constant_M_pattern_jc [ 55 ] = { 0 , 0 , 0
, 0 , 1 , 2 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 ,
3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 3 , 4 , 4 , 5 , 5 , 5 , 6 , 6 , 6 , 7 , 8 , 9
, 10 , 11 , 11 , 11 , 12 , 12 , 13 , 13 , 13 , 14 , 15 , 16 , 17 } ; static
int32_T constant_M_pattern_ir [ 17 ] = { 0 , 1 , 2 , 13 , 14 , 10 , 12 , 4 ,
8 , 6 , 26 , 27 , 24 , 25 , 21 , 23 , 22 } ; static PmSparsityPattern
constant_M_pattern = { 54U , 54U , constant_M_pattern_jc ,
constant_M_pattern_ir } ; static real_T constant_M_pr_ [ 17 ] = { - 0.05 , -
0.05 , - 0.05 , - 1.0 , - 1.0 , - 0.075762127465646187 , -
0.061983471074380181 , - 0.24114385316953843 , - 1.0 , - 0.24114385316953843
, - 1.0 , - 1.0 , - 0.075762127465646187 , - 0.061983471074380181 , -
0.24114385316953843 , - 1.0 , - 0.24114385316953843 } ; static PmRealVector
constant_M_pr = { 17U , constant_M_pr_ } ; static McSparseMatrix constant_M =
{ & constant_M_pattern , & constant_M_pr } ; static int32_T
constant_J_pattern_jc [ 55 ] = { 0 , 6 , 12 , 18 , 18 , 18 , 18 , 20 , 22 ,
24 , 24 , 24 , 24 , 25 , 26 , 27 , 29 , 31 , 33 , 34 , 35 , 36 , 38 , 40 , 42
, 42 , 44 , 44 , 46 , 46 , 48 , 48 , 50 , 52 , 56 , 60 , 63 , 66 , 69 , 70 ,
71 , 72 , 73 , 73 , 77 , 79 , 81 , 85 , 88 , 91 , 94 , 95 , 96 , 97 , 98 } ;
static int32_T constant_J_pattern_ir [ 98 ] = { 0 , 28 , 31 , 34 , 40 , 51 ,
1 , 29 , 32 , 35 , 41 , 52 , 2 , 30 , 33 , 36 , 42 , 53 , 28 , 37 , 29 , 38 ,
30 , 39 , 15 , 17 , 19 , 15 , 31 , 17 , 32 , 19 , 33 , 48 , 49 , 50 , 34 , 48
, 35 , 49 , 36 , 50 , 16 , 40 , 18 , 41 , 20 , 42 , 14 , 47 , 13 , 14 , 8 ,
10 , 43 , 45 , 4 , 10 , 43 , 45 , 10 , 43 , 45 , 12 , 44 , 46 , 6 , 44 , 46 ,
46 , 43 , 45 , 44 , 3 , 7 , 23 , 24 , 11 , 27 , 26 , 27 , 3 , 7 , 21 , 24 , 3
, 7 , 24 , 5 , 9 , 25 , 5 , 9 , 22 , 9 , 3 , 7 , 5 } ; static
PmSparsityPattern constant_J_pattern = { 54U , 54U , constant_J_pattern_jc ,
constant_J_pattern_ir } ; static real_T constant_J_pr_ [ 98 ] = { 1.0 , 1.0 ,
- 1.0e-6 , - 1.0e-6 , - 1.0e-6 , - 1.0e-6 , 1.0 , 1.0 , - 1.0e-6 , - 1.0e-6 ,
- 1.0e-6 , - 1.0e-6 , 1.0 , 1.0 , - 1.0e-6 , - 1.0e-6 , - 1.0e-6 , - 1.0e-6 ,
1.0 , 1.0e-6 , 1.0 , 1.0e-6 , 1.0 , 1.0e-6 , - 0.0010714271082093911 , -
0.0013711832445891866 , - 0.0010417525251131352 , - 1.0714271082093909e-15 ,
1.0e-6 , - 1.3711832445891866e-15 , 1.0e-6 , - 1.0417525251131352e-15 ,
1.0e-6 , - 0.0010714271082093911 , - 0.0013711832445891866 , -
0.0010417525251131352 , 1.0e-6 , - 1.0714271082093909e-15 , 1.0e-6 , -
1.3711832445891866e-15 , 1.0e-6 , - 1.0417525251131352e-15 , 1.0 , 1.0e-6 ,
1.0 , 1.0e-6 , 1.0 , 1.0e-6 , - 0.00025198989960228144 , 1.0 , 1.0 , -
0.0014184397163120566 , - 0.0049605733062519823 , 0.018210437553916343 , -
0.0034386725728336094 , - 0.0093896770179855218 , 1.0 , - 0.81946968992623526
, 0.29759740863465556 , 0.1624772790663882 , - 0.91052187769581694 , -
0.78044732373927161 , - 0.81946968992623537 , - 1.0 , - 0.54999999999999993 ,
- 0.80666666666666653 , 1.0 , 0.7 , 0.54999999999999993 , 1.0 ,
0.95238095238095233 , 1.0 , 1.0 , - 0.0034386725728336094 , -
0.0093896770179855218 , - 0.0049605733062519823 , 0.018210437553916343 , 1.0
, - 0.00025198989960228144 , 1.0 , - 0.0014184397163120566 ,
0.29759740863465556 , 0.1624772790663882 , 1.0 , - 0.81946968992623526 , -
0.78044732373927161 , - 0.81946968992623537 , - 0.91052187769581694 , -
0.54999999999999993 , - 0.80666666666666653 , - 1.0 , 0.7 ,
0.54999999999999993 , 1.0 , 1.0 , 0.95238095238095233 , 1.0 , 1.0 } ; static
PmRealVector constant_J_pr = { 98U , constant_J_pr_ } ; static McSparseMatrix
constant_J = { & constant_J_pattern , & constant_J_pr } ; static
SwitchedLinearClump slc ; ( void ) allocator ; slc . mMethods [
SLC_METHOD_M_P ] = Microgrid_with_Utility_Connection_b6e50c02_0_slc_9m_p ;
slc . mMethods [ SLC_METHOD_M ] = slc_m ; slc . mMethods [ SLC_METHOD_J_P ] =
Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j_p ; slc . mMethods [
SLC_METHOD_J ] = Microgrid_with_Utility_Connection_b6e50c02_0_slc_9j ; slc .
mMethods [ SLC_METHOD_FX ] =
Microgrid_with_Utility_Connection_b6e50c02_0_slc_9fx ; slc . mMethods [
SLC_METHOD_F ] = Microgrid_with_Utility_Connection_b6e50c02_0_slc_9f ; slc .
mMethods [ SLC_METHOD_XNPLUS1 ] =
Microgrid_with_Utility_Connection_b6e50c02_0_slc_9xnplus1 ; slc . mMethods [
SLC_METHOD_MODE ] = Microgrid_with_Utility_Connection_b6e50c02_0_slc_9mode ;
slc . mMNnz = 3U ; slc . mJNnz = 122U ; slc . mNEqs = 54U ; slc . mSizes =
sizes ; slc . mSelectors [ 0 ] = & selector_Q ; slc . mSelectors [ 1 ] = &
selector_M ; slc . mSelectors [ 2 ] = & selector_T ; slc . mSelectors [ 3 ] =
& selector_U ; slc . mSelectors [ 4 ] = & selector_V ; slc . mSelectors [ 5 ]
= & selector_X ; slc . mSelectors [ 6 ] = & selector_D ; slc . mSelectors [ 7
] = & selector_E ; slc . mSelectors [ 8 ] = & selector_CR ; slc . mSelectors
[ 9 ] = & selector_CI ; slc . mSelectors [ 10 ] = & selector_W ; slc .
mSelectors [ 11 ] = & selector_S ; slc . mSelectors [ 12 ] = & selector_P_L ;
slc . mSelectors [ 13 ] = & selector_P_I ; slc . mSelectors [ 14 ] = &
selector_P_J ; slc . mSelectors [ 15 ] = & selector_P_R ; slc . mSelectors [
16 ] = & selector_DP_L ; slc . mSelectors [ 17 ] = & selector_DP_I ; slc .
mSelectors [ 18 ] = & selector_DP_J ; slc . mSelectors [ 19 ] = &
selector_DP_R ; slc . mStateIndices = & state_indices ; slc .
mStateIndicesOut = & state_indices_out ; slc . mModeIndices = & mode_indices
; slc . mMRefIndices = & m_ref_indices ; slc . mQRefIndices = & q_ref_indices
; slc . mIsModeBoolean = TRUE ; slc . mIsLti = FALSE ; slc . mModeCardinality
= SWL_NONLINEAR ; slc . mQRefIndices = & q_ref_indices ; slc . mConstantM = &
constant_M ; slc . mConstantJ = & constant_J ; return & slc ; } static
int32_T slc_m ( const SwitchedLinearClump * sys , const NeDynamicSystemInput
* t1 , SlcMethodOutput * out ) { out -> mM . mX [ 0UL ] = t1 -> mM . mX [
105UL ] != 0 ? - t1 -> mX . mX [ 45UL ] : - 1.0E-6 ; out -> mM . mX [ 1UL ] =
t1 -> mM . mX [ 106UL ] != 0 ? - t1 -> mX . mX [ 46UL ] : - 1.0E-6 ; out ->
mM . mX [ 2UL ] = t1 -> mM . mX [ 107UL ] != 0 ? - t1 -> mX . mX [ 47UL ] : -
1.0E-6 ; ( void ) sys ; ( void ) out ; return 0 ; }
