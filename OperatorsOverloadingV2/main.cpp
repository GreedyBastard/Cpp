#include <iostream>
#include "secondClass.h"

using namespace std;

int main()
{

    secondClass a(34);//take 34
    secondClass b(21);//take 21
    secondClass c; //blank object

    //takes a value (34) and add b value (21) and set the value of C
    c = a + b; //+
    cout << c.num <<endl;

}
