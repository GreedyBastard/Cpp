#include <iostream>

using namespace std;

template <class T> //generic template

class ClassName{//can take any type of data
public:
    ClassName(T x){
        cout << x << " is not a character, it's a number!" << endl;
    }
};

template<> //template specialization

//if a "char" type of data will be entered, then this class will handle it:
class ClassName<char>{//this class will handle only characters
public:
    ClassName(char x){
        cout << x << " is indeed a character!" << endl;
    }

};

template<>// -//-

class ClassName<string>{
public:
    ClassName(string x){
        cout << x << " is a string, actually!" << endl;
    }
};


int main()
{
    ClassName<int> obj1(13); //use generic template
    ClassName<double> obj2(2.323);//use generic template
    ClassName<char> obj3('V');//use specialized template (char)
    ClassName<string> obj4("Vector");//use specialized template (string)



}
