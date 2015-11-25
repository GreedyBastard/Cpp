#include <iostream>
#include "secondClass.h"

using namespace std;

/*
* Using "+" instead of a function name
*/

int main()
{

    secondClass a(34);//num 34
    secondClass b(21);//num 21
    secondClass c; //create  a blank object

    //takes a value (34) and add b value (21) and set the value of c
    c = a + b; //take the current object (a) and trigger b as a parameter
               //and return a brandNew secondClass object with 55 as its number
               //as its return value we set it = to c
               //so c = brandNew secondClass object with num = 55

    cout << c.num <<endl;

}
