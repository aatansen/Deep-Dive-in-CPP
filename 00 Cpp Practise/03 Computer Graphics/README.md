# Computer Graphics

Creating a Line

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

Using colour in line

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