#include <iostream>

using namespace std;

/*
*  Logical operators example.
*  && -> "AND" Logical operator -> both tests must be true!
*  || -> "OR"  Logical operator -> at least one of the tests must be true
*/


int main()
{
    int age = 21;
    int money = 600;
    float high = 1.60;

    if (age >= 21 && money >= 500 && high > 1.50){

        cout << "You are allowed in!" << endl;

    }else {

        if(high < 1.50 && money < 500){

            cout << "You are a midget without money!" << endl;

        }else{

            cout << "You are not allowed!" << endl;

        }
    }




}
