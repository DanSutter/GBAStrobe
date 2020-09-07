#include "toolbox.h"

int fillScreen(short color)
{
	for(char x=0;x<SCREEN_WIDTH;x++)
	{
		for(char y=0;y<SCREEN_HEIGHT;y++)
		{
			m3_plot(x,y,color);
		}
	}
	return 0;
}
int strobe(char freq,short color)	//fillscreen freq number of times
{
	for(char i=0;i<freq;i++)
	{
		fillScreen(color);
	}
	return 0;
}

int main()
{
	char freq=10;	//frequency of strobe

	REG_DISPCNT=DCNT_MODE3|DCNT_BG2;

	while(1)
	{
		strobe(freq,CLR_WHITE);	//fill red freq times
		strobe(freq,CLR_BLACK);	//fill blue freq times
	};

	return 0;
}