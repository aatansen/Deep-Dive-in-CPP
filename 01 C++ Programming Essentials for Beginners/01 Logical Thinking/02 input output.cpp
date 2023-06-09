#include <iostream>
using namespace std;
int main()
{
    int age;
    string fullname;
    cout << "enter your full name" << endl;
    getline(cin, fullname); // getline() is used to read a line of characters from the input stream and store it in a string object.
    cout << "Hello " << fullname << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "you are " << age << " years old." << endl;
    return 0;
}