#ifndef BIRTHDAY_H
#define BIRTHDAY_H


class Birthday
{
    public:
        Birthday(int m, int d, int y); //give constructor month, day and year as a parameters
        void printDate();//print birthday
    private:
        int month;
        int day;
        int year;
};

#endif // BIRTHDAY_H
