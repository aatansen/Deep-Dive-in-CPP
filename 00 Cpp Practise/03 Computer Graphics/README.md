# Computer Graphics

<details>
<summary>Computer Graphics Basics</summary>
<details>
<summary>01 Creating a Line</summary>

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

</details>

<details>
<summary>02 Using Colour in line</summary>

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

</details>

</details>

<details>
<summary>Computer Graphics Project</summary>
<details>
<summary>01 Fish Aquarium Project</summary>

```cpp
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
```

</details>

</details>