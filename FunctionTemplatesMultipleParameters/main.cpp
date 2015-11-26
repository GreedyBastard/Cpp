#include <iostream>

using namespace std;


template <class First, class Second> //create the template of 2 generic data types

First smaller(First a, Second b){

    return (a < b ? a : b);
}



int main()
{
    int x = 3;
    double y = 5.231;

    cout << smaller(x,y) << endl; //x = First data type, y = Second data type
    cout << smaller(y,x) << endl; //y = First data type, x = Second data type
    //both will print same answer

}
