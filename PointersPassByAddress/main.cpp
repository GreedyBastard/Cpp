#include <iostream>

using namespace std;

/*
*  Pass by address with pointers
*/

void passByValue(int x);
void passByAddress(int * x);

int main()
{
    int a = 13;
    int b = 13;

    passByValue(a);       //passing by value won't change the original value
    passByAddress(&b);   //passing by address will override the original value

    cout << "passing by value: " << a << endl;
    cout << "passing by reference: " << b << endl;

}

void passByValue(int x){ //this is just creating a copy of the original value

    x = 99;
}

void passByAddress(int * x){ //this has direct access to the variable to override it

    *x = 66;
}
