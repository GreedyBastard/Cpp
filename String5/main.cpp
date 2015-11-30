#include <iostream>

using namespace std;

/*
* Erase function
* Replace function
* Insert Function
*/

int main()
{
    string s1("Some string here!");
    cout << s1 << endl;

    /* Erase function */
    //erase anything from index 11, including, to the end of the string
    s1.erase(11);
    cout << s1 << endl;

    /* Replace function */
    //using what is left from s1 to demonstrate: "Some string"
    //parameters:
    //(with what char do you want to begin, how many chars do you want to replace, with what do you want to replace it)
    s1.replace(0, 4, "Mega awesome");//replace "String" with "Mega awesome"
    cout << s1 << endl;

    /* Insert function */
    //insert a substring into the string
    //parameters
    //(where to begin inserting, what substring do you want to insert)
    s1.insert(5, "ultra ");//insert "ultra" after "Mega", counting the white space too, the starting index is 5
    cout << s1 << endl;


}
