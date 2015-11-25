#include <iostream>

using namespace std;

/*
* C++ polymorphism means that a call to a member function will
* cause a different function to be executed depending on the type
* of object that invokes the function.
*/

class Enemy{
protected:
    int attackPower;
public:
    void setAttackPower(int a){
        attackPower = a;
    }
};

class Ninja: public Enemy{
public:
    void attack(){
        cout << "I am a ninja! - " << attackPower << " damage." << endl;
    }
};

class Monster: public Enemy{
public:
    void attack(){
        cout << "I am a monster! - " << attackPower << " damage." << endl;
    }
};

int main()
{
    Ninja n; //create a ninja object
    Monster m;//--//--

    Enemy *enemy1 = &n;//create pointer to ninja enemy
    Enemy *enemy2 = &m;//--//--

    enemy1->setAttackPower(15);//set the damage
    enemy2->setAttackPower(60);//--//--

    n.attack();//apply the damage
    m.attack();//--//--
}
