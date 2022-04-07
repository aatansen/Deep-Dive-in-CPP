#include <iostream>
using namespace std;
int main()
{
    int a,b,min,gcd;
    cout << "Enter 2 numbers" << endl;
    cin>>a>>b;
    if (a>b){
        min=b;
    }else{
        min=a;
    }
    for(int i=1 ;i<=min;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<"GCD is: "<<gcd;
    return 0;
}