#include <iostream>
#include <string>

using namespace std;

/*
* Storing an entire string line inside a string variable, not only the first word
*/

int main()
{
    //a normal "cin" syntax will get only the string until it meets a white space
    //for example if you input "C++ is my love!", only the first word "C++" will get stored inside your variable
    //if you want to store more then one word, you need to use as bellow:

    string x;//variable that will store the string
    getline(cin, x);//the end of the input will be determined by the end of the line, not by the first white space
    cout << "The string you entered is: " << x << endl;//print out

}
