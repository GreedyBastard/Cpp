#include <iostream>
#include <cstdlib> // we need this to use rand() function
#include <ctime>   //allow access to the computer clock, or time() function

using namespace std;

/*
* Basic random number generator.
*
* (http://www.cplusplus.com/) explanation, with little modifications from me:
*
* In computers, there is no such thing as a "random number" -- only pseudo-random numbers.
* You can choose from a whole collection of pseudo-random number sequences.
* You do this by seeding the generator using srand().
*
* You can pick a specific sequence by passing specific integer to the srand() function,
* so that every time you run your program it uses the exact same sequence of pseudo-random numbers.
* But if the seed is the same, the output will generate same "random" numbers every time.
*
* This is where the time() function comes in. What better
* choice of randomness than the time the user launched the program?
*
* Seeding time() as a parameter will make the program output really random numbers every time, with no exception.
*
*/

int main()
{

    srand(time(0)); //using time() to make srand() generate another seed every time the program is started
                    //we give that function our computer "time" as a parameter, so will generate other numbers every time

    for (int x = 1; x < 25; x++){ //print 25 random numbers
        cout << 1+ (rand()%6) << endl; //%6 will force output numbers from 0 to 5
        //we add +1 to that, so the output will be 1..6, because we want to simulate a dice
    }

}
