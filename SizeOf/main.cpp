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
    cout << sizeof(a) << " bytes" << endl;
    cout << sizeof(b) << " bytes" << endl;
    cout << sizeof(c) << " bytes" << endl;
    cout << sizeof(d) << " bytes" << endl;
    cout << sizeof(e) << " bytes" << endl;
    cout << sizeof(f) << " bytes" << endl;


    //in case of an array, next will print the size of entire array:
    cout << sizeof(g) << " bytes" << endl;
    //but if we want to find out how many elements are in an array, we can divide
    //the size of entire array by the size of 1 element, like bellow:
    cout << sizeof(g) / sizeof(g[0]) << " elements in the array" << endl;//this will print how many elements the array has


}
