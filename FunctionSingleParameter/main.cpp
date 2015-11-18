#include <iostream>

using namespace std;

/*always build any function other then main,
* before main, or use prototype to load it before main, and then you can build
* it's body anywhere
*/
void printSome(int x){  //declaring function with parameters

    //this will print x value given below in the main function:
    cout << "The value of x is: " << x << endl;
}

int main()
{
    printSome(20);   // print X, but using the value of 20

    return 0;
}
