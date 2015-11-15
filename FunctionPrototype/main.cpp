#include <iostream>

using namespace std;

/*
*PROTOTYPE: In computer programming, a function prototype or function interface
*is a declaration of a function that specifies the function's name and type
*signature (arity, parameter types, and return type), but omits the function body. (wikipedia)
*Without doing this, the main function can't use printSomething() function parameters
*because the program is read from top to bottom.
*/
void printSomething();  //prototyping a function

int main()
{
    printSomething();   //execute printSomething() function declared below.

    return 0;
}

void printSomething(){  //declared as a "void" because it will not print anything, the printing job will be done by the main function.

    cout << "Print something here!" << endl;

}
