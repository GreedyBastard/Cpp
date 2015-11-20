#include <iostream>

using namespace std;

/*
* Basic Recursion.
* Recursion: when a function calls itself.
* In this example we will calculate n! ( n factorial)
*/

int factorialMath(int x){
    if (x == 1){
        return 1; //1! = 1
    }else{
        return x * factorialMath(x-1); //going back with 1
    }
}

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << a << "! = " << factorialMath(a) << endl;

}
