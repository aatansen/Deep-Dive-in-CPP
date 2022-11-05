#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

	setcolor(WHITE);
	rectangle(100,50,250,300);
	setfillstyle(SOLID_FILL,WHITE);
	floodfill(101,51,WHITE);

	setcolor(LIGHTRED);
	rectangle(150,100,200,150);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(151,101,LIGHTRED);

	setcolor(LIGHTRED);
	rectangle(150,200,200,250);
	setfillstyle(SOLID_FILL,LIGHTRED);
	floodfill(151,201,LIGHTRED);

    getch();
    closegraph();
    return 0;
}
