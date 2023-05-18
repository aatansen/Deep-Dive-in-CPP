#include <iostream>
using namespace std;
int main()
{
    // char
    char x=127,y=128;
    cout<<(int)x<<endl;
    cout<<(int)y<<endl; // overflow
    //int
    cout<<"************"<<endl;
    int z=INT_MAX,p;
    p+=z;
    cout<<z<<endl;
    cout<<p<<endl; // overflow
    return 0;
}