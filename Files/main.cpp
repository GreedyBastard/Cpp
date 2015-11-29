#include <iostream>
#include <fstream> //include this if working with files

using namespace std;

/*
* Creating a text file and writing a line inside it
*/

int main()
{
    ofstream objectName; //create an object that will have a file associated
    objectName.open("vector.txt"); //associate "vector.txt" with an object, if the file doesn't exist, it will create one
    objectName << "I wanna write something into my text file!\n";//write a line of text inside the text file
    objectName.close(); //free the memory and close the file
}
