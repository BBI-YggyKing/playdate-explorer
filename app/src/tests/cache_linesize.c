//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#define BUFSIZE (4 * 1024 * 1024)
#define BYTESPERITEM sizeof(int)
#define MINSTEP BYTESPERITEM
#define MAXSTEP 256
#define DELTASTEP BYTESPERITEM

// cache_linesize
//
// Iterate through memory with various step sizes.
// Return cache line size (deduced from timings).
int cache_linesize(PlaydateAPI* pd)
{
    void* buf = NULL;
    buf = pd->system->realloc(buf, BUFSIZE);
    if (!buf)
    {
        pd->system->logToConsole("\tallocation failed");
        return 0;
    }

    pd->system->logToConsole("\tbuf @ 0x%08x", buf);
    memset(buf, 1, BUFSIZE);
    void* bufend = buf + BUFSIZE;

    pd->system->logToConsole("\tstride\ttime (ms)");
    float prevms = 0.0f;
    int linesize = 0;
    for (int step = MINSTEP; step <= MAXSTEP; step += DELTASTEP)
    {
        // Volatile so references inside the loop won't be optimized away, ensuring memory is actually accessed.
        volatile int acc = 0;

        pd->system->resetElapsedTime();
        for (void* b = buf; b < bufend; b += step)
        {
            acc += *((int*)b);
        }
        float ms = pd->system->getElapsedTime() * 1000.0f;              // convert to ms
        pd->system->logToConsole("\t%d\t%.2f", step, (double)ms);   // double to avoid implicit cast warning

        // 8% faster than previous iteration? If so we probably hit the cache line size.
        // No, there's nothing terribly principled about this, but it catches the correct result.
        if ((prevms > 0.0f) && (linesize == 0))
        {
            if ((prevms - ms)/prevms > 0.08f)
            {
                linesize = step - DELTASTEP;    // i.e. the previous step size, before we got faster
            }
        }
        prevms = ms;
    }

    pd->system->realloc(buf, 0);

    return linesize;
}
