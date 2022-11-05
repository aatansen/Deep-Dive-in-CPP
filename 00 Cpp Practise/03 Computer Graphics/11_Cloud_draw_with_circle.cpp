#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(WHITE);
    circle(200,70,25);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(201,71,WHITE);

    circle(235,60,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(241,61,WHITE);

    circle(225,80,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(226,91,WHITE);

    circle(260,70,30);
    setfillstyle(SOLID_FILL,WHITE);
    floodfill(261,81,WHITE);

    getch();
    closegraph();
    return 0;
}
