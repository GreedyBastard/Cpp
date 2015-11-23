#include <iostream>
#include "Birthday.h"
#include "People.h"

using namespace std;


int main()
{
    Birthday birthObj(01,13,1990); //pass month, day, year to Birthday class constructor

    People pplObj("James Blond", birthObj); //set the "name" from People class to James Blond
                                            //and set birthObj = dateOfBirth
    pplObj.printInfo(); //use printInfo() function from People class

    cout << "^---------------------^ ^--------^" << endl;
    cout << "|     People class    | |Birthday class|" << endl;
    cout << "|     function        | |function      |" << endl;


}
