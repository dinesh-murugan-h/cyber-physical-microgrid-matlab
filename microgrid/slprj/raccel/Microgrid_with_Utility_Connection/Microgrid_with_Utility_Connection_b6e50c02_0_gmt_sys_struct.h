#ifndef struct__GlobalMethodTableTag
#define struct__GlobalMethodTableTag
typedef struct _GlobalMethodTableTag { GlobalMethodTable mBase ; int32_T
mRefCnt ; PmAllocator mAlloc ; } _GlobalMethodTable ;
#else
typedef struct _GlobalMethodTableTag _GlobalMethodTable ;
#endif
