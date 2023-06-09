#include <iostream>
using namespace std;
int main()
{
    //int 
    int x=11,y=5,andd,orr,xorr;
    andd=x&y;
    orr=x|y;
    xorr=x^y;
    cout<<"and: "<<andd<<endl;
    cout<<"or: "<<orr<<endl;
    cout<<"xor: "<<xorr<<endl;
    //char
    char ch1=5,ch2,ch3;
    ch2=ch1<<1; // x*2^i 
    ch3=ch1>>1; // x/2^i
    cout<<"left shift:"<<(int)ch2;
    cout<<"right shift:"<<(int)ch3;
    return 0;
}