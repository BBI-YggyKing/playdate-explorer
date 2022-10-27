//
//  main.c
//
//  Copyright (c) 2022 Yossarian King. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#include "pd_api.h"

static PlaydateAPI* pd = NULL;
static LCDFont* font;

#define TEXT_WIDTH 86
#define TEXT_HEIGHT 16

int x = (400-TEXT_WIDTH)/2;
int y = (240-TEXT_HEIGHT)/2;
int dx = 1;
int dy = 2;

int sign(int x)
{
    return (x > 0) - (x < 0);
}

static int
update(__attribute__ ((unused)) void* ud)
{
	int delta = pd->system->getCrankChange() / 2.0f;
	if (!delta)
		return 0;

	int s = sign(delta);
	for (int i = 0; i != delta; i += s)
	{
		x += dx * s; y += dy * s;
	
		if ( x < 0 || x > LCD_COLUMNS - TEXT_WIDTH )
			dx = -dx;
	
		if ( y < 0 || y > LCD_ROWS - TEXT_HEIGHT )
			dy = -dy;
	}
        
	pd->graphics->clear(kColorWhite);
	pd->graphics->setFont(font);
	pd->graphics->setDrawMode(kDrawModeCopy);
	pd->graphics->drawText("Let's explore", strlen("Let's explore"), kASCIIEncoding, x, y);

	pd->system->drawFPS(0,0);

	return 1;
}


int
eventHandler(PlaydateAPI* playdate, PDSystemEvent event, __attribute__ ((unused)) uint32_t arg)
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
