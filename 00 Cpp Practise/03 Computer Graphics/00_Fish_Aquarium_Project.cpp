// Fish Aquarium Project
#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");


    getch();

    // closegraph function closes the graphics
    closegraph();
    return 0;
}
