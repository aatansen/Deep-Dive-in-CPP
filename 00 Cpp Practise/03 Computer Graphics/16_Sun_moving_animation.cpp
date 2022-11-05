#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    for (int y=200; y>=-40; y--)
    {
        setcolor(YELLOW);
        circle(200,y,30);
        setfillstyle(SOLID_FILL,YELLOW);
        floodfill(201,y,YELLOW);
        delay(30);
        cleardevice(); // not a good solution

    }

    getch();
    closegraph();
    return 0;
}
