//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdio.h>
#include <stdlib.h>

#include "pd_api.h"

#define TEXTHEIGHT 16

static PlaydateAPI* pd = NULL;
static LCDFont* font;
static int textpos = 0;

typedef struct
{
	char* title;
	int (*testfn)(PlaydateAPI* pd);
}
Test;

// C preprocesor shenanigans to declare test functions and then the list of tests.
#define TEST(T) extern int T(PlaydateAPI* pd);
#include "tests.h"

#define TEST(T) { #T, T },
static Test tests[] =
{
#include "tests.h"
};
static int testindex = 0;
static int testcount = sizeof(tests)/sizeof(Test);

void drawtext(char* txt)
{
	pd->graphics->drawText(txt, strlen(txt), kASCIIEncoding, 0, textpos);
	textpos += TEXTHEIGHT;
}

// Run one test.
void runtest(Test* test)
{
	drawtext(test->title);
	pd->system->logToConsole(test->title);
	int result = test->testfn(pd);
	pd->system->logToConsole("\treturned %d", result);
}

// Run one test each frame.
int update(void* ud)
{
	if (testindex < testcount)
	{
		runtest(&tests[testindex++]);
		return 1;
	}

	return 0;
}


int eventHandler(PlaydateAPI* playdate, PDSystemEvent event, __attribute__ ((unused)) uint32_t arg)
{
	if ( event == kEventInit )
	{
		pd = playdate;
		pd->display->setRefreshRate(20);
		pd->system->setUpdateCallback(update, NULL);
		pd->system->resetElapsedTime();
		pd->system->getElapsedTime();

		font = pd->graphics->loadFont("/System/Fonts/Asheville-Sans-14-Bold.pft", NULL);

		// Just clear screen once. Test titles are written as each test runs.
		pd->graphics->clear(kColorWhite);
		pd->graphics->setFont(font);
		pd->graphics->setDrawMode(kDrawModeCopy);
	}
	
	return 0;
}
