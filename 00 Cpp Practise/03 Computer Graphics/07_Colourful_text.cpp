#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    setcolor(LIGHTBLUE);
    outtext("Tansen"); // default way to write text *view in upper left corner*
    setcolor(GREEN);
    outtextxy(70,80,"Tansen 2"); // x1,y1 position text view

    getch();
    closegraph();
    return 0;
}