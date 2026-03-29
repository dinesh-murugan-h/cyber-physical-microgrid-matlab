#ifndef struct__SwitchedLinearSystemTag
#define struct__SwitchedLinearSystemTag
typedef struct _SwitchedLinearSystemTag { SwitchedLinearSystem mBase ;
int32_T mRefCnt ; PmAllocator mAlloc ; } _SwitchedLinearSystem ;
#else
typedef struct _SwitchedLinearSystemTag _SwitchedLinearSystem ;
#endif
