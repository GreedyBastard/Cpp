#include <iostream>
#include <fstream>


using namespace std;

/*
* A small project in which I will use the previous examples of working with files in C++
* Simulating a computer game
*/

//prototypes
int getWhatTheyWant();
void displayItems(int x);


//main function
int main()
{
    int whatTheyWant; //store the menu number user input

    cout << "-----------------------------------------------------------\n";
    cout << "Press the corresponding number of what you want to see!\n\n";

    whatTheyWant = getWhatTheyWant();// whatTheyWant = whatever number the user will choose

    //if the user choose 4, the program will to close
    while (whatTheyWant != 4){
            //from 1 to 3:
        switch(whatTheyWant){
            case 1:
                displayItems(1); //display items with 1 as a parameter
                break;
            case 2:
                displayItems(2); //display items with 2 as a parameter
                break;
            case 3:
                displayItems(3); //display items with 3 as a parameter
                break;
        }

        whatTheyWant = getWhatTheyWant();//keep calling this function until the user will input 4
    }

}

//getWhatTheyWant function, getting the user input number
//this menu will let the user choose a number corresponding to something
int getWhatTheyWant(){
    int choice;

    cout << "-----------------------------------------------------------\n";
    cout << "Choose a number from 1 to 4!" << endl;
    cout << "\n1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program\n" << endl;
    cout << "-----------------------------------------------------------\n";

    cin >> choice; //get the user input and store it in the "choice" var
    return choice; //return that number we stored
}

//displayItems function
void displayItems(int x){ // x will be = to 1,2 or 3 depending on the user input

    ifstream objectFile("items.txt");//open the file where we stored the items data

    string name; //store the name of the item
    double power;//store the power of the item

    //test what choice they enter:
    if (x == 1){//if the choice is 1, display plain items, with power = 0

        while(objectFile >> name >> power){
            if(power == 0){
                cout << name << " " << power << endl;
            }
        }
    }
    if (x == 2){//if the choice is 2, display helpful items, with power > 0

        while(objectFile >> name >> power){
            if(power > 0){
                cout << name << " " << power << endl;
            }
        }
    }
    if (x == 3){//if the choice is 3, display harmful items, with power < 0

        while(objectFile >> name >> power){
            if(power < 0){
                cout << name << " " << power << endl;
            }
        }
    }
}
