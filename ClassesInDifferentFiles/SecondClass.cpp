#include "SecondClass.h"
#include <iostream>

using namespace std;

/*In this file we build the body of the functions
* This file get compiled and doing so, the functions
* implementations are hidden for users
*/

SecondClass::SecondClass() //those "::" represent the binary scope resolution operator
                           //and means that SecondClass() function is a member of SecondClass class
{
    cout << "Print anything here!" << endl;
}
