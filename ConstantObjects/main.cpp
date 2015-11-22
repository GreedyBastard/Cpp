#include <iostream>
#include "AnotherClass.h"

using namespace std;

/*
* "const" keyword specifies that the object or variable is not modifiable
* Only constant functions can be used with constant objects
*/

int main()
{
    int a = 5; //declaring a normal variable
    const int b = 10; //declaring a constant variable

    a = 6;  //override a
//  b = 11; // if you try to override b, you will get an error

    cout << a << endl; //print a, it will print 6, instead of 5, because a can be overridden
    cout << b << endl; //b will be = 10 even if we try to override it, because it is a constant

    AnotherClass obj; //normal object
    obj.printSomething(); //normal function

    const AnotherClass constObj; //creating a constant object
    constObj.printSomething2();  //call a constant function

}
