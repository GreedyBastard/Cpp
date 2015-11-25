#include <iostream>
#include "secondClass.h"
#include "thirdClass.h"

using namespace std;

thirdClass::thirdClass()
{

}

void thirdClass::doSomething(){

    publicVar = 1;
    protectedVar = 2;

    cout << protectedVar << endl;

}
