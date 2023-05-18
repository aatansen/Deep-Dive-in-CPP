#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    for(int i=625; i>=-100; i--)
    {
        outtextxy(i,400,"Text Animation");
        delay(30);
    }

    getch();
    closegraph();
    return 0;
}
