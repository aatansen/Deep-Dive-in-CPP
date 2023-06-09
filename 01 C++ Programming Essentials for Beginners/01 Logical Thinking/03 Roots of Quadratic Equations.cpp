#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a,b,c,r1,r2;
    cout<<"Enter a, b and c of quadratic equation: ";
    cin>>a>>b>>c;
    // just a basic implementation , note: it required more condition
    r1=(-b+sqrt(b*b-4*a*c))/2*a;
    r1=(-b-sqrt(b*b-4*a*c))/2*a;
    cout<<"r1 is :"<<r1<<endl;
    cout<<"r2 is :"<<r2<<endl;
    return 0;
}