#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

	setcolor(GREEN);
	rectangle(50,50,220,150);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(51,51,GREEN);

	setcolor(DARKGRAY);
	rectangle(40,40,50,300);
	setfillstyle(SOLID_FILL,DARKGRAY);
	floodfill(41,41,DARKGRAY);

	setcolor(RED);
	circle(130,100,30);
	setfillstyle(SOLID_FILL,RED);
	floodfill(131,101,RED);

    getch();
    closegraph();
    return 0;
}