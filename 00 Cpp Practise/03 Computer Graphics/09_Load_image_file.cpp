#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    readimagefile("image file.jpg",5,5,600,700); //here readimagefile("image file.jpg",x1,y1,x2,y2)

    getch();
    closegraph();
    return 0;
}
