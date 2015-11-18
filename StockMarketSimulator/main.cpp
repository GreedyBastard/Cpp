#include <iostream>
#include <cmath>

/*   VERSION 1.
*
*  Stock market simulator. This is the basic version.
*
*  It calculates how much money you will earn if you
*  quit programming and start doing stock market trades :D
*
*/

using namespace std;

int main()
{
    float a; // the interest
    float p = 10000; // principal investment
    float r = .03;// 1% rate

    for(int day = 1; day <=30; day ++){ //looping through 20 days

            //a -> the amount of money you gonna make
            //p -> how much you invested at the starting point
            //r -> the rate, which is 1%

            a = p * pow(1+r, day); //the formula
            cout <<" Day " << day << " ----- " << a << " $$$" << endl;

    }
}
