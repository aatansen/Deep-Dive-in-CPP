// Fish Aquarium Project
#include <graphics.h>
#include <stdio.h>
#include <iostream>
using namespace std;

//Oxygen Bubbles
void oxygen_bubbles(int i, int y)
{
    if(y<100)
    {
        y=y+200;
        if(y>200)
        {
//Second Bubble
            setcolor(LIGHTCYAN);
            circle(95,y+110-i,6);

//Starfish 1 bubble
            setcolor(LIGHTCYAN);
            circle(210,355-i,3);

//Starfish 2 bubble
            setcolor(LIGHTCYAN);
            circle(420,360-i,3);
        }
    }
    else
    {
//First Bubble
        setcolor(LIGHTCYAN);
        circle(95,y+110-i,6);

//Fish 1 bubble
        setcolor(LIGHTCYAN);
        circle(190,290-i,3);

//Fish 2 bubble
        setcolor(LIGHTCYAN);
        circle(390,150-i,3);

//Starfish 1 bubble
        setcolor(LIGHTCYAN);
        circle(210,355-i,3);

//Starfish 2 bubble
        setcolor(LIGHTCYAN);
        circle(420,360-i,3);
    }
}

int main()
{
    // gm is Graphics mode which is a computer display
    // mode that generates image using pixels.
    // DETECT is a macro defined in "graphics.h" header file
    int gd = DETECT, gm;

    // initgraph initializes the graphics system
    // by loading a graphics driver from disk
    initgraph(&gd, &gm, "");

    int i,y=200;

//Added double buffering to solve flickering problem
    int page=0;

    for(i=0; i<300; i++)
    {
//Solve flickering problem
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

//Border of Tank
        setcolor(CYAN);
        setfillstyle(WIDE_DOT_FILL,CYAN);
        line(50,100,50,400);
        line(50,100,550,100);
        line(550,100,550,400);
        line(50,400,550,400);
        floodfill(51,101,CYAN);
//Fish 1 design
//Fish 1 body
        setcolor(RED);
        setfillstyle(SOLID_FILL,RED);
        line(150+i,250,190+i,290);
        line(150+i,250,90+i,310);
        line(90+i,270,150+i,330);
        line(190+i,290,150+i,330);
        floodfill(151+i,252,RED);
//Fish 1 tail
        line(90+i,310,90+i,270);
        line(95+i,305,95+i,275); //fish tail design
        line(100+i,300,100+i,280); //fish tail design
        line(105+i,295,105+i,285); //fish tail design
//Fish 1 eye
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(170+i,290,3);
        floodfill(171+i,290,WHITE);
        arc(170+i,293,80,265,20);

//Fish 2 design
//Fish 2 body
        setcolor(MAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        arc(400-i,150,0,360,30);
        floodfill(401-i,152,MAGENTA);
//Fish 2 tail
        setcolor(LIGHTGRAY);
        setfillstyle(INTERLEAVE_FILL,LIGHTGRAY);
        line(420-i,128,450-i,160);
        line(420-i,171,450-i,130);
        line(450-i,160,450-i,130);
        floodfill(443-i,145,LIGHTGRAY);
//Fish 2 eye
        setcolor(WHITE);
        setfillstyle(SOLID_FILL,WHITE);
        circle(380-i,150,3);
        floodfill(380-i,150,WHITE);
        arc(380-i,150,270,90,20);

//Oxygen Tank
        line(50,300,80,300);
        line(80,300,80,370);
        line(50,370,80,370);
        setcolor(LIGHTGRAY);
        line(55,300,55,370); //line design in tank
        line(60,300,60,370); //line design in tank
        line(65,300,65,370); //line design in tank
        line(70,300,70,370); //line design in tank
        line(75,300,75,370); //line design in tank

//Oxygen Tank hole
        setcolor(LIGHTMAGENTA);
        setfillstyle(SOLID_FILL,MAGENTA);
        line(80,300,80,370);
        line(80,305,90,305);
        line(80,310,90,310);
        line(90,305,90,310);
        floodfill(81,306,LIGHTMAGENTA);
//Oxygen Tank line colour correction
        setcolor(WHITE);
        line(80,300,80,370);
        oxygen_bubbles(i,y);
        y--;

//Fish Tank Body
//Roof
        setcolor(LIGHTRED);
        setfillstyle(LTBKSLASH_FILL,LIGHTRED);
        line(50,45,550,45);
        line(50,45,10,100);
        line(550,45,590,100);
        line(10,100,590,100);
        floodfill(51,46,LIGHTRED);

//Stones
        setcolor(DARKGRAY);
        setfillstyle(INTERLEAVE_FILL,DARKGRAY);
        ellipse(100,390,0,360,20,10);
        floodfill(101,389,DARKGRAY);
        ellipse(125,370,0,360,25,10);
        floodfill(126,369,DARKGRAY);
        ellipse(150,390,0,360,25,10);
        floodfill(151,389,DARKGRAY);
        ellipse(170,375,0,360,15,5);
        floodfill(171,374,DARKGRAY);
        circle(180,390,10);
        floodfill(181,389,DARKGRAY);
        ellipse(200,380,0,360,10,15);
        floodfill(201,379,DARKGRAY);
        circle(220,390,10);
        floodfill(221,389,DARKGRAY);
        ellipse(250,380,0,360,20,15);
        floodfill(251,379,DARKGRAY);
        ellipse(290,390,0,360,20,10);
        floodfill(291,389,DARKGRAY);
        ellipse(315,370,0,360,25,10);
        floodfill(316,369,DARKGRAY);
        ellipse(340,390,0,360,25,10);
        floodfill(341,389,DARKGRAY);
        ellipse(360,375,0,360,15,5);
        floodfill(361,374,DARKGRAY);
        circle(370,390,10);
        floodfill(371,389,DARKGRAY);
        ellipse(390,380,0,360,10,15);
        floodfill(391,369,DARKGRAY);
        circle(410,390,10);
        floodfill(411,389,DARKGRAY);
        ellipse(440,380,0,360,20,15);
        floodfill(441,379,DARKGRAY);
        ellipse(480,390,0,360,20,10);
        floodfill(481,389,DARKGRAY);
        ellipse(505,370,0,360,25,10);
        floodfill(506,369,DARKGRAY);
        ellipse(530,390,0,360,21,10);
        floodfill(531,389,DARKGRAY);

//Starfish 1
        setcolor(4);
        setfillstyle(CLOSE_DOT_FILL,4);
        line(210,355,205,370); //upper left
        line(210,355,215,370);//upper right
        line(205,370,195,375); //middle left
        line(195,375,205,380);//middle left bottom
        line(215,370,225,375);//middle right
        line(225,375,215,380);//middle right bottom
        line(205,380,210,390);//bottom left
        line(215,380,210,390);//bottom right
        floodfill(210,358,4);

//Starfish 2
        setcolor(15);
        setfillstyle(CLOSE_DOT_FILL,15);
        line(420,360,415,375); //upper left
        line(420,360,425,375);//upper right
        line(415,375,405,380); //middle left
        line(405,380,415,385);//middle left bottom
        line(425,375,435,380);//middle right
        line(435,380,425,385);//middle right bottom
        line(415,385,420,395);//bottom left
        line(425,385,420,395);//bottom right
        floodfill(420,363,15);

//Fixing tank border colour
        setcolor(15);
        line(50,100,50,400);
        line(550,100,550,400);
        line(50,400,550,400);

//Bottom Text
        outtextxy(250,410,"Fish Aquarium");

        delay(100);
//solve flickering problem
        page=1-page;
    }
    getch();

// closegraph function closes the graphics
    closegraph();
    return 0;
}
