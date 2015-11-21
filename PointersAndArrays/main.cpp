#include <iostream>

using namespace std;

/*
* Mixing pointers and arrays
* Pointers can be assigned new addresses, while arrays cannot
*
*  These 2 expressions are equivalent:
*  a[5] = 0;       // a [offset of 5] = 0
*  *(a+5) = 0;     // pointed to by (a+5) = 0
*
*/


int main()
{
    cout << "[0] [1] [2] [3] [4]" << endl;

    int numbers[5]; //creating a 5 elements array
    int * p;        //creating a pointer

    p = numbers;    //p will point to numbers
    *p = 10;        //numbers[0] = 10
     p++;           //jump to numbers[1]
    *p = 20;        //numbers [1] = 20

    p = &numbers[2];//point to numbers[2] memory address
    *p = 30;        //set the value from that address to 30

    p = numbers + 3;//point to numbers[3]
    *p = 40;        //numbers[3] = 40

    p = numbers;    //point to the array again
    *(p+4) = 50;    //number[4] = 50

    for (int n = 0; n <5; n++){
        cout << numbers[n] << ", ";
    }
    cout << endl;
}
