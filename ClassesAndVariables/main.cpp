#include <iostream>
#include <string>

using namespace std;

/*
* Make variables always private, and build functions as public.
* Doing so, is a good practice to not let anyone else mess with them.
* To use private variables, you must define the functions inside the same class.
* Make only the functions public.
*/
class someClassHere{
    private:
        string name; //declaring private variable

    public: // 2 functions, one to set the name, other to print the name
        void setName(string x){ //void type, because is not returning anything
            name = x; //make name = to anything we give as a parameter, later
        }
        string printName(){ //using "string" type, because it will return a string
            return name;
        }

};

int main()
{
    someClassHere objName;  //creating the object
    objName.setName("Ghita"); //setting the name to "Ghita"
    cout << objName.printName() << endl;    //printing the name on screen
    return 0;
}
