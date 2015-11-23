#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;

//every time you work with a class inside another class
//you need to use member initializer list

People::People(string x, Birthday bo) : name(x), dateOfBirth(bo) //set name = x and set dateOfBirth = bo
{
}

void People::printInfo(){

    cout << name << " was born on ";
    dateOfBirth.printDate(); //we can use the dateOfBirth object from Birthday class
                             //to get the printdate() function wich it will print the date
}
