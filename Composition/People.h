#ifndef PEOPLE_H
#define PEOPLE_H

#include <string>//working with strings
#include "Birthday.h" //because we will store a birthday object

using namespace std;


class People
{
    public:
        People(string x, Birthday bo); //x = name, bo = birthday object
        void printInfo(); // print the "name" variable
    private:
        string name;
        Birthday dateOfBirth; //object from birthday class

};

#endif // PEOPLE_H
