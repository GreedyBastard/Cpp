#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

/*
* Basic Inheritance example
*/

int main()
{
    //mother using the sayName() function
    Mother mom;
    mom.sayName();

    //daughter using the sayName() function from mother class
    Daughter dgh;
    dgh.sayName();


}
