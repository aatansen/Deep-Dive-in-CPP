// Write a program that takes input of a letter and transform it into its equivalent uppercase or lowercase letter.
#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a letter: ";
    cin >> c;
    if (c >= 'a' && c <= 'z')
    {
        cout << "Uppercase is: " << char(int(c) - 32);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        cout << "Lowercase is: " << char(int(c) + 32);
    }
    else
    {
        cout << "Invalid letter." << endl;
    }
    return 0;
}