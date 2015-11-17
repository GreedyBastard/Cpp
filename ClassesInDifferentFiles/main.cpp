#include <iostream>
//we have to include the header of the second class
//otherwise we can't use objects to point the other class functions
#include "SecondClass.h" //including the header

using namespace std;

int main()
{
    //creating an object will initialize the constructor of the SecondClass
    //the SecondClass constructor is set to print some text
    SecondClass obj;

    return 0;
}
