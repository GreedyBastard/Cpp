#include <iostream>
#include <string>

using namespace std;
/*
* Substrings
* Swap function
* Find function
*/

int main()
{
    string s1 = "Some string here that you want!";

    /*Substring*/
    //parameters: (what char to begin with,  how many indexes(letters))
    //read from (starting_index to end_index)
    cout << s1.substr(0, 4) << endl;//this will print "Some", because index 0 = S, and "Some" takes 4 indexes
    cout << s1.substr(5, 6) << endl;//print "string"
    cout << s1.substr(12, 4) << endl;//print "here"

    cout << "--------------------------------------------------" << endl;

    /*Swap function*/
    //swap a string with another string
    string one("apples ");
    string two("beans ");

    cout << one << two << endl;
    one.swap(two);//swap "beans" with "apples"
    cout << one << two << endl;
    cout << "--------------------------------------------------" << endl;

    /* Find function */
    //goes from left to right and it will show the first index where the char is find
    string s2 = "some string here with multiple words bla bla bla";
    cout << s2.find("e") << endl;//this will return 3, because first "e" is at the 3rd index
    cout << s2.find("some") << endl;//this will return 0, because first letter in "some" is "s" and is located at index 0

    /* RFind function */
    //recursive finding, goes from right to left and print the first index where the char is found
    //the index is still counted from left to right tho
    cout << s2.rfind("a") << endl;//read from right to left and print first index where "a" is met





}
