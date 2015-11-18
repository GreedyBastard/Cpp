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

    void firstMessage(){

        cout << " Lets make some money! \n" << endl;
    }
    float doTheMath(float a, float r, int days){

        for(int x = 1; x <= days ; x++){

            total = a * pow(1+r/100, x);
            cout <<" Day " << x << " ----- " << total << " $$$" << endl;
        }

    }

private:

    float total;


};

int main()
{
    float a;
    float r;
    int days;

    keepFunctions obj;
    obj.firstMessage(); //print the first message

    cout << " Enter how much cash you wanna invest: " ;
    cin >> a;
    cout << " Enter interest rate as % : " ;
    cin >> r;
    cout << " How may days you want to keep the investment: " ;
    cin >> days;

    obj.doTheMath(a,r,days);


    //ok we got the user inputs and stored them in some variables



}
