#include <iostream>

using namespace std;

int main()
{
    try{
        double num1;
        cout << "Enter first number: ";
        cin >> num1;

        double num2;//cannot be = 0
        cout << "Enter second number: ";
        cin >> num2;

        if(num2 == 0){//if num2 is = 0, then throw an exception
            throw 0;//throw exception number
        }
        //if num2 is not = 0, then do this:
        cout << num1/num2 << endl;

    }catch(...){//catch any type of exception with (...), instead of specific type
        cout << "You tried to divide by 0 or something stupid" << endl;

    }
}
