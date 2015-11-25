#include <iostream>
#include "secondClass.h"

using namespace std;

secondClass::secondClass() //when we don't pass anything, create a blank secondClass object
{

}

secondClass::secondClass(int a){//if we pass an integer, create an object that has a num

    num = a;
}

//because we return a secondClass object, we start with a secondClass type declaration
//this function takes as parameters a secondClass object named aso (another SecondClass object)
secondClass secondClass::operator+(secondClass aso){

    //return a brand new secondClass object
    secondClass brandNew;
    //adding the number property to the object created:
    //brandNew.num = current object number value + aso number value:
    brandNew.num = num + aso.num;
    return(brandNew); //return brand new SecondCLass object

}
