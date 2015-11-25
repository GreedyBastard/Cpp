#ifndef SECONDCLASS_H
#define SECONDCLASS_H


class secondClass
{
    public:

        int num;

        //creating 2 constructors
        secondClass();//when we don't pass anything
        secondClass(int);//when passing an integer

        secondClass operator+(secondClass); //overloading the + operator


};

#endif // SECONDCLASS_H
