#include <iostream>

using namespace std;

/*
* How to declare and copy a string
*/

int main()
{
    string s1("cute");//creating a string
    string s4 = "hamster";//or you can create one like this
    string s2;//creating a blank string
    string s3;// -- // --


    s2 = s4; //copy a string
    //or
    s3.assign(s1);//another way to copy a string

    cout << s1 << " " << s2 << " " << s3 << " " << s4 << endl;//print them
}
