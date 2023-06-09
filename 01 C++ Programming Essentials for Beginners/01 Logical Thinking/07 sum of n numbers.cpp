#include <iostream>
using namespace std;
int main()
{
    int num,sum=0,val;
    cout << "how many number you want to enter?" << endl;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>val;
        sum+=val;
    }
    cout<<"sum is: "<<sum;
    return 0;
}