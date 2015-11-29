#include <iostream>
#include <fstream>//don't forget to include this header file

using namespace std;

/*
* Working with files the second example, with good programming practice applied
*/

int main()
{
    ofstream objectName("vector.txt");//create an object and associate a file, or create one if doesn't exist

    //checking if the file was associated correctly to our object
    if(objectName.is_open()){// that "is_open()" function check if the file is open and the object - file association is correct
            //if .is_open() return "true":
        objectName << "I wanna write this line inside my text file!" << endl;//write something inside
        objectName.close();//close the file and free memory
    }else{//if .is_open() return "false":
        cout << "Something is not right, you done something stupid!";
    }

}
