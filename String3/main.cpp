#include <iostream>

using namespace std;

/*
* Strings are like arrays of characters
*/

int main()
{
    string s1 = "Some string here";//string declaration
////////////////////////////////////////////////////////////////////
    //print every letter inside a string using an index
    cout << "\n------------------------------------------" << endl;
    cout << "Your string is: ";    for (int x = 0; x < s1.length(); x++){
        cout << s1.at(x);
    }
    cout << "\n------------------------------------------" << endl;

    //print the 4th letter ("e"), because 0 is first
    cout << "4th letter inside your string is : "<< s1.at(3);
    cout << "\n------------------------------------------" << endl;

////////////////////////////////////////////////////////////////////

    //replace a letter inside a string
    s1.at(5) = 'S';//replace "s" with "S"
    cout << "Replacing s with S : ";
    cout << s1;
    cout << "\n------------------------------------------" << endl;

 ////////////////////////////////////////////////////////////////////

    //replace an entire word ("Some" with "Other")
    cout << "Replacing Some with Another : ";
    while (s1.find("Some") != string::npos){//test if the string to replace is found. npos = not found
        s1.replace(s1.find("Some"), 4, "Another");//replace the string with another one
        cout << s1 << endl;//print out
    }
    cout << "------------------------------------------" << endl;

////////////////////////////////////////////////////////////////////

    //add something at the end of the string
    string s2 = "Some string here";
    string s3 = " that you like!";
    cout << "Adding 2 string together: " <<s2.append(s3);
    cout << "\n------------------------------------------" << endl;

////////////////////////////////////////////////////////////////////

    //adding at the beginning of a string
    //we use s3 and add something before that string:
    string s4 = " have something";//we want this to be added at the beginning of s3
    s3.insert(0, s4); //insert the content of s4 at the offset 0 in s3
    cout << s3 << endl;
    cout << "---" << endl;

    s3.insert(0, 1, 'I'); //insert 1 char "I" at the offset 0 in s3
    cout << s3 << endl;
    cout << "------------------------------------------" << endl;




}
