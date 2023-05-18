#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    line(40,50,150,50);
    line(40,50,40,150);
    line(40,150,150,150);
    line(150,50,150,150);

    getch();
    closegraph();
    return 0;
}