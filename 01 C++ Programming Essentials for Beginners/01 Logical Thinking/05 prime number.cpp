#include <iostream>
using namespace std;
int main()
{
    int num, i;
    cout << "Enter a number" << endl;
    cin >> num;
    for (i = 2; i <= num - 1; i++)
    {
        if (num % i == 0)
        {
            cout << num << " is not prime number." << endl;
            break;
        }
    }
    if (i == num)
    {
        cout << num << " is a prime number." << endl;
    }

    return 0;
}