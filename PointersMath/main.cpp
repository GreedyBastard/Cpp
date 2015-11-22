#include <iostream>

using namespace std;
/*
* Each int element is stored 4 bytes away from the previous one
* because 1 int take 4 bytes of space to be stored
*/

int main()
{
    int test[5]; //array
    int *p0 = &test[0]; //point to the address of the first array element
    int *p1 = &test[1]; //--//-- second
    int *p2 = &test[2]; //--//-- third


    cout << "p0 address: " << p0 << endl;
    cout << "p1 address: " << p1 << endl;
    cout << "p2 address: " << p2 << endl;

    p0 += 2; //add 2 to pointer, it changes what element will point to
              //in this example, adding 2, will point to the element stored 2 indexes away
              //and that element is p2


    cout << "p0+2 address: " << p0 << endl;

}
