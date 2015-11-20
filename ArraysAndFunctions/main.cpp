#include <iostream>

using namespace std;

/*
* Passing arrays to functions
*/

void printArray(int arrayName[], int sizeOfArray);

int main()
{
    int a[4] = {3, 6, 2, 5};

    printArray(a, 4);

}

void printArray(int arrayName[], int sizeOfArray){

    for (int x = 0; x  < sizeOfArray; x++){
        cout << arrayName[x] << endl;
    }
}
