#include <iostream>

using namespace std;

/*
* Calculate the sum of the elements of an array
*/

int main()
{
    int a[5] = {231,22,-287,311,23};
    int sum = 0;

    for (int x = 0; x < 5; x++){
            sum += a[x];
    }

    cout << "Total: " << sum << endl;

}
