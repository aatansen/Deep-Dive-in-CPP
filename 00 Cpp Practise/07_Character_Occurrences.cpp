// Count the number of occurrences of a character in a string.
#include <stdbool.h>
#include <iostream>
#include <cstring>
using namespace std;
int count_char(char *s);
int main()
{
    char s[] = "I eat rice.";
    count_char(s);
    return 0;
}

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
        if (already_count)
        {
            continue;
        }
        int count = 0;
        for (int j = 0; j < length; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        cout<< "Total occurrence of Character " <<"'"<<s[i]<<"'" <<" is"<< " = " <<count<<endl;
        unique[counted] = s[i];
        counted++;
    }
    return 0;
}
/*
Output:
Total occurrence of Character 'I' is = 1
Total occurrence of Character ' ' is = 2
Total occurrence of Character 'e' is = 2
Total occurrence of Character 'a' is = 1
Total occurrence of Character 't' is = 1
Total occurrence of Character 'r' is = 1
Total occurrence of Character 'i' is = 1
Total occurrence of Character 'c' is = 1
Total occurrence of Character '.' is = 1
*/