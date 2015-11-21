#include <iostream>

using namespace std;

/*
* Very basic multidimensional array example
*/

int main()
{
    // 2 rows and 3 columns array = 6 elements
    int a[2][3] = { {2,3,4}, {8,9,10} };
    //                       row 1     row 2

    /*            Resulting array:
    *
    *          [0][0]   [0][1]  [0][2]  //element index
    * line 1   {  2   ,    3   ,   4 }
    * line 2   {  8   ,    9   ,   10}
    *          [1][0]   [1][1]  [1][2]  //element index
    *
    */

    cout << "a[1][1]: " << a[1][1] << endl; //print second row, second columns
    cout << "a[0][1]: " << a[0][1] << endl; //print first row, second column

}
