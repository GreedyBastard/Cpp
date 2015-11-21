#include <iostream>

using namespace std;

/*
* Sizeof Operator
* Yields the size of its operand with respect to the size of type char.
*/

int main()
{
    char a; //different variable types
    long b;
    int c = 5;
    int d = 132123;
    float e = 3.12;
    double f = 0.32123;
    double g[10];

    //this will print how many bytes it takes depending on variable type
    cout << sizeof(a) << " bytes" <<endl;
    cout << sizeof(b) << " bytes" <<endl;
    cout << sizeof(c) << " bytes" <<endl;
    cout << sizeof(d) << " bytes" <<endl;
    cout << sizeof(e) << " bytes" <<endl;
    cout << sizeof(f) << " bytes" <<endl;
    cout << sizeof(g) << " bytes" <<endl;


}
