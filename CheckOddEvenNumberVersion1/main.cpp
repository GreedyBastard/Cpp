#include <iostream>

using namespace std;

/* VERSION 1.
*  Checking if a number is odd or even,
*  using IF statement!
*
* To check whether an integer is even or odd,
* the remainder is calculated when it is divided
* by 2 using modulus operator %. If remainder is zero,
* that integer is even, if not, that integer is odd.
*
*/
int main()
{
    int n;
    cout << "This program check if a number is odd or even!" << endl;
    cout << "Enter a number: " << endl;
    cin >> n; //get the number that you enter and store it inside the "number" variable
    if ( n % 2 == 0){
        cout << n << " is even!" << endl;
    }
    else {
        cout << n << " is odd!" << endl;
    }
    return 0;
}
