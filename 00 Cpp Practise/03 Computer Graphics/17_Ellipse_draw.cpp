#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    ellipse(200,200,0,360,50,70); //here ellipse(x1,y1,start degree,end degree,x radius,y radius)

    getch();
    closegraph();
    return 0;
}