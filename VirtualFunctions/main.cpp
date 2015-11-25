#include <iostream>

using namespace std;

/* (from https://msdn.microsoft.com/):
* A Virtual Function is a member function that you expect to be redefined
* in derived classes. When you refer to a derived class object using a
* pointer or a reference to the base class, you can call a virtual function
* for that object and execute the derived class's version of the function.

* Virtual Functions ensure that the correct function is called for an object,
* regardless of the expression used to make the function call.
*/

class  Enemy{
public:
    virtual void attack(){ //virtual function
    }
};

class Ninja: public Enemy{
public:
    void attack(){
        cout << "Ninja attack!" << endl;
    }

};

class Monster: public Enemy{
public:
    void attack(){
        cout << "Monster attack!" << endl;
    }

};

int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->attack();
    enemy2->attack();

}
