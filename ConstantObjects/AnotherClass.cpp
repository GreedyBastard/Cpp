#include <iostream>
#include "AnotherClass.h"

using namespace std;

AnotherClass::AnotherClass()
{

}

void AnotherClass::printSomething(){ //normal function

    cout << "Print something here!" << endl;

}

void AnotherClass::printSomething2() const{ //constant function

    cout << "Constant function!" << endl;
}

AnotherClass::~AnotherClass(){}
