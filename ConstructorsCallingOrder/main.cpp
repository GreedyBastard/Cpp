#include <iostream>

using namespace std;

/* (from microsoft.com):
* The following example shows the order in which base class and member constructors
* are called in the constructor for a derived class. First, the base constructor is
* called, then the base-class members are initialized in the order in which they
* appear in the class declaration, and then the derived constructor is called.
*/

class Contained1{
    public:
        Contained1(){ //constructor
            cout << "Contained1 constructor" << endl;
        }
};

class Contained2{
    public:
        Contained2(){ //constructor
            cout << "Contained2 constructor." << endl;
        }
};

class Contained3{
    public:
        Contained3(){  //constructor
            cout << "Contained3 constructor" << endl;
        }
};

class BaseContainer {
    public:
        BaseContainer(){
            cout << "BaseContainer constructor" << endl;
        }
    private:
        Contained1 c1;//creating an object will call the constructor
        Contained2 c2;//from the class which is created
};

class DerivedContainer : public BaseContainer{
    public:
        DerivedContainer(){
            cout << "DerivedContainer constructor" << endl;
        }
    private:
        Contained3 c3;
};



int main()
{
    DerivedContainer dc;

    return 0;
}
