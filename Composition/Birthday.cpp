#include <iostream>
#include "Birthday.h"

using namespace std;

Birthday::Birthday(int m, int d, int y)
{
    //set the values that the constructor will get, to the variables below
    month = m; //month will get m value
    day = d;   //day will get d value
    year = y;  //year will get y value

}

void Birthday::printDate(){ //this will print the date

    cout << month << "/" << day << "/" << year << endl;
}
