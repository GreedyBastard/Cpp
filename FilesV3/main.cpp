#include <iostream>
#include <fstream>

using namespace std;
/*
* Read info from a file
*/

int main()
{
    //
    ifstream theFile("players.txt");

    int id;
    string name;
    double money;



    //while (!theFile.eof()) can be used too
    while(theFile >> id >> name >> money){ //read every line until the file pointer is at the end of the file
        cout << id << ", " << name << ", " << money << endl;
    }
    //we don't have to close the file with object.close(), because when the "while" loop return false, the destructor will delete the object

}
