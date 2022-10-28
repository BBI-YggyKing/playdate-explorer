//  Copyright (c) 2022 Yossarian King. All rights reserved.

#include <stdio.h>
#include <stdlib.h>

#include "pdexplorer.h"
#include "pd_api.h"

#define RUNTEST(FN) runtest(#FN, FN)
#define TEXTHEIGHT 16

static PlaydateAPI* pd = NULL;
static LCDFont* font;
static int first = 1;
static int textpos = 0;

void drawtext(char* txt)
{
	pd->graphics->drawText(txt, strlen(txt), kASCIIEncoding, 0, textpos);
	textpos += TEXTHEIGHT;
}

void runtest(char* title, int (*testfn)(PlaydateAPI* pd))
{
	drawtext(title);
	int result = testfn(pd);
	pd->system->logToConsole("%s: %d", title, result);
}

void runtests()
{
	pd->graphics->clear(kColorWhite);
	pd->graphics->setFont(font);
	pd->graphics->setDrawMode(kDrawModeCopy);

	RUNTEST(memory_maxalloc);
	RUNTEST(memory_fragments);
}

int update(__attribute__ ((unused)) void* ud)
{
	if (first)
	{
		runtests();
		first = 0;
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

		font = pd->graphics->loadFont("/System/Fonts/Asheville-Sans-14-Bold.pft", NULL);
	}
	
	return 0;
}
