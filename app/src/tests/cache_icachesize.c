//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#include "func.def"

#define NCALLS 50000            // each test will make the same number of function calls

static void func4k()
{
    asm volatile
    (
        MOV1024
        MOV1024
        MOV1024
        MOV1024
    );
}

// invalidateicache
//
// From https://developer.arm.com/documentation/ddi0489/d/initialization/about-initialization/initializing-and-enabling-the-l1-cache
static void invalidateicache()
{
#if 0
    // TODO: this isn't working - try running 4k of code instead
    asm volatile
    (
        "MOV r0, #0x0\n\t"
        "LDR r11, =0xE000EF50\n\t"
        "STR r0, [r11]\n\t"
        "DSB\n\t"
        "ISB\n\t"
    );
#else
    func4k();
#endif
}

// cache_icachesize
//
// Demonstrate size of instruction cache by jumping around unpredictably in instruction memory.
int cache_icachesize(PlaydateAPI* pd)
{
    int icachesize = 0;
    int funcsize =(char*)func2 - (char*)func1;
    int nfunctions = sizeof(functable)/sizeof(functable[0]);

    pd->system->logToConsole("\tfunc1 @ 0x%08x", func1);
    pd->system->logToConsole("\tcode size\ttime (ms)");
    for (int n = 1; n <= nfunctions; ++n)
    {
        // Insert n-th entry in function table at a random spot,
        // thus randomly sorting the first n entries, with the 
        // idea of giving the branch prediction logic a hard time.
        /*
        int insert = rand()%n;
        void* tmp = functable[insert];
        functable[insert] = functable[n-1];
        functable[n-1] = tmp;
        */

        invalidateicache();
        pd->system->resetElapsedTime();

        for (int c = 0; c < NCALLS; ++c)
        {
            functable[c%n]();
        }
        float ms = pd->system->getElapsedTime() * 1000.0f;
        int codesize = n * funcsize;
        pd->system->logToConsole("\t%d\t%.2f", codesize, (double)ms);
    }

    return icachesize;
}
