#include <iostream>
using namespace std;
int main()
{
    int mark = 72;
    if (mark > 90)
    {
        cout << "party" << endl;
    }
    else if (mark > 60)
    {
        cout << "Go out" << endl;
    }
    else if (mark > 70)
    {
        cout << "well done" << endl;
    }
    else
    {
        cout << "keep trying" << endl;
    }
    return 0;
}
