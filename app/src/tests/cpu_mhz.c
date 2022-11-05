//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

#include "func.def"

static void mov512()
{
    asm volatile
    (
        MOV256
        MOV256
    );
}

static void mov1024()
{
    asm volatile
    (
        MOV256
        MOV256
        MOV256
        MOV256
    );
}

#define NCALLS 100000

// cpu_mhz
//
// Calculate CPU speed by measuring time taken for known number of instructions.
// All code should fit in cache in either case, so we should get max throughput.
// Overhead should be same in each case, and so can be cancelled out.
//
// MOV instruction is one cycle (same as M4), as documented here:
// https://developer.arm.com/documentation/ddi0439/b/Programmers-Model/Instruction-set-summary/Cortex-M4-instructions
// ... though it's possible that dual issue pipeline changes things?
//
// See also (MOV vs. NOP analysis):
// https://www.pabigot.com/arm-cortex-m/the-effect-of-the-arm-cortex-m-nop-instruction
int cpu_mhz(PlaydateAPI* pd)
{
    int mhz = 0;

    pd->system->resetElapsedTime();
    for (int c = 0; c < NCALLS; ++c)
    {
        mov512();
    }
    float t512 = pd->system->getElapsedTime();

    pd->system->resetElapsedTime();
    for (int c = 0; c < NCALLS; ++c)
    {
        mov1024();
    }
    float t1024 = pd->system->getElapsedTime();

    // Time for one MOV instruction should be difference between the
    // two timings divided by the difference in number of MOV instructions issued.
    double tMOV = (t1024 - t512)/(NCALLS * (1024 - 512));

    // Hz is 1/t (assuming one cycle per instruction), divide by 1M for MHz.
    mhz = (int)((1.0 / tMOV) / 1000000.0);

    return mhz;
}
