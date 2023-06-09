#include <iostream>
using namespace std;
int main()
{
    int phy, mat, chem;
    float avg;
    cout << "Enter Physics mark" << endl;
    cin >> phy;
    cout << "Enter Maths mark" << endl;
    cin >> mat;
    cout << "Enter Chemistry mark" << endl;
    cin >> chem;
    avg = (phy + mat + chem) / 3.0;
    cout << "Average mark: " << avg<<"%";
    return 0;
}