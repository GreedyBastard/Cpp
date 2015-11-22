#include "OtherClass.h"
#include <iostream>

using namespace std;

OtherClass::OtherClass(int a, int b) : regVar(a), constVar(b)
{

}

void OtherClass::printEverything(){

    cout << "Regular variable is: " << regVar << " Constant variable is: " << constVar << endl;

}

OtherClass::~OtherClass()
{

}
