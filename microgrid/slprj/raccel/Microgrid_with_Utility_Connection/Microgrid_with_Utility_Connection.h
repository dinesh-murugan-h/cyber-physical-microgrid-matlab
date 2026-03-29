#ifndef Microgrid_with_Utility_Connection_h_
#define Microgrid_with_Utility_Connection_h_
#ifndef Microgrid_with_Utility_Connection_COMMON_INCLUDES_
#define Microgrid_with_Utility_Connection_COMMON_INCLUDES_
#include <stdio.h>
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "asynciocoder_api.hpp"
#include "coder_posix_time.h"
#include "nesl_rtw_swl.h"
#include "Microgrid_with_Utility_Connection_b6e50c02_0_simulator.h"
#include "Microgrid_with_Utility_Connection_d0b73514_0_simulator.h"
#include "nesl_rtw_rtp.h"
#endif
#include "Microgrid_with_Utility_Connection_types.h"
#include "mwmathutil.h"
#include <stddef.h>
#include <string.h>
#include "rtGetInf.h"
#include "rtGetNaN.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#define MODEL_NAME Microgrid_with_Utility_Connection
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (259) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (12)   
#elif NCSTATES != 12
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { creal_T fzopq45nfd ; real_T e0o1bd20vo ; real_T abgdmof3z2 ;
real_T p1jp4mdoen ; real_T duvtsehdce ; real_T fv1mrzbe4c ; real_T lmktjrl5f5
; real_T hwwfjbcp1v ; real_T eusr0f43yb ; real_T jbrsw5znzy ; real_T
jxvuawgxub ; real_T m0rfj5bblp ; real_T d1oat1xcqk ; real_T f1cqvpbkph ;
real_T esxwvptqwa ; real_T m0df3zixb5 ; real_T ie103btofq ; real_T fnbby4ss5l
; } lvnb54qgr2 ; typedef struct { real_T ire3odvk4q ; real_T iigdoh2d2j ;
struct { real_T modelTStart ; } m50nvhcvdy ; struct { real_T modelTStart ; }
g3i5kks1he ; struct { void * TUbufferPtrs [ 2 ] ; } g1hkwoc3vm ; struct {
void * TUbufferPtrs [ 2 ] ; } d3lpaonarv ; struct { int_T Tail ; int_T Head ;
int_T Last ; int_T CircularBufSize ; int_T MaxNewBufSize ; } eyderrq2ko ;
struct { int_T Tail ; int_T Head ; int_T Last ; int_T CircularBufSize ; int_T
MaxNewBufSize ; } f0npzgzqdo ; int8_T i3khug3ve5 ; boolean_T kert0igju2 ; }
ggaiosjvf2 ; typedef struct { real_T kxafsba5j5 ; real_T iw4ixtnjbi ; }
jl0m24xehf ; typedef struct { real_T kxafsba5j5 ; real_T iw4ixtnjbi ; }
gemwkalucd ; typedef struct { boolean_T kxafsba5j5 ; boolean_T iw4ixtnjbi ; }
cmoybd515s ; typedef struct { real_T kxafsba5j5 ; real_T iw4ixtnjbi ; }
gosl0zw24r ; typedef struct { real_T kxafsba5j5 ; real_T iw4ixtnjbi ; }
cbhzhntz32 ; typedef struct { real_T kxafsba5j5 ; real_T iw4ixtnjbi ; }
bph2drokld ; typedef struct { real_T dx5vs2okpx ; real_T dabsrwbxoq ; real_T
j31i20akpf ; real_T ffksdxmgpu ; real_T luma25gcen ; real_T dpa2iut1so ;
real_T huhfoe0tl4 ; real_T hti1si4rdk ; real_T kwrf33mt0y ; real_T ejxr3kbwjl
; } f3peczma5t ; typedef struct { real_T kfovwheeuv ; struct { real_T
modelTStart ; } o03vw25i0s ; struct { void * TUbufferPtrs [ 2 ] ; }
cnf0kklene ; struct { int_T Tail ; int_T Head ; int_T Last ; int_T
CircularBufSize ; int_T MaxNewBufSize ; } mhd233skah ; int_T mkvvheiule ;
int8_T f5ocuublly ; int8_T mzkce2qaq4 ; boolean_T jxxnycvq5b ; } ko3spaxozf ;
typedef struct { real_T gpfz5lyx2m ; } ma2fogayey ; typedef struct { real_T
gpfz5lyx2m ; } ay22dub31i ; typedef struct { boolean_T gpfz5lyx2m ; }
chcq0jrzxu ; typedef struct { real_T gpfz5lyx2m ; } gnayiyoas1 ; typedef
struct { real_T gpfz5lyx2m ; } eu54bhwuy1 ; typedef struct { real_T
gpfz5lyx2m ; } n20t50ozah ; typedef struct { real_T lg02yuetgh ; real_T
myfqyw0xah ; } bc5epsbr1g ; typedef struct { char_T b_devicePluginPath_data [
4097 ] ; char_T b_converterPluginPath_data [ 4097 ] ; char_T
b_devicePluginPath_data_mbvzarwird [ 4097 ] ; char_T
b_converterPluginPath_data_cl54gopm0x [ 4097 ] ; char_T
b_devicePluginPath_data_kkiq3xxxve [ 4097 ] ; char_T
b_converterPluginPath_data_cxarnvbvui [ 4097 ] ; char_T
b_devicePluginPath_data_bhxxfovxdy [ 4097 ] ; char_T
b_converterPluginPath_data_pbm3vprmfu [ 4097 ] ; char_T
b_devicePluginPath_data_cv5hdgrwft [ 4097 ] ; char_T
b_converterPluginPath_data_fqdqrf4qbc [ 4097 ] ; char_T
b_devicePluginPath_data_g2mlkqadfk [ 4097 ] ; char_T
b_converterPluginPath_data_g1smspu5ke [ 4097 ] ; char_T
b_devicePluginPath_data_merlcviukg [ 4097 ] ; char_T
b_converterPluginPath_data_nz4o0shxby [ 4097 ] ; char_T
b_devicePluginPath_data_ppxrqq0gsf [ 4097 ] ; char_T
b_converterPluginPath_data_llw0u2ae0v [ 4097 ] ; char_T
b_devicePluginPath_data_jwzvbuczlb [ 4097 ] ; char_T
b_converterPluginPath_data_dhmrxtyqop [ 4097 ] ; real_T ogv0hqbc0v ; real_T
itep2cp1lr ; real_T n5wofc3qzn ; real_T dnmbnvwgnn ; real_T ekx2il22sq ;
real_T lfyoajjoov ; real_T c4ftneuvto ; real_T i02tp5e4kx ; real_T i4gzufvg2o
; real_T oat2j1cdmr ; real_T f3cfi33ckq [ 3 ] ; real_T ar0maajlk1 [ 4 ] ;
real_T ffrk0arvuj [ 4 ] ; real_T jgbgzpoimw [ 4 ] ; real_T fa4tex3clw ;
real_T ourzhmbhxo ; real_T akkogh4jqq [ 4 ] ; real_T ot40ylkwss ; real_T
i4hl234ghn [ 4 ] ; real_T dthfzyfxl1 ; real_T kc3zkzq04l [ 4 ] ; real_T
dry0nus1xs ; real_T k3oq3s3csw [ 4 ] ; real_T h1bfw4mfph [ 4 ] ; real_T
iwrukye3jl [ 4 ] ; real_T ey1q3xu0lc [ 4 ] ; real_T emq2dotgho [ 4 ] ; real_T
mvcrznjron [ 4 ] ; real_T onrzer12ny ; real_T be3ao5uz45 [ 4 ] ; real_T
jnu2o2ohlf ; real_T ph3wfwuw0a [ 4 ] ; real_T nmelawslmy [ 32 ] ; real_T
lxvkuoukln ; real_T hrdqdctvd1 ; real_T hmdkilbcvx ; real_T ngjxcninap ;
real_T jbbxe2pdku ; real_T de0nng0phx ; real_T dp1i4plzou ; real_T eivvl1m4hd
; real_T kzbjnu5ir0 ; real_T diudjld3ik [ 4 ] ; real_T i5rppcmhk2 ; real_T
ltmtx4erjn [ 4 ] ; real_T o5azafcspd ; real_T fzpun12aws [ 4 ] ; real_T
g1qpvoo0jv [ 4 ] ; real_T ba3yfgxwar ; real_T hmrhx240bh [ 4 ] ; real_T
c0k2ql1ggt ; real_T an5klzinss [ 4 ] ; real_T kmjh2ajyri ; real_T hvjbih3kg0
[ 4 ] ; real_T clbsllgypn ; real_T dwgocwledf [ 12 ] ; real_T i22j5suvad ;
real_T ap41bnz03r ; real_T gdgah2322t ; real_T hyvw5umm1h ; real_T kbfxbjrvx2
; real_T gjncx1h3q0 ; real_T fn5g5hn5hh ; real_T gctlsc335z ; real_T
jtioi3ne2g ; real_T pnjblhzfzo ; real_T f2fszijaiw ; real_T gvg4xc0ac0 ;
real_T es4bqngkg5 ; real_T egpzrdyvg0 ; real_T csfgljteoe ; real_T ai4p4eha4n
; real_T pliozg1xgh ; real_T ltvavv2zft ; real_T oht5khzcw2 ; real_T
pf31u1nqv1 ; real_T d3mmobimwn [ 3 ] ; real_T do5oka0wds ; real_T jnjvdwqqkt
; real_T azjts1vf53 ; real_T ba0jey3h4s ; real_T ixrca4gvcu ; real_T
kefkawz32b ; real_T hb2dyagymm ; real_T hdt5wzjysu ; real_T kigwmdrdyn ;
real_T fyrrvjxdzu ; real_T dgn5mb5t4h ; real_T l4pseuh5cj [ 3 ] ; real_T
cfb11ry1bi ; real_T gkqubxp0f5 ; real_T idnkflva4w ; real_T jmuly40v2l ;
real_T ibusrur2xd ; real_T gv1pmtvbsw ; real_T kb2x5jvixz ; real_T flsufuzn5e
; real_T abtgoiwohv ; real_T beduxw1ymu ; real_T forfib4qci ; real_T
bwvbzfbmcs ; real_T kl12oswm44 ; real_T np3le0nu3v ; real_T ftetyclgts ;
real_T ewb0dzaoy0 ; real_T g3xlqrt005 ; real_T osijmtr312 ; real_T cd1ftn4bta
; real_T berle1tvva [ 3 ] ; real_T h2jjz5a2qv ; real_T l5sma525nd [ 3 ] ;
real_T nexcdsgn2d ; real_T cryrla5ffh ; real_T knh4j1bnlk ; real_T g21zmwtqwk
; real_T i5nqw2ut0x ; real_T oymf0dlluq ; real_T grcc0yhyld ; real_T
dpuw5qb1ej ; real_T ob2or5fclb ; real_T e3rhmc0eis ; real_T fmw0dq0q0b ;
real_T i4zj4rwo33 ; real_T pyr32xmcoi ; real_T gsi0x02kmw ; real_T oyzu5df1pd
; real_T enu2mz0pbm ; real_T czk4abpynu ; uint32_T ivrji15px1 ; uint32_T
ikmmb55ued ; uint32_T l55rxlojo5 ; uint32_T fxnzenz0t0 ; uint32_T lk4jtllnjp
; uint32_T jwg3jowgsx ; uint32_T ir24iovz05 ; boolean_T e2rdvlaate ;
boolean_T djsocqavgy ; boolean_T pwx4wsv4my ; boolean_T oq1lllfohm ;
boolean_T nsflzt2yei ; boolean_T jvfom1um4l ; boolean_T flf4k30byb ;
boolean_T hm05lfzr5e ; f3peczma5t bmnpezgtfw ; lvnb54qgr2 ad2zto0ceq ;
f3peczma5t oy0o2e1tch ; lvnb54qgr2 ine2cb2czx ; f3peczma5t ceg2xz1h3k ;
lvnb54qgr2 f5dx3nomiq ; f3peczma5t niwklhwsx3v ; lvnb54qgr2 dcv1n5znmuv ; } B
; typedef struct { dfwqypff4m cml5jfi20y ; dfwqypff4m mhmstimj0b ; dfwqypff4m
kntnmaf2k0 ; dfwqypff4m kwcc2dn5eb ; dfwqypff4m hnx04unhpe ; mu3t5m1h4s
dudloqqeo4 ; mu3t5m1h4s gqpntl3qzq ; mu3t5m1h4s ixe520xgwg ; mu3t5m1h4s
di0bxs2fw4 ; real_T lleaa2bu3k ; real_T mhdsbfag3p ; real_T dnpambpqv0 ;
real_T irtn1pigh1 ; real_T pjw5fg5uo2 ; real_T mnnhpr22z4 ; real_T lmayfj3d40
; real_T ldsnwmeuov ; real_T eumyrp5pyl [ 2 ] ; real_T jxnrobm0ap [ 2 ] ;
real_T d5um3n4xta [ 2 ] ; real_T i4rkudpol2 ; real_T mnxn4u1r32 ; real_T
ejizxh3xbq [ 2 ] ; real_T j0j3gkyaz4 ; real_T lmdt0p1zhx ; real_T jpqy31tugr
[ 2 ] ; real_T dflcaojudt ; real_T iigab0hdaa ; real_T akeuyokorb [ 2 ] ;
real_T jmszhlo2dw [ 2 ] ; real_T nprei0xhbm [ 2 ] ; real_T drw25ppflg [ 2 ] ;
real_T gyvu0bzqc2 [ 2 ] ; real_T kqrjzmxmmj [ 2 ] ; real_T kkjbzurbd4 [ 2 ] ;
real_T cw143vujbc ; real_T lnvjgcmtya ; real_T n21jehczyz [ 2 ] ; real_T
bpekxkgz5r ; real_T m4njp3jixa ; real_T csy2ievxof [ 2 ] ; real_T bd1snjdvvz
[ 495 ] ; real_T e1v1lccx05 ; real_T mbily23r2x ; real_T pqpdae1rkg ; real_T
phvkytgqfg [ 2 ] ; real_T ifcf4n4s50 [ 2 ] ; real_T gk2gihlorz ; real_T
nsbxtmm1cn [ 2 ] ; real_T a3g1n3kium [ 2 ] ; real_T hp1lyjf2r0 ; real_T
gzhstadlci [ 2 ] ; real_T ccgn2qrmeh ; real_T bx22px25rp [ 2 ] ; real_T
hln4rpfipj ; real_T o1yfo40v0b [ 2 ] ; real_T mnjjjealba [ 131 ] ; real_T
drp2s1fkbw ; real_T nqs0e4qiyi ; real_T hx3x1whwix ; real_T ndjycy0ncu ;
real_T gdarws5cet ; real_T os4eodixdj ; real_T knkvo1aqav ; real_T ecexmjp4cp
; real_T mbhhqhviac ; real_T jzzoqjidxr ; real_T k54sskerfg ; real_T
m0gn5rj2kr ; real_T hy4y4azdi4 ; real_T eiwgc3nri0 ; real_T bgbumsdjr3 ;
real_T amrbuea2lh ; real_T gqklbmgxqa ; real_T ewtzj1ulsa ; real_T e3hszyant0
[ 14 ] ; real_T jxnpnaq25g [ 7 ] ; real_T jvb3vjuzk4 ; real_T kq3kho1kqh ;
real_T enl4e2rnxb ; real_T nc1x4jgsma ; real_T kii05o3yax ; real_T mg4cbnlg4c
; real_T kihvbrbcpv ; real_T prx0yypsvk ; real_T lsdqnk4xlu ; real_T
ix0hnlqu2r ; real_T bv3syfxdof ; real_T fg2hqk5r45 ; real_T dwhdkxhrtq ;
real_T nb0nsgoo0u ; real_T nu3wxhpd51 ; real_T pfubnfutaq ; real_T cqc0irro5b
; real_T h4l0ou2ddg ; real_T eb5mx31pjn ; real_T ezlzuq3fbv ; real_T
d4faujrfth ; real_T kphwtawaqz ; real_T hvukvjq53j ; real_T ks53dh003g ;
real_T clmqb1pdfv ; real_T gew3kluww1 ; struct { void * TimePtr ; void *
DataPtr ; void * RSimInfoPtr ; } ciq1zaxdkw ; void * be221z1e1o ; void *
bobjb1gwl3 ; void * om3futd4ar ; void * fyybdlvdts ; struct { void *
LoggedData ; } mlpq2qtz1m ; void * i2hdj1parb ; void * bssh5wu3k0 ; void *
fcgov4gdnu ; void * f22kwc3yyn ; void * j5j3pnskwr ; void * nnylulku3q [ 2 ]
; void * pcl4ti3bhu [ 2 ] ; void * hocinu3cdc [ 2 ] ; void * nlsw5gkqqh [ 2 ]
; struct { void * AQHandles [ 8 ] ; } l2gaomszid ; struct { void * AQHandles
[ 13 ] ; } n4nsnzk31c ; struct { void * AQHandles [ 9 ] ; } fj3is30pqt ;
struct { void * AQHandles [ 3 ] ; } jil25orid4 ; struct { void * AQHandles ;
} dwazaymsmu ; struct { void * AQHandles [ 2 ] ; } fuzg1wrtyn ; struct { void
* AQHandles [ 8 ] ; } jjbfkypoxr ; uint32_T irqpk4eujy ; uint32_T n053elo50a
; uint32_T akcaxq4eds ; uint32_T bevg3qw0v1 ; uint32_T iwis52ytjn ; uint32_T
ft2syetfwj ; uint32_T f2zcb1kdcc ; int32_T fttgqbbz2t ; int32_T pzq0qcfe1g ;
int32_T ocuc0fx3yt ; int32_T j2iveckht0 ; int32_T ov0wafkzaq ; int32_T
iczzdtqy5e ; int32_T ad3m1g22te ; int32_T inbicjhyb2 ; int32_T diztvqoynn ;
int32_T lnwmgfkxv2 ; int32_T ffyc0jrq3l ; struct { int_T PrevIndex ; }
hobzuhirjy ; int_T nav4ts0xbw ; int_T mk2icbigfr ; int8_T jpo2cxovr2 ; int8_T
hvru5zoyw2 ; uint8_T jewpplfdpv ; uint8_T ks13g0z1fz ; uint8_T i3kbf35ki2 ;
uint8_T kygfiwzyjy ; uint8_T jbtrltpzom ; uint8_T ils0ktw10b ; uint8_T
iaa5doa1i3 ; uint8_T baxj4vfhht ; uint8_T nqncny2lp3 ; uint8_T eiyaxzreeq ;
uint8_T aklj53pmll ; uint8_T k2t41dz4ml ; uint8_T mwatrxyd41 ; uint8_T
fp2ysmwzwb ; uint8_T ean3ada2te ; boolean_T lh2z4v1vt3 ; boolean_T kbadzhl2q2
; boolean_T omubgfroil ; boolean_T d4i31jxdbs ; boolean_T pzjsealmzb ;
boolean_T pnr3woeyee ; boolean_T hk2ma0nauv ; boolean_T o01dcxciro ;
boolean_T cw4uypxdhg ; boolean_T ods4qrghxn ; boolean_T p23lyrh5pj ;
boolean_T dq35m12czr ; boolean_T juodv5kdgu ; boolean_T ip4xwb00nz ;
boolean_T fa3mzqv20e ; boolean_T hwri2skcao ; boolean_T jxww0n1r1s ;
boolean_T jn0jhxlxbq ; boolean_T pf02qi5htd ; boolean_T dbvvl5p34e ;
boolean_T mwjzgrgnkd ; boolean_T lg1wlc23qz ; boolean_T mutwygyu4c ;
boolean_T clkz1keqp1 ; boolean_T o04ugsqef4 ; boolean_T iqlep0aexa ;
boolean_T nhdda3nybj ; boolean_T iunmcluswp ; boolean_T h1ccnwgcjr ;
boolean_T bzpmcehbnd ; boolean_T g5spffg4ga ; boolean_T lobb2dlaih ;
boolean_T kecct2hx35 ; boolean_T nhuq4j3u3v ; boolean_T lzvl3m5s3c ;
boolean_T i1t2u0w2xh ; boolean_T dtjity5osd ; boolean_T ptv1rv5avw ;
boolean_T ky5fxtm0ia ; boolean_T klbtwaqkk1 ; ko3spaxozf bmnpezgtfw ;
ggaiosjvf2 ad2zto0ceq ; ko3spaxozf oy0o2e1tch ; ggaiosjvf2 ine2cb2czx ;
ko3spaxozf ceg2xz1h3k ; ggaiosjvf2 f5dx3nomiq ; ko3spaxozf niwklhwsx3v ;
ggaiosjvf2 dcv1n5znmuv ; } DW ; typedef struct { ma2fogayey bmnpezgtfw ;
jl0m24xehf ad2zto0ceq ; ma2fogayey oy0o2e1tch ; jl0m24xehf ine2cb2czx ;
ma2fogayey ceg2xz1h3k ; jl0m24xehf f5dx3nomiq ; ma2fogayey niwklhwsx3v ;
jl0m24xehf dcv1n5znmuv ; } X ; typedef struct { ay22dub31i bmnpezgtfw ;
gemwkalucd ad2zto0ceq ; ay22dub31i oy0o2e1tch ; gemwkalucd ine2cb2czx ;
ay22dub31i ceg2xz1h3k ; gemwkalucd f5dx3nomiq ; ay22dub31i niwklhwsx3v ;
gemwkalucd dcv1n5znmuv ; } XDot ; typedef struct { chcq0jrzxu bmnpezgtfw ;
cmoybd515s ad2zto0ceq ; chcq0jrzxu oy0o2e1tch ; cmoybd515s ine2cb2czx ;
chcq0jrzxu ceg2xz1h3k ; cmoybd515s f5dx3nomiq ; chcq0jrzxu niwklhwsx3v ;
cmoybd515s dcv1n5znmuv ; } XDis ; typedef struct { gnayiyoas1 bmnpezgtfw ;
gosl0zw24r ad2zto0ceq ; gnayiyoas1 oy0o2e1tch ; gosl0zw24r ine2cb2czx ;
gnayiyoas1 ceg2xz1h3k ; gosl0zw24r f5dx3nomiq ; gnayiyoas1 niwklhwsx3v ;
gosl0zw24r dcv1n5znmuv ; } CStateAbsTol ; typedef struct { eu54bhwuy1
bmnpezgtfw ; cbhzhntz32 ad2zto0ceq ; eu54bhwuy1 oy0o2e1tch ; cbhzhntz32
ine2cb2czx ; eu54bhwuy1 ceg2xz1h3k ; cbhzhntz32 f5dx3nomiq ; eu54bhwuy1
niwklhwsx3v ; cbhzhntz32 dcv1n5znmuv ; } CXPtMin ; typedef struct {
n20t50ozah bmnpezgtfw ; bph2drokld ad2zto0ceq ; n20t50ozah oy0o2e1tch ;
bph2drokld ine2cb2czx ; n20t50ozah ceg2xz1h3k ; bph2drokld f5dx3nomiq ;
n20t50ozah niwklhwsx3v ; bph2drokld dcv1n5znmuv ; } CXPtMax ; typedef struct
{ real_T aqcwaxxbdp ; real_T kbve0fv5hf ; bc5epsbr1g bmnpezgtfw ; bc5epsbr1g
oy0o2e1tch ; bc5epsbr1g ceg2xz1h3k ; bc5epsbr1g niwklhwsx3v ; } ZCV ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct eap0kti25e_ {
real_T Gain_Gain ; real_T Gain_Gain_ms31mt1rdg ; real_T integrator_IC ;
real_T TransportDelay_Delay ; real_T TransportDelay_InitOutput ; real_T
K1_Value ; real_T Memory_InitialCondition ; real_T integrator_IC_aeituu02hr ;
real_T TransportDelay_Delay_l3qrglhug0 ; real_T
TransportDelay_InitOutput_bzn0xjgt50 ; real_T K1_Value_bbfli4acqa ; real_T
Memory_InitialCondition_bmzu2ltej4 ; real_T sinwt_Amp ; real_T sinwt_Bias ;
real_T sinwt_Freq ; real_T sinwt_Phase ; real_T coswt_Amp ; real_T coswt_Bias
; real_T coswt_Freq ; real_T coswt_Phase ; real_T RadDeg_Gain ; real_T
Gain_Gain_kprjukcypi ; } ; struct eihibnekho_ { real_T Gain_Gain ; real_T
integrator_IC ; real_T TransportDelay_Delay ; real_T
TransportDelay_InitOutput ; real_T K1_Value ; real_T Memory_InitialCondition
; real_T Saturationtoavoidnegativesqrt_UpperSat ; real_T
Saturationtoavoidnegativesqrt_LowerSat ; } ; struct P_ {
struct_AFnjoI7EtZZSooCsoe6EE Bat ; real_T Pref1 ; real_T Pref2 ; real_T Qref1
; real_T Qref2 ; real_T droopFC1 ; real_T droopFC2 ; real_T droopP1 ; real_T
droopP2 ; real_T droopQ1 ; real_T droopQ2 ; real_T timeACLoadCurtail ; real_T
timeSolarCurtail ; real_T ActivePowerReference_OutValues [ 6 ] ; real_T
ActivePowerReference1_OutValues [ 6 ] ; real_T
ActivePowerReference_OutValues_bebnwmzwy2 [ 7 ] ; real_T
ReactivePowerReference_OutValues [ 3 ] ; real_T
RepeatingSequenceInterpolated_OutValues [ 4 ] ; real_T Qref_OutValues [ 4 ] ;
real_T ActivePowerReference1_OutValues_klrehomfur [ 6 ] ; real_T
ActivePowerReference_TimeValues [ 6 ] ; real_T
ActivePowerReference1_TimeValues [ 6 ] ; real_T
ActivePowerReference_TimeValues_hsfcpyq3q0 [ 7 ] ; real_T
ReactivePowerReference_TimeValues [ 3 ] ; real_T
RepeatingSequenceInterpolated_TimeValues [ 4 ] ; real_T Qref_TimeValues [ 4 ]
; real_T ActivePowerReference1_TimeValues_bd5quwtzfs [ 6 ] ; real_T
RMS_TrueRMS ; real_T RMS1_TrueRMS ; real_T RMS2_TrueRMS ; real_T RMS3_TrueRMS
; uint32_T LimitedCounter_uplimit ; uint32_T
LimitedCounter_uplimit_a5gapu1xqz ; uint32_T
LimitedCounter_uplimit_fr3ltu5dye ; uint32_T
LimitedCounter_uplimit_jdyhzl0pxe ; uint32_T
LimitedCounter_uplimit_nv2ad4m4px ; uint32_T
LimitedCounter_uplimit_fa43daliud ; uint32_T
LimitedCounter_uplimit_giwpzn03c5 ; real_T Switch_Threshold ; real_T
Gain_Gain ; real_T Gain1_Gain ; real_T Gain_Gain_cokqivx3ng ; real_T
Gain1_Gain_dego4ryaq1 ; real_T Gain_Gain_elg253mago ; real_T
Gain1_Gain_lxf1kzrtbn ; real_T Gain_Gain_ejhgmi3ncs ; real_T
Gain1_Gain_kg0lu4a11x ; real_T UnitDelay_InitialCondition ; real_T
UnitDelay2_InitialCondition ; real_T Step2_Y0 ; real_T Step2_YFinal ; real_T
Step3_Y0 ; real_T Step3_YFinal ; real_T SampleTimeMath_WtEt ; real_T
Gain2_Gain ; real_T SampleTimeMath_WtEt_nu0w3zkaov ; real_T Gain3_Gain ;
real_T Gain5_Gain ; real_T Gain6_Gain ; real_T DiscreteTimeIntegrator_gainval
; real_T DiscreteTimeIntegrator_IC ; real_T Gain4_Gain ; real_T
DiscreteTimeIntegrator1_gainval ; real_T DiscreteTimeIntegrator1_IC ; real_T
UnitDelay_InitialCondition_kqib5fg144 ; real_T
DiscreteTimeIntegrator3_gainval ; real_T DiscreteTimeIntegrator3_IC ; real_T
UnitDelay1_InitialCondition ; real_T DiscreteTimeIntegrator2_gainval ; real_T
DiscreteTimeIntegrator2_IC ; real_T Gain1_Gain_gnef1nrdfd ; real_T
UnitDelay_InitialCondition_hbbfrekxgi ; real_T SampleTimeMath_WtEt_kc032qt0r2
; real_T Switch_Threshold_lhpn1uq5v2 ; real_T
DiscreteTimeIntegrator_gainval_hugtrzkn4q ; real_T
DiscreteTimeIntegrator_UpperSat ; real_T DiscreteTimeIntegrator_LowerSat ;
real_T FromWorkspace_Time0 [ 10000 ] ; real_T FromWorkspace_Data0 [ 10000 ] ;
real_T DiscreteTimeIntegrator_gainval_pzbreotgy5 ; real_T
DiscreteTimeIntegrator_IC_as0hk5p0tf ; real_T
UnitDelay_InitialCondition_dbdlifayvx ; real_T
DiscreteTimeIntegrator_gainval_ne5jwwt53f ; real_T
DiscreteTimeIntegrator_IC_d4puklsxam ; real_T
UnitDelay_InitialCondition_o42cm44ucv ; real_T SampleTimeMath_WtEt_l5pabormle
; real_T DiscreteTimeIntegrator_gainval_hthrzu5hza ; real_T
DiscreteTimeIntegrator_IC_lphwc0eks5 ; real_T
UnitDelay_InitialCondition_kgaphbkgph ; real_T
DiscreteTimeIntegrator_gainval_dwjrigelj0 ; real_T
DiscreteTimeIntegrator_IC_izlyzkvwk0 ; real_T
UnitDelay_InitialCondition_nxouw4fmzy ; real_T
DiscreteTimeIntegrator_gainval_mzosb4boys ; real_T
DiscreteTimeIntegrator_IC_ndnh2qpnoo ; real_T Switch1_Threshold ; real_T
Vref_Value ; real_T Switch_Threshold_l0ksha3rpb ; real_T Switch2_Threshold ;
real_T Switch1_Threshold_dppanslnos ; real_T
UnitDelay1_InitialCondition_msjs0amalu ; real_T Switch_Threshold_kxk3rwkxpp ;
real_T Switch2_Threshold_hv3sf2fjqq ; real_T Gain1_Gain_f0wcat0bhl ; real_T
Gain2_Gain_pnyouh4nr5 ; real_T PowerTransferLimitW_Value ; real_T
SampleTimeMath_WtEt_okj5ol00ye ; real_T UnitDelay_InitialCondition_eem2mixovl
; real_T DiscreteTimeIntegrator_gainval_b1zgwfhydp ; real_T
DiscreteTimeIntegrator_IC_it5leog4d0 ; real_T
DiscreteTimeIntegrator_UpperSat_ncic3n3zsi ; real_T
DiscreteTimeIntegrator_LowerSat_atqd25vkki ; real_T
DiscreteTimeIntegrator_gainval_dhjlh0z0on ; real_T
DiscreteTimeIntegrator_IC_fncm3u0aqk ; real_T
DiscreteTimeIntegrator_UpperSat_oatrdvkozn ; real_T
DiscreteTimeIntegrator_LowerSat_joabkbxppi ; real_T
DiscreteTimeIntegrator_gainval_d3mb3dezhy ; real_T
DiscreteTimeIntegrator_IC_aefe120qnx ; real_T
DiscreteTimeIntegrator_UpperSat_aoe5l52jc3 ; real_T
DiscreteTimeIntegrator_LowerSat_anwtlnnvyp ; real_T
DiscreteTimeIntegrator_gainval_arnhnmpwrf ; real_T
DiscreteTimeIntegrator_IC_kcon4m0msm ; real_T ACLoadLimitW_Value ; real_T
Gain_Gain_fra5iqtqqa ; real_T Gain1_Gain_mo4nf0dniz ; real_T
SampleTimeMath_WtEt_hcihb2t1cf ; real_T Gain2_Gain_i2sa11c4ji ; real_T
Gain3_Gain_hsq3e4cdrg ; real_T Gain_Gain_apoljudo5s ; real_T FCPVlimitW_Value
; real_T SampleTimeMath_WtEt_clhmrxjzgb ; real_T Gain3_Gain_hmsoxpgsx5 ;
real_T DiscreteTimeIntegrator_gainval_bdsxbltwql ; real_T
DiscreteTimeIntegrator_IC_ptwc2dagcm ; real_T Gain4_Gain_hvjo1v1et3 ; real_T
DiscreteTimeIntegrator_gainval_p0p2jxqvmr ; real_T
DiscreteTimeIntegrator_IC_emgr2bsszy ; real_T Switch1_Threshold_mpiqdklntk ;
real_T Vref_Value_aqcie3me1y ; real_T Switch_Threshold_nd0e1aegte ; real_T
Switch2_Threshold_mqicbyegmp ; real_T Switch1_Threshold_clak4nhhfz ; real_T
Switch_Threshold_diazeczrov ; real_T Switch2_Threshold_jdxfw1j1gp ; real_T
Step_Time ; real_T Step_Y0 ; real_T Step_YFinal ; real_T Step1_Time ; real_T
Step1_Y0 ; real_T Step1_YFinal ; real_T sinwt_Amp ; real_T sinwt_Bias ;
real_T sinwt_Freq ; real_T sinwt_Phase ; real_T sinwt_Hsin ; real_T
sinwt_HCos ; real_T sinwt_PSin ; real_T sinwt_PCos ; real_T Integ4_gainval ;
real_T Integ4_IC ; real_T K1_Value ; real_T SFunction_P1_Size [ 2 ] ; real_T
SFunction_P1 ; real_T SFunction_P2_Size [ 2 ] ; real_T SFunction_P2 ; real_T
SFunction_P3_Size [ 2 ] ; real_T SFunction_P3 ; real_T SFunction_P4_Size [ 2
] ; real_T SFunction_P4 ; real_T K2_Value ; real_T
UnitDelay_InitialCondition_drktyrbsqy ; real_T
UnitDelay1_InitialCondition_cn5ti3tsis ; real_T coswt_Amp ; real_T coswt_Bias
; real_T coswt_Freq ; real_T coswt_Phase ; real_T coswt_Hsin ; real_T
coswt_HCos ; real_T coswt_PSin ; real_T coswt_PCos ; real_T
Integ4_gainval_dif0gtnfag ; real_T Integ4_IC_jxlwqtjhnt ; real_T
K1_Value_kfw4t2eirb ; real_T SFunction_P1_Size_k4lxoy4dhs [ 2 ] ; real_T
SFunction_P1_ajt25e0xwi ; real_T SFunction_P2_Size_lhjn1lwdkx [ 2 ] ; real_T
SFunction_P2_cq5mvmcl3u ; real_T SFunction_P3_Size_h31jztfyng [ 2 ] ; real_T
SFunction_P3_oppohoj2cm ; real_T SFunction_P4_Size_n2x5c15nwd [ 2 ] ; real_T
SFunction_P4_djfwwj2s2w ; real_T K2_Value_nuvgxvmdwb ; real_T
UnitDelay_InitialCondition_kkt42sn405 ; real_T
UnitDelay1_InitialCondition_e1p1xveper ; real_T RadDeg_Gain ; real_T
sinwt_Amp_eorfgf5sm0 ; real_T sinwt_Bias_dcnorrdhay ; real_T
sinwt_Freq_di4t5dkrcf ; real_T sinwt_Phase_h11uiajhr4 ; real_T
sinwt_Hsin_ehtovoa0ay ; real_T sinwt_HCos_aj2hvrht30 ; real_T
sinwt_PSin_eiejoqflud ; real_T sinwt_PCos_pzhfqdg3tf ; real_T
Integ4_gainval_dnkgiurtgb ; real_T Integ4_IC_opfkscr5gt ; real_T
K1_Value_hjflks2vsf ; real_T SFunction_P1_Size_f34k2j2roc [ 2 ] ; real_T
SFunction_P1_bvxq04bbyk ; real_T SFunction_P2_Size_hytahn5vyy [ 2 ] ; real_T
SFunction_P2_f3e12pt1ry ; real_T SFunction_P3_Size_jlps2lq2b4 [ 2 ] ; real_T
SFunction_P3_koxuw345fj ; real_T SFunction_P4_Size_c3pkogyr4b [ 2 ] ; real_T
SFunction_P4_oads40uu3f ; real_T K2_Value_cxg5pk3ncp ; real_T
UnitDelay_InitialCondition_gq50ves3cl ; real_T
UnitDelay1_InitialCondition_pl1y0ebaxq ; real_T coswt_Amp_lbfz01iwfo ; real_T
coswt_Bias_bq2gp0a5iq ; real_T coswt_Freq_aawhnenrvi ; real_T
coswt_Phase_pqts5g0duj ; real_T coswt_Hsin_gqtzjh0fwi ; real_T
coswt_HCos_kmd3crul1p ; real_T coswt_PSin_d2rsmyjcjt ; real_T
coswt_PCos_oy0jknuvkw ; real_T Integ4_gainval_g02zmp54as ; real_T
Integ4_IC_lenc50w2j1 ; real_T K1_Value_hw1q0jovpo ; real_T
SFunction_P1_Size_j34unk2elg [ 2 ] ; real_T SFunction_P1_k0xtmc3yk1 ; real_T
SFunction_P2_Size_e2y1cqae0x [ 2 ] ; real_T SFunction_P2_c0goemzszk ; real_T
SFunction_P3_Size_lhlddfll4p [ 2 ] ; real_T SFunction_P3_ht4brw1rzb ; real_T
SFunction_P4_Size_fousroynlp [ 2 ] ; real_T SFunction_P4_mlffkwzqo4 ; real_T
K2_Value_j0gc4yevhh ; real_T UnitDelay_InitialCondition_jhoo2f0is3 ; real_T
UnitDelay1_InitialCondition_cnkmvdyb1i ; real_T RadDeg_Gain_ldsdhagfjb ;
real_T DiscreteTimeIntegrator_gainval_arhh4ywx41 ; real_T
DiscreteTimeIntegrator_IC_ho0ck4cozt ; real_T Iph_Value ; real_T Iph_1_Value
; real_T Iph_2_Value ; real_T Iph_3_Value ; real_T EnableMPPT_Time ; real_T
EnableMPPT_Y0 ; real_T EnableMPPT_YFinal ; real_T
DiscreteTimeIntegrator_gainval_ii5s4v2ynz ; real_T
Switch_Threshold_imhbg1j1p2 ; real_T Gain_Gain_hqik33ck5s ; real_T
Constant1_Value ; real_T scale_Gain ; real_T Saturation_UpperSat ; real_T
Saturation_LowerSat ; real_T Gain1_Gain_haolbh2dzl ; real_T
Constant1_Value_bphqnvpnc3 ; real_T scale_Gain_blz4hmka40 ; real_T
Saturation_UpperSat_bpb4gngjmz ; real_T Saturation_LowerSat_n1ldcwolpz ;
real_T Gain1_Gain_kq0niozbc5 ; real_T Constant2_Value ; real_T
Constant5_Value ; real_T Constant1_Value_iwvlwkpu45 ; real_T Constant4_Value
; real_T Constant1_Value_ak1tppnn4h ; real_T Constant2_Value_mlfpfk2wxw ;
real_T Constant3_Value ; real_T Constant4_Value_pp4jqboeta ; real_T
Constant1_Value_el0exx1zb4 ; real_T Constant2_Value_grs2c2ajt1 ; real_T
Constant3_Value_nxziieyoht ; real_T Constant4_Value_bicozyhrjm ; real_T
Constant1_Value_mgesvrfwfg ; real_T Constant2_Value_hi0sz15soo ; real_T
Constant1_Value_o21htlaenk ; real_T Constant2_Value_c2avcu1oyz ; real_T
Constant3_Value_cehxtfqlkd ; real_T Constant5_Value_dnegzne0fh ; real_T
Constant1_Value_gx4tpnvf2d ; real_T Constant2_Value_haiwdpybnj ; real_T
Constant3_Value_cqvo4zhnvg ; real_T Constant4_Value_luojtmutao ; real_T
Constant1_Value_ptyw2e1opn ; real_T Constant2_Value_dgwwgqpu0w ; real_T
Constant3_Value_di41p4mew3 ; real_T Constant4_Value_fcc0mksgc2 ; real_T
Constant1_Value_old4tikkcg ; real_T Constant2_Value_ki5yoscsu1 ; real_T
RTP_BF779111_TFIXED_Value ; real_T PV_Curtailed_Power_Value ; uint32_T
Output_InitialCondition ; uint32_T Output_InitialCondition_gijybkc2ne ;
uint32_T Output_InitialCondition_klxjybnem2 ; uint32_T
Output_InitialCondition_a4gjcwoh4j ; uint32_T
Output_InitialCondition_oqqdnbt5v5 ; uint32_T
Output_InitialCondition_ogqjollakr ; uint32_T
Output_InitialCondition_jmgtafssty ; uint32_T FixPtConstant_Value ; uint32_T
Constant_Value ; uint32_T FixPtConstant_Value_hreeaytxmc ; uint32_T
Constant_Value_ahpgrt3log ; uint32_T FixPtConstant_Value_jtdlfhjcpd ;
uint32_T Constant_Value_fr5arljayi ; uint32_T FixPtConstant_Value_g2sv4psui1
; uint32_T Constant_Value_l3xfz1qnx5 ; uint32_T
FixPtConstant_Value_bkqusysitf ; uint32_T Constant_Value_nac23f3nuj ;
uint32_T FixPtConstant_Value_gn5e323mfz ; uint32_T Constant_Value_nzdcxafoxr
; uint32_T FixPtConstant_Value_oxp0ywiny2 ; uint32_T
Constant_Value_opytlk1i4o ; uint8_T ManualSwitch_CurrentSetting ; eihibnekho
bmnpezgtfw ; eap0kti25e ad2zto0ceq ; eihibnekho oy0o2e1tch ; eap0kti25e
ine2cb2czx ; eihibnekho ceg2xz1h3k ; eap0kti25e f5dx3nomiq ; eihibnekho
niwklhwsx3v ; eap0kti25e dcv1n5znmuv ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern P rtP ; extern mxArray * mr_Microgrid_with_Utility_Connection_GetDWork
( ) ; extern void mr_Microgrid_with_Utility_Connection_SetDWork ( const
mxArray * ssDW ) ; extern mxArray *
mr_Microgrid_with_Utility_Connection_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
Microgrid_with_Utility_Connection_GetCAPIStaticMap ( void ) ; extern
SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
