#include <iostream>

using namespace std;

/*
* Basic example of WHILE LOOP with a sentinel value.
* In this example the WHILE LOOP goes on until -1 is entered from the keyboard.
*
* (en.wikipedia.org):
*           A sentinel value (also referred to as a flag value, trip value, rogue value,
                     * signal value, or dummy data)is a special value in the
                     * context of an algorithm which uses its presence as a condition
                     * of termination, typically in a loop or recursive algorithm.
*/

int main()
{
    int age;
    int ageTotal = 0;
    int nrOfPpl = 0;

    cout << "Enter first person age, or -1 to quit" << endl;
    cin >> age;

    while(age != -1){ //this make the program stop when -1 is entered
        ageTotal += age;
        nrOfPpl++;

        cout << "Enter next persons age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of ppl entered: " << nrOfPpl << endl;

    if (nrOfPpl >= 1){ //do the math only if at least 1 person is entered
    cout << "Average age: " << ageTotal/nrOfPpl << endl;
    }

    return 0;
}
