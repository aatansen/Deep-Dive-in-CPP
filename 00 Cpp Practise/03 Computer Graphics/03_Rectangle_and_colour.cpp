#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(BLUE); //border colour
    rectangle(60,60,200,150); //rectangle(x1,y1,x2,y2) here x1,y1 is upper left corner and x2,y2 is bottom right corner
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(61,61,BLUE);
    
    getch();
    closegraph();
    return 0;
}
