#include <iostream>

using namespace std;

/*
* A friend class in C++ can access the "private" and "protected" members
* of the class in which it is declared as a friend
*/

class someClass{
public:
    someClass(){
        someVar = 0; //in the constructor we set someVar = 0
    }
private:
    int someVar;

    // prototype a function inside this class,
    // that as a parameter will get a someClass object
    // and declare it as a "friend" :
    friend void someFriendFunction(someClass &sobj);
};

void someFriendFunction(someClass &sobj){ //getting access to a private variable

    sobj.someVar = 65;
    cout << sobj.someVar << endl;
}


int main()
{
    someClass obj; //create a "someClass" type object
    someFriendFunction(obj); //accessing a function inside that class
                             //and give her as a parameter an "someClass" object

}
