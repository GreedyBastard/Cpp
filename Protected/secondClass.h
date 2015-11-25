#ifndef SECONDCLASS_H
#define SECONDCLASS_H


class secondClass
{
    public:
        //anyone can access these:
        int publicVar;
        secondClass();
    protected:
        //only some can access these  (see wiki):
        //including those who inherit (thirdClass):
        int protectedVar;
    private:
        //only this class can access these:
        int privateVar;
};

#endif // SECONDCLASS_H
