#include <iostream>

using namespace std;

template <class T>//generic data type
class ClassName{
    T first, second;
public:
    ClassName(T a,T b){
        first = a;
        second = b;
    }
    T bigger();//return the biggest number
};

template <class T>//u need this before building any function

T ClassName<T>::bigger(){
    return (first > second ? first : second);
}

//template <class T>

//T ClassName<T>::AnotherFunction(){}

//.......


int main()
{
    ClassName <int> obj(32,123);//we need to declare what type of data we use (int), so T become an "int"
    cout << obj.bigger() << endl;
    //...........................
    ClassName <double> obj2(32.123,534.12);
    cout << obj2.bigger();

}
