#include <iostream>

using namespace std;

/*
* Basic Assignment and Increment Operators examples
*/

int main()
{
    int x = 10;
    int y = 10;
    int z = 20;

    x += 10; // x = x + 10;
    y -= 5;  // y = y - 5;

    /*you can also do: */
    //x *= 10
    //x /= 5
    //x %= 5

    cout << "x = "<< x << endl;
    cout << "y = "<< y << endl;


    cout <<"z = "<< z++ << endl; //print z then add +1
    cout <<"z = "<< z << endl;   //print z value which, now, is z+1

    z = 10; //override z

    cout <<"z = "<< ++z << endl; //first, will add 1 to z, then print
    cout <<"z = "<< z << endl;   //second, will print the value of z, which will be = to first print

    /* you can also do */
    // --x and x-- as a subtraction


}
