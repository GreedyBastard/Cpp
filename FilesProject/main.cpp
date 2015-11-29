#include <iostream>
#include <fstream>


using namespace std;

/*
* A small project in which I will use the previous examples of working with files in C++
* Simulating a computer game
*/


int getWhatTheyWant();


//main function
int main()
{
    int whatTheyWant; //store the menu number user input

    whatTheyWant = getWhatTheyWant();// whatTheyWant = whatever number the user will choose

    //if the user choose 4, the program will to close
    while (whatTheyWant != 4){

        whatTheyWant = getWhatTheyWant();
    }

}

//getWhatTheyWant function, getting the user input number
//this menu will let the user choose a number corresponding to something
int getWhatTheyWant(){
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice; //get the user input and store it in the "choice" var
    return choice; //return that number we stored
}
