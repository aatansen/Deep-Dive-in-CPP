#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    rectangle(50,50,150,150);
    rectangle(100,100,200,200);
    line(50,50,100,100);
    line(150,50,200,100);
    line(50,150,100,200);
    line(150,150,200,200);

    getch();
    closegraph();
    return 0;
}
