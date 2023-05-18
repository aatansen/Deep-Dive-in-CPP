#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(GREEN);
    circle(250,250,100); //here circle(x1,y1,radius)
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(251,251,GREEN); // any point inside the circle x1,y1

    getch();
    closegraph();
    return 0;
}
