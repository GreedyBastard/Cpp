#include <iostream>

using namespace std;

/*
* Very basic For Loop example
*/

int main()
{
    // for x from 1 to 10 do:
    for(int x = 1;   //initialization (the starting point)
            x <= 10; //loop continuation condition (the ending point)
            x++)     //increment (how much to increment x after every loop)

            {
        cout << x;
    }
}
