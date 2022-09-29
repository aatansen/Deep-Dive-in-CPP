// Write a program that can recognize what kind of a particular operator input in and print accordingly.
#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    char st[10];
    cout << "Enter an Operator: ";
    cin.getline(st, 10);

    // Assignment Operators
    if (st[i] == '+' && st[i + 1] == '=')
    {
        cout << "It is called Plus Equal to Operator." << endl;
    }
    else if (st[i] == '-' && st[i + 1] == '=')
    {
        cout << "It is called Minus Equal to Operator." << endl;
    }
    else if (st[i] == '*' && st[i + 1] == '=')
    {
        cout << "It is called Multiple Equal to Operator." << endl;
    }
    else if (st[i] == '/' && st[i + 1] == '=')
    {
        cout << "It is called Division Equal to Operator." << endl;
    }
    else if (st[i] == '%' && st[i + 1] == '=')
    {
        cout << "It is called Modulus Equal to Operator." << endl;
    }

    // Increment and Decrement Operators
    else if (st[i] == '+' && st[i + 1] == '+')
    {
        cout << "It is called Increment Operator." << endl;
    }
    else if (st[i] == '-' && st[i + 1] == '-')
    {
        cout << "It is called Decrement Operator." << endl;
    }

    // Logical Operators
    else if (st[i] == '&' && st[i + 1] == '&')
    {
        cout << "It is called Logical AND Operator." << endl;
    }
    else if (st[i] == '|' && st[i + 1] == '|')
    {
        cout << "It is called Logical OR Operator." << endl;
    }
    else if (st[i] == '!')
    {
        cout << "It is called Logical NOT Operator." << endl;
    }

    // Bitwise Operators
    else if (st[i] == '<' && st[i + 1] == '<')
    {
        cout << "It is called Shift Left Operator." << endl;
    }
    else if (st[i] == '>' && st[i + 1] == '>')
    {
        cout << "It is called Shift Right Operator." << endl;
    }
    else if (st[i] == '&')
    {
        cout << "It is called Bitwise AND Operator." << endl;
    }
    else if (st[i] == '|')
    {
        cout << "It is called Bitwise OR Operator." << endl;
    }
    else if (st[i] == '^')
    {
        cout << "It is called Bitwise exclusive OR Operator." << endl;
    }
    else if (st[i] == '~')
    {
        cout << "It is called Bitwise Bitwise complement Operator." << endl;
    }

    // Relational Operators
    else if (st[i] == '!' && st[i + 1] == '=')
    {
        cout << "It is called Not Equal to Operator." << endl;
    }
    else if (st[i] == '>' && st[i + 1] == '=')
    {
        cout << "It is called Greater Than or Equal to Operator." << endl;
    }
    else if (st[i] == '>' && st[i + 1] == '=')
    {
        cout << "It is called Less Than or Equal to Operator." << endl;
    }
    else if (st[i] == '=' && st[i + 1] == '=')
    {
        cout << "It is called Equal to Operator." << endl;
    }
    else if (st[i] == '>')
    {
        cout << "It is called Greater Than Operator." << endl;
    }
    else if (st[i] == '<')
    {
        cout << "It is called Less Than Operator." << endl;
    }

    // Arithmetic Operators
    else if (st[i] == '+')
    {
        cout << "It is called Addition or Unary Plus Operator." << endl;
    }
    else if (st[i] == '-')
    {
        cout << "It is called Subtraction or Unary Minus Operator." << endl;
    }
    else if (st[i] == '*')
    {
        cout << "It is called Multiplication Operator." << endl;
    }
    else if (st[i] == '/')
    {
        cout << "It is called Division Operator." << endl;
    }
    else if (st[i] == '%')
    {
        cout << "It is called Modulus Operator." << endl;
    }
    else if (st[i] == '=')
    {
        cout << "It is called Assingment Operator." << endl;
    }
    else if (st[i] == ',')
    {
        cout << "It is called Bitwise Comma Operator." << endl;
    }
    else
    {
        cout << "It is not an Operator." << endl;
    }

    return 0;
}