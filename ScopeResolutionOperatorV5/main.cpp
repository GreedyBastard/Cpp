#include <iostream>

using namespace std;

/* Version 5 (https://msdn.microsoft.com)
*
*  Scope Resolution Operator :: With static members
*
*  You must use the scope resolution operator to call
*  static members of classes
*
*/

class ClassG {
public:
    static int get_x(){ return x;}
    static int x;
};

int ClassG::x = 10;

int main()
{
    int gx1 = ClassG::x;
    int gx2 = ClassG::get_x();

    cout << gx1 << endl;
    cout << gx2 << endl;

}
