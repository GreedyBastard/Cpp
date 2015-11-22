#include <iostream>
#include "className.h"

using namespace std;

/*
* Arrow member selection operator -> (check wiki)
* Accessing members of a class with object or with pointers the the object address
*/

int main()
{
    className obj;
    obj.printSomething(); //access with an object

    className *classPointer = &obj; //point to the object address
    classPointer->printSomething(); //access the function with a pointer

}
