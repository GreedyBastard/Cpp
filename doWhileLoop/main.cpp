#include <iostream>

using namespace std;

/*
*  Do While loop basic example
*/

int main()
{
    int x = 1;
    //first run some code
    do { //this code will run at least 1 time:
        cout << x << endl;
        x++; //increment x, otherwise it will run forever
    }while(x <= 10); //then run the test

}
