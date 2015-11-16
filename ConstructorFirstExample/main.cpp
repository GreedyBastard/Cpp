#include <iostream>

using namespace std;

/* (from microsoft.com:)
* A constructor is a kind of member function that initializes an instance of its class.
* A constructor has the same name as the class and no return value.
* A constructor can have any number of parameters and a class may have any number of
* overloaded constructors.
* Constructors may have any accessibility, public, protected or private.
* If you don't define any constructors, the compiler will generate a default constructor
* that takes no parameters; you can override this behavior by declaring a default constructor as deleted.
* Using constructors you can set initial values to variables!
*/
/*
* In the example below, the string "John" will be assigned to "z", which will be then assigned
* to "x" and finally passed to the "name" variable.
*/

class someClass{

    public:
        someClass(string z){ //this is the constructor
            setName(z);      //give initial value of "z" to setName
                             // "z" will get the value below, in the main function when the object is created
        }
        void setName(string x){ //set name = x;
            name = x;
        }
        string printName(){     //return the name variable
            return name;
        }
    private:
        string name;

};

int main()
{
    someClass obj("John"); //creating the object but with given parameters
    cout << obj.printName() << endl; //print the name on the screen

    someClass obj2("Michael"); //creating another object with different parameters
    cout << obj2.printName() << endl; //printing on screen
    return 0;
}
