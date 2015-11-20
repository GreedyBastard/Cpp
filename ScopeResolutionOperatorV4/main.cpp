#include <iostream>

using namespace std;

/* Version 4 (https://msdn.microsoft.com)
*
*  Scope Resolution Operator ::
*
*  You can use chains of scope resolution operators.
*  In the following example, NamespaceD::NamespaceD1 identifies the
*  nested namespace NamespaceD1, and NamespaceE::ClassE::ClassE1
*  identifies the nested class ClassE1.
*
*/

namespace NamespaceD{
    namespace NamespaceD1{
        int x;
    }
}

namespace NamespaceE{

    class ClassE{
    public:
        class ClassE1{
        public:
            int x;
        };
    };
}

int main()
{
    NamespaceD::NamespaceD1::x = 1;
    NamespaceE::ClassE::ClassE1 e1;
    e1.x = 2;

    cout << NamespaceD::NamespaceD1::x << endl;
    cout << e1.x << endl;

}
