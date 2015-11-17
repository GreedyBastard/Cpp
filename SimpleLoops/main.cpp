#include <iostream>

using namespace std;

/*
* Very simple WHILE LOOP behavior example
*/

int main()
{
    //declaring the variables
    int x = 1; //the starting point for the loop is 1
    int number;
    int sum = 0;//make it = to 0 at begin, always, otherwise it can get wrong numbers

    cout << "Enter 5 numbers to sum them: " << endl;

    //while loop limited at 5 numbers
    while (x <= 5){
        cin >> number;  //get and store the number you enter
        //sum = sum + number, simplified code line:
        sum += number; //add that number at the previous sum
        x++; //x will be = to x + 1, so the loop jump to next step
    }

    cout << "Total: " << sum << endl; //printing the final number

    return 0;
}
