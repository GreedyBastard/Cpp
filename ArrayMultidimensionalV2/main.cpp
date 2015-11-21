#include <iostream>

using namespace std;

/*
* Print multidimensional array
*/

int main()
{
    int a[2][3] = { {4,2,5} , {2,6,8} }; // 2 rows, 3 columns

    cout << "a[0][0] a[0][1] a[0][2]" << endl;

    for (int row = 0; row < 2; row++){ //looping through rows
        for (int column = 0; column < 3; column++){ //looping through columns

               cout << "   "<< a[row][column] << "    " ;
        }
        cout << endl;
    }
    cout << "a[1][0] a[1][1] a[1][2]" << endl;
}
