/******************************************************
A program with some functions and comments
******************************************************/
// header files (like import in Java)
#include <iostream>
// The std is a short form of standard, the std namespace
// contains the built-in classes and declared functions
using namespace std;
void line(), message(); // Prototypes
int main()
{
    cout << "Hello! The program starts in main()."
         << endl;
    line();
    message();
    line();
    cout << "At the end of main()." << endl;
    return 0;
}
void line()
{ // To draw a line.
    cout << "--------------------------------" << endl;
}
void message()
{ // To display a message.

    cout << "In function message()." << endl;
}