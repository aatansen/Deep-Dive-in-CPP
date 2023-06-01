<details>
<summary>Theory Notes</summary>

# C++ Programming Essentials for Beginners

## 01 C++ Diving Deeper

### Preprocessor Directive

- The preprocessors are the directives, which give instructions to the compiler to preprocess some code before actual compilation starts.
- The directive begins with '#' e.g: `#include <...>`
- The actual code is compiled by compiler only.
- Directive tells the compiler to Include the header file in the source code.
- `#define` directive tells the compiler to create symbolic constants. The symbolic constant is called a macro. e.g: `#define PI 3.14`
- All subsequent occurrences of macro in that source code will be replaced by its replacement text before the program is compiled.

### Identifiers

- Both an identifier and a variable are the names allotted by users to a particular entity in a program. e.g: `factorial()`
- The identifier is only used to identify an entity uniquely in a program at the time of execution whereas, a variable is a name given to a memory location, that is used to hold a value.
- A variable can be a identifier

### Keywords

- Keywords are the word that have a special meaning for the compiler.
- These keywords can't be used as an identifier.
- C++ has about 95 reserved words.

### main() Function

- Every C/C++ Program stars executing with main.
- There is exactly 1 main function.
- `return 0` indicates successful execution of main.
- main is not a keyword in C/C++.
- main Is not predefined, but it is predeclared.
- In C++, your code is linked against a small runtime library that constitutes the true starting point of your program.
- It is this small library calls a function called main--it's hardcoded to do so.
- Your code runs because you supply the code inside main, also called function definition.

### Namespaces

- Naming conflicts can arise if you use multiple 3rd party libraries in same program.
- Namespaces are used to resolve naming conflicts.
- std is the name for the standard C++ Namespace.
- Writing std::cout will tell the compiler to use "cout" from standard namespace.
- To avoid data structure and function name conflicts with other libraries, OpenCV has its own namespace: cv. e.g: `using namespace cv;`

### Comments

- Comment is text that is normally used to annotate code for future reference.
- Comment is ignored by compiler but that is useful for programmers.
- You can use comments in testing to make certain lines of code inactive.
- We can write single line or multi-line comments in a C++ Program. e.g: `//` and `/*...*/`

### Summary

- Keywords have special meaning for the compiler.
- Identifiers are used to name an entity, variable name is also a type of identifier.
- Header files include some pre-written code required to execute our program.
- Program execution always starts with main()
- {} are used to enclose a block (function, If, while etc.)
- C++ Compiler Ignores whitespace (space, carriage returns, linefeeds, tabs, vertical tabs, etc.)
- Output using cout
- Input using cin
- Comments (`//` and `/*...*/`)
- Every statement most end with a semicolon;

## 02 Variables, Datatypes & Storage

### Variables

- `Variable name:` A label for a memory location
- `Value:` The something that would be stored in a variable
- `Storage:` A place where data can be stored
- `Declaration:` Announcing a variable (usually) at the beginning of a program
- `Naming convention:` A set of rules about the names of variables
- `Assignment:` Giving (setting) a variable a value

### Naming Variables

- For variable name we can use uppercase and lowercase letters, digits from 1 to 9 and underscore(_).
- First character must be underscore or letter.
- C++ is strongly typed language. So every variable needs to be declare before using it.

### Initialization

- Variables when just declared have garbage value until they are assigned a value for the first time.
- We can assign a specific value from the moment variable is declared, called as initialization of variable.

### Data-types (Primitives)

- Boolean - `boolean`
- Character - `char`
- Integer — `int`
- Floating Point — `float`
- Double Floating Point — `double`

### Data-types Modifiers

Several of the basic types can be modified using one or more of these type modifiers

- signed (MSB use to represent the sign of the number `‘+’=0`,`’-’=1`)
- unsigned(all bits use to represent the number)
- short
- long

### Bitwise Operators

- Binary AND `&`
- Binary OR `|`
- Binary One’s Complement `~`
- Binary Left Shift `<<`
- Binary Right Shift `>>`

### Storage of Negative Numbers

- 2’s complement is used to represent the negative number
- In MSB it will be 1 for representing sign integer as negative number

</details>

<details>
<summary>Coding Notes</summary>

Using `sizeof()` Function to get the byte size:

```cpp
#include <iostream>
using namespace std;
int main()
{
    cout << "Int: " << sizeof(int) <<" Bytes"<< endl;

    return 0;
}
```

</details>