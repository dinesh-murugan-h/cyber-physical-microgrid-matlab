#ifndef struct__DifferentialClumpTag
#define struct__DifferentialClumpTag
typedef struct _DifferentialClumpTag { DifferentialClump mBase ; int32_T
mRefCnt ; PmAllocator mAlloc ; } _DifferentialClump ;
#else
typedef struct _DifferentialClumpTag _DifferentialClump ;
#endif
