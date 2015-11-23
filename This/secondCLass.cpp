#include <iostream>
#include "secondCLass.h"

using namespace std;

secondCLass::secondCLass(int num) : h(num) //set h = 33
{

}

void secondCLass::print(){

    int h = 50;

    cout << "h= " << h << endl; //print local variable
    cout << "this->h= " << this->h << endl; //print the variable that the object is taking as a parameter
    cout << "(*this).h= " << (*this).h << endl; //print the value using memory address
}
