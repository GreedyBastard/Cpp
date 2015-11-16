#include <iostream>

using namespace std;
/*
*Classes and objects example.
*Grouping functions in a class, depending on what they are meant to do.
*Without using objects, the main class doesn't know which function to refer to.
*In this example, will be used same function name, in different class, printing something else
*and accessing those functions using objects.
*/

class classExample{

    public: //declaring functions as "public" make them visible outside this class
        void saySomething(){
            cout << "Print something here, from classExample!" << endl;
        }
        void saySomethingElse(){
            cout << "Print something else here, still from classExample!" << endl;
        }

};

class classAnotherExample{

    public:
        void saySomething(){
            cout << "Print something here, from classAnotherExample!" << endl;
        }
        void saySomethingElse(){
            cout << "Print something else here, still from classAnotherExample!" << endl;
        }
};

int main()
{
    /*Creating an object to access the stuffs inside classExample.
    *First declare the class you want to use(classExample) then
    *give the object a name (objectExampleName) as below:
    */
    classExample objectExampleName;
    //using the object created, to access the "saySomething()" function:
    objectExampleName.saySomething();
    //using the same object to access the other function "saySomethingElse":
    objectExampleName.saySomethingElse();
    //this is possible only if the functions are declared as "public" inside the classExample class

    /*Creating another object to use the functions
    *inside the "classAnotherExample" class
    */
    classAnotherExample objectAnotherExampleName;
    //same thing as up:
    objectAnotherExampleName.saySomething();
    //
    objectAnotherExampleName.saySomethingElse();

    return 0;
}
