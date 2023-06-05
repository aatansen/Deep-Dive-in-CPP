#include <iostream>
using namespace std;
int main()
{
    int units;
    cin >> units;
    int cost;
    if (units <= 100)
    {
        cost = 0;
    }
    else if (units <= 200)
    {
        cost = 0 + (units - 100) * 5;
    }
    else if (units <= 300)
    {
        cost = 0 + 100 * 5 + (units - 200) * 10;
    }
    else
    {
        cost = 0 + 100 * 5 + 100 * 10 + (units - 300) * 12;
    }
    cout << cost << endl;
    return 0;
}