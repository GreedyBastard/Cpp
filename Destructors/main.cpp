#include <iostream>
#include "AnotherClass.h"

using namespace std;

/*
* Construction and destruction behavior
*/

int main()
{
    AnotherClass object; //creating an object will initialize the constructor
    cout << "I wanna print this in main function!" << endl;//then it will run the program


}//and after ending the main function, it will call the destructor
