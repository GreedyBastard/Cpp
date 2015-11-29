#include <iostream>
#include <fstream>

using namespace std;

/*
* For explanations and more details see "Files" and "FilesV2" folders
*/

int main()
{
    ofstream theFile("players.txt");//create the file

    cout << "Enter player ID, Name, and Money" << endl;
    cout << "Press CTRL+Z to quit\n" << endl; //end file marker

    //temporarily store the data
    int idNumber;
    string name;
    double money;

    while(cin >> idNumber >> name >> money){//while user will input info
            //input that info into file, formated as bellow
        theFile << idNumber << " " << name << " " << money << endl;
    }
}
