#include <iostream>
#include "AnotherClass.h"

using namespace std;

AnotherClass::AnotherClass() //constructor
{
    cout << "This is the constructor!" << endl;
}

AnotherClass::~AnotherClass(){ //destructor

    cout << "This is the destructor!" << endl;

}
