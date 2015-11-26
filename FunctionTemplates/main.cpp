#include <iostream>

using namespace std;

template <class tmpClass> //creating a generic data type

tmpClass addSomething(tmpClass a, tmpClass b){//use that generic type of data to sum any type of variables

    return a + b;
}


int main()
{
    //we can use different data types with the same function
    double x1 = 35.7, y1 = 20, z1;
    int x2 = 1.3, y2 = 20, z2;
    float x3 = 1.3, y3 = 20, z3;

    z1 = addSomething(x1,y1);
    z2 = addSomething(x2,y2);
    z3 = addSomething(x3,y3);

    cout << z1 << endl;
    cout << z2 << endl;
    cout << z3 << endl;

}
