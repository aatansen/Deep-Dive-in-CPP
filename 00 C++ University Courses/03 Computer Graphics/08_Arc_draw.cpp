#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    arc(200,200,0,90,60); // here arc(x1,y1,starting degree,ending degree,radius) *starting degree to ending degree is anti-clockwise*

    getch();
    closegraph();
    return 0;
}
