#include <iostream>

using namespace std;

/*
* Basic example of a switch statement
*/


int main()
{
    int age = 21;

    switch(age){
        case 16: //for age of 16:
            cout << " Too young!" << endl;
            break; //break will end the switch when it gets a match
        case 18: //for age of 18:
            cout <<" Maybe you can drive!" << endl;
            break;
        case 21: //for age of 21:
            cout << " Ok, now we talk!" << endl;
            break;
        default: //for any other age:
            cout << " You don't belong here..." << endl;



    }
}
