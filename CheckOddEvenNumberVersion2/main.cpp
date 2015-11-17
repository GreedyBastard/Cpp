#include <iostream>

using namespace std;

/* VERSION 2.
*  Checking if a number is odd or even,
*  using ternary operators! Much more simpler!
*
* To check whether an integer is even or odd,
* the remainder is calculated when it is divided
* by 2 using modulus operator %. If remainder is zero,
* that integer is even, if not, that integer is odd.
*/

int main()
{
    int n;
    cout << "This program check if a number is odd or even!" << endl;
    cout << "Enter a number: ";
    cin >> n;

    //Checking:     //If it is == 0 then:       //If it's not:
    ( n % 2 == 0) ? cout << n << " is even!" : cout << n << " is odd!";

    return 0;
}
