// Write a program that can remove extra whitespaces from a string and print the resultant string.
#include <iostream>
using namespace std;

int main()
{
    int j = 0, i = 0;
    char st[100], new_st[100];
    cout << "Enter string: ";
    cin.getline(st, 100);
    while (st[i] != '\0')
    {
        if (!(st[i] == ' ' && st[i + 1] == ' '))
        {
            new_st[j] = st[i];
            j++;
        }
        i++;
    }
    new_st[j] = '\0';
    cout << "After removing extra whitespaces:" << new_st << endl;

    return 0;
}
