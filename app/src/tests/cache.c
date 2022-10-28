//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#define BUFSIZE (1024 * 1024)
#define MINSTEP sizeof(int)
#define MAXSTEP 256
#define DELTASTEP sizeof(int)
#define REPEATS 4

// Iterate through memory with various step sizes.
int cache_dcache_read(PlaydateAPI* pd)
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
    for (int step = MINSTEP; step <= MAXSTEP; step += DELTASTEP)
    {
        volatile int acc = 0;
        pd->system->resetElapsedTime();
        for (int i = 0; i < REPEATS; ++i)
        {
            for (void* b = buf; b < bufend; b += step)
            {
                acc += *((int*)b);
            }
        }
        float timer = pd->system->getElapsedTime() * 1000.0f;           // convert to ms
        pd->system->logToConsole("\t%d\t%.2f", step, (double)timer);    // double to avoid implicit cast warning
    }

    pd->system->realloc(buf, 0);

    return 1;
}
