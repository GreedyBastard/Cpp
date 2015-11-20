#include <iostream>

using namespace std;

/*
* Default parameters/arguments implementation
*/

//if the function doesn't get any other parameters, then it will use the one in the function prototype bellow
int volume(int l = 7, int w = 4, int h = 3); //we give some default parameters here

int main()
{
    cout << volume(1,2); //these parameters will override the first 2 default parameters
                         //if the volume() gets only 1 parameter, then it will be = to the first default value
                         //and it will use the rest of the default values for completion
}

int volume(int l, int w, int h){

    return l * w * h;   //doing the math here

}
