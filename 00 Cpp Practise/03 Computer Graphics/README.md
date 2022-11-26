# Computer Graphics

- Computer Graphics Basics
    - 01 Creating a Line
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            line(20,80,600,80); //here values are line(x1,y1,x2,y2)
        
            getch();
            closegraph();
        }
        ```
        
    - 02 Using Colour in line
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(YELLOW);
            line(20,80,600,80); //here values are line(x1,y1,x2,y2)
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 03 Square using line
        
        ```cpp
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
        ```
        
    - 04 Rectangle and colour
        
        ```cpp
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
        ```
        
    - 05 Circle and colour
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(GREEN);
            circle(250,250,100); //here circle(x1,y1,radius)
            setfillstyle(SOLID_FILL,GREEN);
            floodfill(251,251,GREEN); // any point inside the circle x1,y1
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 06 Triangle and colour
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(LIGHTGREEN); // border colour
            setfillstyle(SOLID_FILL,LIGHTGREEN);
            line(60,200,250,200);
            line(60,200,155,50);
            line(250,200,155,50);
            floodfill(155,51,LIGHTGREEN); // any point inside the border x1,y1
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 07 Different types of color fill style
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(RED);
        	setfillstyle(SOLID_FILL,RED);
        	circle(50,50,25);
        	floodfill(50,50,RED);
        
        	setcolor(GREEN);
        	setfillstyle(CLOSE_DOT_FILL,GREEN);
        	circle(100,100,25);
        	floodfill(100,100,GREEN);
        
        	setcolor(BLUE);
        	setfillstyle(WIDE_DOT_FILL,BLUE);
        	circle(150,50,25);
        	floodfill(150,50,BLUE);
        
        	setcolor(YELLOW);
        	setfillstyle(INTERLEAVE_FILL,YELLOW);
        	circle(200,100,25);
        	floodfill(200,100,YELLOW);
        
        	setcolor(CYAN);
        	setfillstyle(XHATCH_FILL,CYAN);
        	circle(250,50,25);
        	floodfill(250,50,CYAN);
        
        	setcolor(LIGHTBLUE);
        	setfillstyle(HATCH_FILL,LIGHTBLUE);
        	circle(300,100,25);
        	floodfill(300,100,LIGHTBLUE);
        
        	setcolor(LIGHTGRAY);
        	setfillstyle(LTBKSLASH_FILL,LIGHTGRAY);
        	circle(350,50,25);
        	floodfill(350,50,LIGHTGRAY);
        
        	setcolor(MAGENTA);
        	setfillstyle(SLASH_FILL,MAGENTA);
        	circle(400,100,25);
        	floodfill(400,100,MAGENTA);
        
        	setcolor(LIGHTGREEN);
        	setfillstyle(LTSLASH_FILL,LIGHTGREEN);
        	circle(450,50,25);
        	floodfill(450,50,LIGHTGREEN);
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 08 Colourful text
        
        ```cpp
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
        ```
        
    - 09 Arc Draw
        
        ```cpp
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
        ```
        
    - 10 Load image file
        
        ```cpp
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
        ```
        
    - 11 Cube draw using line and rectangle
        
        ```cpp
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
        ```
        
    - 12 Cloud draw with circle
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(WHITE);
            circle(200,70,25);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(201,71,WHITE);
        
            circle(235,60,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(241,61,WHITE);
        
            circle(225,80,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(226,91,WHITE);
        
            circle(260,70,30);
            setfillstyle(SOLID_FILL,WHITE);
            floodfill(261,81,WHITE);
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 13 Tree draw using line and colour
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            setcolor(GREEN);
            setfillstyle(SOLID_FILL,GREEN);
            line(100,200,150,50);
            line(100,200,200,200);
            line(150,50,200,200);
            floodfill(150,150,GREEN);
        
            setcolor(BROWN);
            rectangle(140,200,160,300);
            setfillstyle(SOLID_FILL,BROWN);
            floodfill(141,201,BROWN);
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 14 Building draw with rectangle and colour
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
        	setcolor(WHITE);
        	rectangle(100,50,250,300);
        	setfillstyle(SOLID_FILL,WHITE);
        	floodfill(101,51,WHITE);
        
        	setcolor(LIGHTRED);
        	rectangle(150,100,200,150);
        	setfillstyle(SOLID_FILL,LIGHTRED);
        	floodfill(151,101,LIGHTRED);
        
        	setcolor(LIGHTRED);
        	rectangle(150,200,200,250);
        	setfillstyle(SOLID_FILL,LIGHTRED);
        	floodfill(151,201,LIGHTRED);
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 15 National flag with rectangle and circle
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
        	setcolor(GREEN);
        	rectangle(50,50,220,150);
        	setfillstyle(SOLID_FILL,GREEN);
        	floodfill(51,51,GREEN);
        
        	setcolor(DARKGRAY);
        	rectangle(40,40,50,300);
        	setfillstyle(SOLID_FILL,DARKGRAY);
        	floodfill(41,41,DARKGRAY);
        
        	setcolor(RED);
        	circle(130,100,30);
        	setfillstyle(SOLID_FILL,RED);
        	floodfill(131,101,RED);
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 16 Text animation
        
        ```cpp
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
        ```
        
    - 17 Sun moving animation
        
        ```cpp
        #include <graphics.h>
        #include <stdio.h>
        #include <iostream>
        using namespace std;
        
        int main()
        {
            int gd = DETECT, gm;
            initgraph(&gd, &gm, "");
        
            for (int y=200; y>=-40; y--)
            {
                setcolor(YELLOW);
                circle(200,y,30);
                setfillstyle(SOLID_FILL,YELLOW);
                floodfill(201,y,YELLOW);
                delay(30);
                cleardevice(); // not a good solution
        
            }
        
            getch();
            closegraph();
            return 0;
        }
        ```
        
    - 18 Ellipse draw
        
        ```cpp
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
        ```
        
- Computer Graphics Project
    - 01 Fish Aquarium Project
        
        ```cpp
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
        //Second Bubble
                y=y+200;
                if(y>200)
                {
                    circle(100,y+110-i,5);
                }
            }
            else
            {
        //First Bubble
                circle(100,y+110-i,5);
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
            int page=0;
        
            for(i=0; i<300; i++)
            {
        
                setactivepage(page);
                setvisualpage(1-page);
                cleardevice();
        //Fish 1
                line(150+i,250,190+i,290);
                line(150+i,250,90+i,310);
                line(90+i,270,150+i,330);
                line(190+i,290,150+i,330);
                line(90+i,310,90+i,270);
                circle(170+i,290,3);
        
        //Fish 2
                arc(400-i,150,50,320,30);
                line(420-i,128,450-i,160);
                line(420-i,173,450-i,130);
                line(450-i,160,450-i,130);
                circle(380-i,150,3);
        
        //Oxygen Tank
                line(50,300,80,300);
                line(80,300,80,370);
                line(50,370,80,370);
                line(80,305,90,305);
                line(80,310,90,310);
                line(90,305,90,310);
                oxygen_bubbles(i,y);
                y--;
        //Fish Tank Body
        //Roof
                line(50,10,550,10);
                line(50,10,10,100);
                line(550,10,590,100);
                line(10,100,590,100);
        
        //Border of Tank
                line(50,100,50,400);
                line(550,100,550,400);
                line(50,400,550,400);
        
        //Stones
                ellipse(100,390,0,360,20,10);
                ellipse(125,370,0,360,25,10);
                ellipse(150,390,0,360,25,10);
                ellipse(170,375,0,360,15,5);
                circle(180,390,10);
                ellipse(200,380,0,360,10,15);
                circle(220,390,10);
                ellipse(250,380,0,360,20,15);
        
                ellipse(290,390,0,360,20,10);
                ellipse(315,370,0,360,25,10);
                ellipse(340,390,0,360,25,10);
                ellipse(360,375,0,360,15,5);
                circle(370,390,10);
                ellipse(390,380,0,360,10,15);
                circle(410,390,10);
                ellipse(440,380,0,360,20,15);
        
                ellipse(480,390,0,360,20,10);
                ellipse(505,370,0,360,25,10);
                ellipse(530,390,0,360,21,10);
        
                delay(100);
        
                page=1-page;
            }
        
            getch();
        
            // closegraph function closes the graphics
            closegraph();
            return 0;
        }
        ```
        
    - 02 Fish Aquarium Project (Added colour ,new object,resize & detailing)
        
        ```cpp
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
        ```