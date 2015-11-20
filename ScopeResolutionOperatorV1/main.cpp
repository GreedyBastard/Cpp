#include <iostream>

using namespace std;

/* Version 1 (https://msdn.microsoft.com)
*
*  Scope Resolution Operator :: With Classes and Namespaces
*
*  The scope resolution operator :: is used to identify
*  and disambiguate identifiers used in different scopes.
*
*/

namespace NamespaceA{

    int x; // x2

    class ClassA{

    public:
        int x; // x3
    };
}

int main()
{
    int x = 1; // x1

    NamespaceA::x = 2;


    NamespaceA::ClassA obj;
    obj.x = 3;

    cout << "x1: " << x << endl; //print x1
    cout << "x2: " << NamespaceA::x << endl; //print x2
    cout << "x3: " << obj.x << endl; // print x3

}
