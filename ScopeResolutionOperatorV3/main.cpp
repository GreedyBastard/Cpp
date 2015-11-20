#include <iostream>

using namespace std;

/* Version 3 (https://msdn.microsoft.com)
*
*  Scope Resolution Operator ::
*
*  You can use the scope resolution operator to identify a member
*  of a namespace, or to identify a namespace that nominates the member’s
*  namespace in a using-directive.
*
*  In the example below, you can use NamespaceC to qualify ClassB, even
*  though ClassB was declared in namespace NamespaceB, because NamespaceB
*  was nominated in NamespaceC by a using directive.
*
*/

namespace NamespaceB{
    class ClassB{
    public:
        int x;
    };
}

namespace NamespaceC{
    using  namespace NamespaceB;
}


int main()
{
    NamespaceB::ClassB obj_b;
    NamespaceC::ClassB obj_c;

    obj_b.x = 3;
    obj_c.x = 4;

    cout << obj_b.x << endl;
    cout << obj_c.x << endl;


}
