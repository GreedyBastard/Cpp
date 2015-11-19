#include <iostream>
#include <cmath>

using namespace std;

/*  VERSION 2.
*
*  Stock market simulator. Advanced version using objects and functions.
*  For simple explanations see the VERSION 1 file.
*
*  It calculates how much money you will earn if you
*  quit programming and start doing stock market trades :D
*
*/

class keepFunctions{

public:

    void firstMessage(){ //this will print the first message

        cout << " \n Lets make some money! \n" << endl;
    }

    float doTheMath(float a, float r, int days){ //doing the math magic

        for(int x = 1; x <= days ; x++){ // x goes from 1 to max days user will enter

            total = a * pow(1+r/100, x); // doing the actual math magic
            cout << fixed <<" Day " << x << " ----- " << total << " $$$" << endl; //print the answer for every day
            //that << fixed << thing up there will make the program print entire number
            //using << scientific; instead, will return the program to scientific printing mode
            //by default, the program will print in scientific mode
        }

        cout << "---------------------------------------------" << endl;
        cash = total - a; //calculate how much money you made
        cout << fixed << " \n You made " << cash << " $$$ in " << days <<" days! " << endl;
    }

private:

    float total;//money you invested + money you made
    float cash; //how much money did you made at the end of those days


};

int main()
{
    float a;
    float r;
    int days;

    keepFunctions obj;  //creating the object
    obj.firstMessage(); //print the first message

            /* Getting the data from user */
    cout << " Enter how much $$$ you wanna invest: " ;
    cin >> a; //store that answer in the "a" variable
    cout << " Enter the % of your interest rate: " ;
    cin >> r; //store that answer in the "r" variable
    cout << " How may days you want to keep the investment: ";
    cin >> days; //store that answer in the "days" variable

    cout << "---------------------------------------------" << endl;

    //ok we got the user inputs and stored them in some variables
    //now we pass those values to the object below

    obj.doTheMath(a,r,days); //passing the variables

}
