// Write a program that can count the number of whitespaces in a string.
#include <iostream>

using namespace std;

int main()
{
    string st;
    int n ,cnt=0;
    cout<<"Enter string:";
    getline(cin, st);
    n=st.length();
    for (int i = 0; i < n; i++)
    {
        if (st[i]==' '){
            cnt++;
        }
    }
    cout<<"Number of Whitespaces : "<<cnt<<endl;

    return 0;
}
