// Write a program to Separate the vowels and constants from a given string.
#include <iostream>
using namespace std;

int main()
{
    string st;
    int n, vowels = 0, consonants = 0;
    cout << "Enter string:";
    getline(cin, st);
    n = st.length();
    for (int i = 0; i < n; i++)
    {
        if (st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o' || st[i] == 'u' || st[i] == 'A' || st[i] == 'E' || st[i] == 'I' || st[i] == 'O' || st[i] == 'U')
        {

            cout << "Vowel :" << st[i] << endl;
            vowels++;
        }else if (st[i]<=char(64) || (st[i]>=char(91) && st[i]<=char(96)) || (st[i]>=char(123) && st[i]<=char(127))){
            continue;
        }
        else
        {
            cout << "Consonant :" << st[i] << endl;
            consonants++;
        }
    }
    cout << "Number of Vowels =" << vowels << endl;
    cout << "Number of Consonants =" << consonants << endl;
    return 0;
}