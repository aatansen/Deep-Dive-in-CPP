#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(LIGHTGREEN); // border colour
    setfillstyle(SOLID_FILL,LIGHTGREEN);
    line(60,200,250,200);
    line(60,200,155,50);
    line(250,200,155,50);
    floodfill(155,51,LIGHTGREEN); // any point inside the border x1,y1

    getch();
    closegraph();
    return 0;
}
