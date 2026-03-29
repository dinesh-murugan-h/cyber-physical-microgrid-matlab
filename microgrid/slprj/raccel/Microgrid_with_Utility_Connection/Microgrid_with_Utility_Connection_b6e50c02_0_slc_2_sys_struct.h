#ifndef struct__SwitchedLinearClumpTag
#define struct__SwitchedLinearClumpTag
typedef struct _SwitchedLinearClumpTag { SwitchedLinearClump mBase ; int32_T
mRefCnt ; PmAllocator mAlloc ; } _SwitchedLinearClump ;
#else
typedef struct _SwitchedLinearClumpTag _SwitchedLinearClump ;
#endif
