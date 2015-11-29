#include <iostream>

using namespace std;

int main()
{

    try {//code where the error might occur
        int momsAge = 30;
        int sonsAge = 31;

        if (sonsAge > momsAge){ //if this will return "true" then an exception will be thrown
            throw 99;//u can put any number, is just a reference number to throw
        }else{//if  no exception is thrown, then this will execute:
            cout << "Mom age: " << momsAge << endl;
            cout << "Son age: " << sonsAge << endl;
        }
    }catch(int x){//error handling, here 99 will be caught, the exception number
        cout << "Son can't be older then mom, ERROR NR: " << x << endl;
    }

}
