// Write a Program that can play the role of a Lexical Analyzer and Classify the lexemes from the following code into appropriate token class.
/*
Source Program:
int max(int a, int b)
{
  if (x > y)
    {
      return x;
    }
  else
    {
      return y;
    }
}
*/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

using namespace std;

int isKeyword(char buffer[])
{
    char keywords[32][10] = {"auto", "break", "case", "char", "const", "continue", "default",
                             "do", "double", "else", "enum", "extern", "float", "for", "goto",
                             "if", "int", "long", "register", "return", "short", "signed",
                             "sizeof", "static", "struct", "switch", "typedef", "union",
                             "unsigned", "void", "volatile", "while"};
    int i, flag = 0;
    for (i = 0; i < 32; ++i)
    {
        if (strcmp(keywords[i], buffer) == 0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}

int main()
{
    char ch, buffer[15], operators[] = "+-*/%=";
    ifstream file("G:/_Github pro/Deep-Dive-in-CPP/00 Cpp Practise/08_program_code.txt");
    int i, j = 0;
    if (!file.is_open())
    {
        cout << "error while opening the file\n";
        exit(0);
    }
    while (!file.eof())
    {
        ch = file.get();

        for (i = 0; i < 6; ++i)
        {
            if (ch == operators[i])
                cout << ch << " is operator\n";
        }

        if (isalnum(ch))
        {
            buffer[j++] = ch;
        }
        else if ((ch == ' ' || ch == '\n') && (j != 0))
        {
            buffer[j] = '\0';
            j = 0;

            if (isKeyword(buffer) == 1)
                cout << buffer << " is keyword\n";
            else
                cout << buffer << " is indentifier\n";
        }
    }
    file.close();
    return 0;
}