#include <iostream>

using namespace std;

/*
*It is possible to use same variables names for different functions.
*Below is an example, "a", "b", "c", "d" and "answer" used for 3 different functions.
*The number of parameters you can use is unlimited, you can add as many as you want, separating them by a comma.
*/

int addNumbers(int a, int b, int c, int d); //function prototype
int multiplyNumbers(int a, int b, int c, int d);
int divideNumbers(int a, int b, int c, int d);

int main()
{
    //print the sum of the given numbers:
    cout << "The sum of those numbers is: " << addNumbers(4, 5, 15, -20) << endl;  //return 4
    //print the multiplication:
    cout << "The multiplication of those numbers is: " << multiplyNumbers(2, 1, 2, 3) << endl; //return 12
    //print division
    cout << "The division of those number is: " << divideNumbers(120, 3, 10, 4) << endl; //return 1

    return 0;
}

int addNumbers(int a, int b, int c, int d){ //sum the numbers

    int answer = a + b + c + d;             //calculate the sum
    return answer;                          //return the sum
}

int multiplyNumbers(int a, int b, int c, int d){ //multiplication

    int answer = a * b * c * d;
    return answer;
}

int divideNumbers(int a, int b, int c, int d){  //division

    int answer = a / b / c / d;
    return answer;
}
