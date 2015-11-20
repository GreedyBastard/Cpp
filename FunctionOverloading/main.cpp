#include <iostream>

using namespace std;

/*
* Function Overloading example
*
* An overloaded declaration is a declaration that had been declared
* with the same name as a previously declared declaration in the same
* scope, except that both declarations have different arguments and
* obviously different definition (implementation).
*
* See wiki for more info!
*/

class storeFunctions{
public:
    void printNumber(int x){ //function 1
        cout << "Printing an integer: " << x << endl;
    }
    void printNumber(float x){//function 2, same name, but using float instead of int
        cout << "Printing a float: " << x << endl;
    }

};

int main()
{
    int a = 7;      //integer variable
    float b = 2.31; //float variable

    storeFunctions obj;
    obj.printNumber(a);
    obj.printNumber(b);

}
