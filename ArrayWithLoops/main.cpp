#include <iostream>

using namespace std;

/*
* Array with for loop
*/

int main()
{
    int a[9];

    cout << "Element   -      Value" << endl;

    //array index start at 0 and end at 8
    for (int x = 0; x <= 8; x++){
            a[x] = 32; //every array element will be = to 32;
            cout <<"   "<< x+1 << "     ---      " << a[x] << endl;


    }
}
