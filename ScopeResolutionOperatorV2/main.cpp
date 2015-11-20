#include <iostream>

using namespace std;

/* Version 2 (https://msdn.microsoft.com)
*
*  Scope Resolution Operator ::
*
*  The scope resolution operator :: is used to identify
*  and disambiguate identifiers used in different scopes.
*
*  A scope resolution operator without a scope qualifier refers to the global namespace.
*
*/


namespace NamespaceA {
    int x;
}

int x; //global variable/namespace

int main()
{
    int x;

    //the x in main():
    x = 1;
    //the x in the global namespace:
    ::x = 2;
    //the x in the A namespace:
    NamespaceA::x = 3;

    //printing:
    cout << x << endl;
    cout << ::x << endl;
    cout << NamespaceA::x << endl;

}
