#include <iostream>
#include "secondCLass.h"

using namespace std;

/*
* Every object in C++ has access to its own address through
* an important pointer called "this" pointer. The "this" pointer
* is an implicit parameter to all member functions. Therefore,
* inside a member function, "this" may be used to refer to the invoking object.
*/

int main()
{
    secondCLass obj(33);
    obj.print();
}
