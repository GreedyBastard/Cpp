#include <iostream>

using namespace std;

/*
*  Basic example of a pointer
*
*  The reference and dereference operators are thus complementary:
*  "&" is the address-of operator, and can be read simply as "address of"
*  "*" is the dereference operator, and can be read as "value pointed to by"
*
*  Declaring pointers:
*
*  int* pointerName;
*  int * pointerName;
*  int *pointerName;
*  int * p1, * p2;
*
*/

int main()
{
    int potato = 10; //declaring variable
    cout << &potato << endl; //print the memory address of that variable

    int *potatoPointer; //declaring pointer
        potatoPointer = &potato; //make it point to "potato" memory address

        cout << potatoPointer << endl; //print memory address
        cout << *potatoPointer << endl;//print what is stored at that address

}
