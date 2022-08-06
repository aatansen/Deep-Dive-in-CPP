// Count the number of occurrences of a character in a string.
#include <iostream>
#include <cstring>
using namespace std;
int count_char(char *s)
{
    int length = strlen(s);
    char unique[length];
    int counted = 0;
    for (int i = 0; i < length; i++)
    {
        bool already_count = false;
        for (int j = 0; j < counted; j++)
        {
            if (s[i] == unique[j])
            {
                already_count = true;
            }
        }
        if (already_count)continue;
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        cout << "Total occurrence of Character "<< "'" << s[i] << "'"<< " is"<< " = " << count << endl;
        unique[counted] = s[i];
        counted++;
    }
    return 0;
}
int main()
{
    char s[100];
    cout << "Enter a string: ";
    cin.getline(s, 100);
    count_char(s);
    return 0;
}