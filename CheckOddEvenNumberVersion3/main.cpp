#include <iostream>

using namespace std;

/* VERSION 3.
*  Checking if a number is odd or even,
*  this time, using functions.
*
* To check whether an integer is even or odd,
* the remainder is calculated when it is divided
* by 2 using modulus operator %. If remainder is zero,
* that integer is even, if not, that integer is odd.
*/
class storeFunctions{
    public:
        void printFirstMessage(){
            cout << "This program check if a number is odd or even!" << endl;
        }

        void doTheMath(int n){

        ( n % 2 == 0) ? cout << n << " is even!" : cout << n << " is odd!" << endl;
        }
};


int main()
{
    int n;
    storeFunctions obj;
    obj.printFirstMessage(); //creating the object and calling the message function
                             //before the user enter the number, otherwise the message
                             //will be printed only after "doTheMath()" function
                             // hint: see order of construction, or how constructor are called

    cout << "Enter a number: ";
    cin >> n;

    obj.doTheMath(n);

    return 0;
}

