#ifndef Microgrid_with_Utility_Connection_types_h_
#define Microgrid_with_Utility_Connection_types_h_
#include "rtwtypes.h"
#include "asynciocoder_api.hpp"
#ifndef DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
#define DEFINED_TYPEDEF_FOR_struct_AFnjoI7EtZZSooCsoe6EE_
typedef struct { real_T DischrgLmt_bpt [ 11 ] ; real_T ChrgLmt_bpt [ 11 ] ;
real_T SOC_bpt [ 11 ] ; real_T BattDischrgMax ; real_T BattChrgMax ; real_T
noLoadV [ 42 ] ; real_T CapSOCBp [ 6 ] ; real_T BattTempBp [ 7 ] ; real_T
CapLUTBp [ 101 ] ; real_T Em [ 101 ] ; real_T Ns ; real_T Np ; real_T
BattChargeMax ; real_T BattCapInit ; real_T AH [ 7 ] ; real_T initSOC ;
real_T RInt [ 42 ] ; real_T R0 [ 42 ] ; real_T thermalMass ; }
struct_AFnjoI7EtZZSooCsoe6EE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_nxjvkMAWNMdcRzZZdKzTgC_
#define DEFINED_TYPEDEF_FOR_struct_nxjvkMAWNMdcRzZZdKzTgC_
typedef struct { real_T Freq ; real_T n ; real_T k ; real_T Real_Init ;
real_T Imag_Init ; } struct_nxjvkMAWNMdcRzZZdKzTgC ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_UskKbK8yRC8GsXIo0cWURE_
#define DEFINED_TYPEDEF_FOR_struct_UskKbK8yRC8GsXIo0cWURE_
typedef struct { real_T Freq ; real_T Vinit ; real_T Delay ; real_T K1 ;
real_T K2 ; } struct_UskKbK8yRC8GsXIo0cWURE ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_struct_7U2Xy3czgmwuE6XJcblrBG_
#define DEFINED_TYPEDEF_FOR_struct_7U2Xy3czgmwuE6XJcblrBG_
typedef struct { real_T Freq ; real_T Vinit ; } struct_7U2Xy3czgmwuE6XJcblrBG
;
#endif
#ifndef struct_tag_syRUN6P8dnDtW4zHaczOEwG
#define struct_tag_syRUN6P8dnDtW4zHaczOEwG
struct tag_syRUN6P8dnDtW4zHaczOEwG { boolean_T InitAccess ; boolean_T
TransferDelay ; uint64_T LatestNumBytesWrittenToDevice ; } ;
#endif
#ifndef typedef_ari20jtgyl
#define typedef_ari20jtgyl
typedef struct tag_syRUN6P8dnDtW4zHaczOEwG ari20jtgyl ;
#endif
#include "asynciocoder_api.hpp"
#include "asynciocoder_api.hpp"
#include "asynciocoder_api.hpp"
#include "coder_posix_time.h"
#ifndef struct_tag_gsM4NaT1bkqNwuJjeAzL9C
#define struct_tag_gsM4NaT1bkqNwuJjeAzL9C
struct tag_gsM4NaT1bkqNwuJjeAzL9C { boolean_T matlabCodegenIsDeleted ; real_T
Timeout ; CoderOutputStream StreamImpl ; } ;
#endif
#ifndef typedef_bcd22hm2zl
#define typedef_bcd22hm2zl
typedef struct tag_gsM4NaT1bkqNwuJjeAzL9C bcd22hm2zl ;
#endif
#ifndef struct_tag_sVxuxLjG1Q1z6ZIer6yWt
#define struct_tag_sVxuxLjG1Q1z6ZIer6yWt
struct tag_sVxuxLjG1Q1z6ZIer6yWt { char_T Value [ 13 ] ; } ;
#endif
#ifndef typedef_heielqnmpy
#define typedef_heielqnmpy
typedef struct tag_sVxuxLjG1Q1z6ZIer6yWt heielqnmpy ;
#endif
#ifndef struct_emxArray_char_T
#define struct_emxArray_char_T
struct emxArray_char_T { char_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_k1ijkna2od
#define typedef_k1ijkna2od
typedef struct emxArray_char_T k1ijkna2od ;
#endif
#ifndef struct_emxArray_uint8_T
#define struct_emxArray_uint8_T
struct emxArray_uint8_T { uint8_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_di5aplhg5q
#define typedef_di5aplhg5q
typedef struct emxArray_uint8_T di5aplhg5q ;
#endif
#ifndef struct_tag_GgE2hYXCLDWDBsUuUgrNJE
#define struct_tag_GgE2hYXCLDWDBsUuUgrNJE
struct tag_GgE2hYXCLDWDBsUuUgrNJE { k1ijkna2od * ByteOrder ; k1ijkna2od *
WordOrder ; char_T MachineByteOrder [ 13 ] ; } ;
#endif
#ifndef typedef_aepb1eej4h
#define typedef_aepb1eej4h
typedef struct tag_GgE2hYXCLDWDBsUuUgrNJE aepb1eej4h ;
#endif
#ifndef struct_tag_T2jm5OL8EHwrh56rweAbGH
#define struct_tag_T2jm5OL8EHwrh56rweAbGH
struct tag_T2jm5OL8EHwrh56rweAbGH { aepb1eej4h * Converter ; real_T
ModbusPDUSize ; real_T TransactionId ; } ;
#endif
#ifndef typedef_okcu4ui5vl
#define typedef_okcu4ui5vl
typedef struct tag_T2jm5OL8EHwrh56rweAbGH okcu4ui5vl ;
#endif
#ifndef struct_tag_judyzK9RbooJt0iyxnaAXC
#define struct_tag_judyzK9RbooJt0iyxnaAXC
struct tag_judyzK9RbooJt0iyxnaAXC { boolean_T matlabCodegenIsDeleted ; real_T
Timeout ; CoderInputStream StreamImpl ; di5aplhg5q * PartialPacket ; real_T
PartialPacketStart ; real_T PartialPacketCount ; di5aplhg5q * ExampleData ; }
;
#endif
#ifndef typedef_if342ihito
#define typedef_if342ihito
typedef struct tag_judyzK9RbooJt0iyxnaAXC if342ihito ;
#endif
#ifndef struct_tag_quVlWGcCiA3e7td8oZ3QcB
#define struct_tag_quVlWGcCiA3e7td8oZ3QcB
struct tag_quVlWGcCiA3e7td8oZ3QcB { boolean_T matlabCodegenIsDeleted ;
if342ihito InputStream ; bcd22hm2zl OutputStream ; CoderChannel ChannelImpl ;
ari20jtgyl CustomProps ; } ;
#endif
#ifndef typedef_pd2w1cbr5z
#define typedef_pd2w1cbr5z
typedef struct tag_quVlWGcCiA3e7td8oZ3QcB pd2w1cbr5z ;
#endif
#ifndef struct_tag_3PknbWJpN5zoqnBcIThgFB
#define struct_tag_3PknbWJpN5zoqnBcIThgFB
struct tag_3PknbWJpN5zoqnBcIThgFB { boolean_T matlabCodegenIsDeleted ;
if342ihito InputStream ; bcd22hm2zl OutputStream ; CoderChannel ChannelImpl ;
real_T TotalElementsWritten ; di5aplhg5q * PartialPacket ; real_T
PartialPacketStart ; real_T PartialPacketCount ; real_T BytesPerElement ; } ;
#endif
#ifndef typedef_d4tb2e535y
#define typedef_d4tb2e535y
typedef struct tag_3PknbWJpN5zoqnBcIThgFB d4tb2e535y ;
#endif
#ifndef struct_tag_uIKvay1mTRXGnoMBSp2qeF
#define struct_tag_uIKvay1mTRXGnoMBSp2qeF
struct tag_uIKvay1mTRXGnoMBSp2qeF { boolean_T matlabCodegenIsDeleted ; char_T
MachineByteOrder [ 13 ] ; pd2w1cbr5z * AsyncIOChannel ; d4tb2e535y
UnreadDataBuffer ; real_T NumBytesWritten ; k1ijkna2od * ByteOrder ;
k1ijkna2od * NativeDataType ; k1ijkna2od * DataFieldName ; boolean_T
AllowPartialReads ; boolean_T WriteAsync ; } ;
#endif
#ifndef typedef_knueylrquj
#define typedef_knueylrquj
typedef struct tag_uIKvay1mTRXGnoMBSp2qeF knueylrquj ;
#endif
#ifndef struct_tag_S5aJF1iy1383Ue5fvcJrJ
#define struct_tag_S5aJF1iy1383Ue5fvcJrJ
struct tag_S5aJF1iy1383Ue5fvcJrJ { boolean_T matlabCodegenIsDeleted ; char_T
RemoteHost [ 13 ] ; real_T RemotePort ; boolean_T IsWriteOnly ; boolean_T
IsSharingPort ; real_T ConnectTimeout ; real_T InputBufferSize ; real_T
OutputBufferSize ; pd2w1cbr5z * AsyncIOChannel ; knueylrquj *
TransportChannel ; boolean_T TransferDelay ; knueylrquj _pobj0 ; pd2w1cbr5z
_pobj1 ; } ;
#endif
#ifndef typedef_foog01v3ys
#define typedef_foog01v3ys
typedef struct tag_S5aJF1iy1383Ue5fvcJrJ foog01v3ys ;
#endif
#ifndef struct_tag_DeeLwJ2DlZ0FsCfAWPNODF
#define struct_tag_DeeLwJ2DlZ0FsCfAWPNODF
struct tag_DeeLwJ2DlZ0FsCfAWPNODF { boolean_T matlabCodegenIsDeleted ; real_T
NumRetries ; real_T TransactionTimeout ; boolean_T TransportInjected ; real_T
RetryCount ; okcu4ui5vl PacketBuilder ; aepb1eej4h Converter ; heielqnmpy
DeviceAddress ; real_T Port ; foog01v3ys * TcpIpObj ; foog01v3ys _pobj0 ; } ;
#endif
#ifndef typedef_b2m2xs0ze2
#define typedef_b2m2xs0ze2
typedef struct tag_DeeLwJ2DlZ0FsCfAWPNODF b2m2xs0ze2 ;
#endif
#ifndef struct_tag_PnIbGDUPq1sTB8kzEk3q7B
#define struct_tag_PnIbGDUPq1sTB8kzEk3q7B
struct tag_PnIbGDUPq1sTB8kzEk3q7B { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; b2m2xs0ze2 * ModbusClient
; b2m2xs0ze2 _pobj0 ; } ;
#endif
#ifndef typedef_dfwqypff4m
#define typedef_dfwqypff4m
typedef struct tag_PnIbGDUPq1sTB8kzEk3q7B dfwqypff4m ;
#endif
#ifndef struct_tag_lNujW7uZfUZb6VmnmOd3SE
#define struct_tag_lNujW7uZfUZb6VmnmOd3SE
struct tag_lNujW7uZfUZb6VmnmOd3SE { boolean_T matlabCodegenIsDeleted ;
int32_T isInitialized ; boolean_T isSetupComplete ; b2m2xs0ze2 * ModbusClient
; b2m2xs0ze2 _pobj0 ; } ;
#endif
#ifndef typedef_mu3t5m1h4s
#define typedef_mu3t5m1h4s
typedef struct tag_lNujW7uZfUZb6VmnmOd3SE mu3t5m1h4s ;
#endif
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T { real_T * data ; int32_T * size ; int32_T
allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_axzl34vdgu
#define typedef_axzl34vdgu
typedef struct emxArray_real_T axzl34vdgu ;
#endif
#ifndef struct_emxArray_real_T_1x31
#define struct_emxArray_real_T_1x31
struct emxArray_real_T_1x31 { real_T data [ 31 ] ; int32_T size [ 2 ] ; } ;
#endif
#ifndef typedef_lecnh5okva
#define typedef_lecnh5okva
typedef struct emxArray_real_T_1x31 lecnh5okva ;
#endif
#ifndef struct_tag_tVNDDbBfXx0nORXjehL0f
#define struct_tag_tVNDDbBfXx0nORXjehL0f
struct tag_tVNDDbBfXx0nORXjehL0f { di5aplhg5q * f1 ; } ;
#endif
#ifndef typedef_gm03pnubsc
#define typedef_gm03pnubsc
typedef struct tag_tVNDDbBfXx0nORXjehL0f gm03pnubsc ;
#endif
#ifndef struct_emxArray_b_tag_tVNDDbBfXx0nORXj
#define struct_emxArray_b_tag_tVNDDbBfXx0nORXj
struct emxArray_b_tag_tVNDDbBfXx0nORXj { gm03pnubsc * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_kzpnjki0yf
#define typedef_kzpnjki0yf
typedef struct emxArray_b_tag_tVNDDbBfXx0nORXj kzpnjki0yf ;
#endif
#ifndef struct_tag_nwNlNAh44luWuWarnUt9lF
#define struct_tag_nwNlNAh44luWuWarnUt9lF
struct tag_nwNlNAh44luWuWarnUt9lF { di5aplhg5q * f1 ; } ;
#endif
#ifndef typedef_nzrchnpupn
#define typedef_nzrchnpupn
typedef struct tag_nwNlNAh44luWuWarnUt9lF nzrchnpupn ;
#endif
#ifndef struct_tag_tVNDDbBfXx0nORXjehL0f
#define struct_tag_tVNDDbBfXx0nORXjehL0f
struct tag_tVNDDbBfXx0nORXjehL0f { di5aplhg5q * f1 ; } ;
#endif
#ifndef typedef_cxtceiygad
#define typedef_cxtceiygad
typedef struct tag_tVNDDbBfXx0nORXjehL0f cxtceiygad ;
#endif
#ifndef struct_emxArray_b_tag_tVNDDbBfXx0nORXj
#define struct_emxArray_b_tag_tVNDDbBfXx0nORXj
struct emxArray_b_tag_tVNDDbBfXx0nORXj { cxtceiygad * data ; int32_T * size ;
int32_T allocatedSize ; int32_T numDimensions ; boolean_T canFreeData ; } ;
#endif
#ifndef typedef_gyoci5bsx4
#define typedef_gyoci5bsx4
typedef struct emxArray_b_tag_tVNDDbBfXx0nORXj gyoci5bsx4 ;
#endif
#ifndef struct_tag_nwNlNAh44luWuWarnUt9lF
#define struct_tag_nwNlNAh44luWuWarnUt9lF
struct tag_nwNlNAh44luWuWarnUt9lF { di5aplhg5q * f1 ; } ;
#endif
#ifndef typedef_gm03pnubsc0
#define typedef_gm03pnubsc0
typedef struct tag_nwNlNAh44luWuWarnUt9lF gm03pnubsc0 ;
#endif
#ifndef struct_emxArray_tag_tVNDDbBfXx0nORXjeh
#define struct_emxArray_tag_tVNDDbBfXx0nORXjeh
struct emxArray_tag_tVNDDbBfXx0nORXjeh { gm03pnubsc data ; int32_T size [ 2 ]
; } ;
#endif
#ifndef typedef_io1otexpnn
#define typedef_io1otexpnn
typedef struct emxArray_tag_tVNDDbBfXx0nORXjeh io1otexpnn ;
#endif
#ifndef struct_emxArray_tag_nwNlNAh44luWuWarnU
#define struct_emxArray_tag_nwNlNAh44luWuWarnU
struct emxArray_tag_nwNlNAh44luWuWarnU { nzrchnpupn data ; int32_T size [ 2 ]
; } ;
#endif
#ifndef typedef_idui502kpj
#define typedef_idui502kpj
typedef struct emxArray_tag_nwNlNAh44luWuWarnU idui502kpj ;
#endif
#ifndef struct_emxArray_tag_tVNDDbBfXx0nORXjeh
#define struct_emxArray_tag_tVNDDbBfXx0nORXjeh
struct emxArray_tag_tVNDDbBfXx0nORXjeh { cxtceiygad data ; int32_T size [ 2 ]
; } ;
#endif
#ifndef typedef_bnmhys3ogj
#define typedef_bnmhys3ogj
typedef struct emxArray_tag_tVNDDbBfXx0nORXjeh bnmhys3ogj ;
#endif
#ifndef struct_emxArray_tag_nwNlNAh44luWuWarnU
#define struct_emxArray_tag_nwNlNAh44luWuWarnU
struct emxArray_tag_nwNlNAh44luWuWarnU { gm03pnubsc0 data ; int32_T size [ 2
] ; } ;
#endif
#ifndef typedef_io1otexpnna
#define typedef_io1otexpnna
typedef struct emxArray_tag_nwNlNAh44luWuWarnU io1otexpnna ;
#endif
#ifndef SS_UINT64
#define SS_UINT64 23
#endif
#ifndef SS_INT64
#define SS_INT64 24
#endif
typedef struct eap0kti25e_ eap0kti25e ; typedef struct eihibnekho_ eihibnekho
; typedef struct P_ P ;
#endif
