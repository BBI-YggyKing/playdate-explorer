//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include "pd_api.h"

#define MAX (17*1024*1024)
#define MAXFRAGMENTS 16
#define BLOCKSIZE (4*1024)

// Find largest allocatable block of memory (multiple of BLOCKSIZE).
// Return its size.
int memory_maxalloc(PlaydateAPI* pd)
{
    int max = MAX;
    void* mem = NULL;

    do
    {
        mem = pd->system->realloc(mem, max);
        if (mem == NULL)
        {
            max = max - BLOCKSIZE;
        }
    } while (mem == NULL);

    pd->system->realloc(mem, 0);
    return max;    
}

// Find all allocatable blocks of memory (multiple of BLOCKSIZE).
// Return number of different allocations made.
int memory_fragments(PlaydateAPI* pd)
{
    int max = MAX;
    int n = 0;
    void* fragments[MAXFRAGMENTS];

    for (int i = 0; i < MAXFRAGMENTS; ++i, ++n)
    {
        void *mem = NULL;
        do
        {
            mem = pd->system->realloc(mem, max);
            if (mem == NULL)
            {
                max = max - BLOCKSIZE;
            }
        } while ((mem == NULL) && (max > 0));

        if (!mem)
            break;

        fragments[i] = mem;
    }

    for (int j = n - 1; j >= 0; --j)
    {
        pd->system->realloc(fragments[j], 0);
    }

    return n;
}
