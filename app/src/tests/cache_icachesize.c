//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdlib.h>
#include "pd_api.h"

// Define enough 1K functions to be able to fill the instruction cache at least twice over.
// Cache is 4K (or so we expect to demonstrate) so 12 x 1K == 3 full caches, that should do it!
static void func1()
{
#include "func1k.def"
}
static void func2()
{
#include "func1k.def"
}
static void func3()
{
#include "func1k.def"
}
static void func4()
{
#include "func1k.def"
}
static void func5()
{
#include "func1k.def"
}
static void func6()
{
#include "func1k.def"
}
static void func7()
{
#include "func1k.def"
}
static void func8()
{
#include "func1k.def"
}
static void func9()
{
#include "func1k.def"
}
static void func10()
{
#include "func1k.def"
}
static void func11()
{
#include "func1k.def"
}
static void func12()
{
#include "func1k.def"
}

#define NCALLS 10000            // each test will make the same number of function calls

// cache_icachesize
//
// Demonstrate size of instruction cache with functions of different lengths.
int cache_icachesize(PlaydateAPI* pd)
{
    int icachesize = 0;

    void (*functable[])() =
    {
        func1,
        func2,
        func3,
        func4,
        func5,
        func6,
        func7,
        func8,
        func9,
        func10,
        func11,
        func12,
    };

    int funcsize =(char*)func2 - (char*)func1;
    int nfunctions = sizeof(functable)/sizeof(functable[0]);

    pd->system->logToConsole("\tfunc1 @ 0x%08x", func1);
    pd->system->logToConsole("\tcode size\ttime (ms)");
    for (int n = 1; n <= nfunctions; ++n)
    {
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
