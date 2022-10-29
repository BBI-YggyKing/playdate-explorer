//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#define CACHELINESIZE 32                        // as per cache_linesize test
#define MINBUFSIZE 32
#define MAXBUFSIZE (2 * 1024 * 1024)
#define STEPS (4 * MAXBUFSIZE / CACHELINESIZE)  // large enough to get good timings, at least MAXBUFSIZE / CACHELINESIZE

// cache_size
//
// Iterate through various amounts of memory, reading every cache
// line to see how many cache lines can be read quickly - i.e. how
// big is the cache.
//
// Return cache size (deduced from timings).
int cache_size(PlaydateAPI* pd)
{
    int cachesize = 0;
    void* buf = NULL;
    float prevms = 0.0f;
    pd->system->logToConsole("\tsize\ttime (ms)");
    for (int bufsize = MINBUFSIZE; bufsize <= MAXBUFSIZE; bufsize *= 2)
    {
        buf = pd->system->realloc(buf, bufsize);
        if (!buf)
        {
            pd->system->logToConsole("\tallocation failed");
            return 0;
        }

        memset(buf, 1, bufsize);
        int bufsizemask = bufsize - 1;  // works because powers of 2 (& cheaper than %)

        // Volatile so references inside the loop won't be optimized away, ensuring memory is actually accessed.
        volatile int acc = 0;
        pd->system->resetElapsedTime();
        for (int i = 0; i < STEPS; ++i)
        {
            int* p = (int *)((char *)buf + ((i * CACHELINESIZE) & bufsizemask));
            acc += *p;
        }

        float ms = pd->system->getElapsedTime() * 1000.0f;              // convert to ms
        pd->system->logToConsole("\t%d\t%.2f", bufsize, (double)ms);    // double to avoid implicit cast warning

        // 50% slower than previous iteration? If so we probably hit the cache line size.
        // No, there's nothing terribly principled about this, but it catches the correct result.
        if ((prevms > 0.0f) && (cachesize == 0))
        {
            if ((ms - prevms)/prevms > 0.5f)
            {
                cachesize = bufsize / 2;    // i.e. the previous buf size, before we got slower
            }
        }
        prevms = ms;

        buf = pd->system->realloc(buf, 0);
    }

    return cachesize;
}
