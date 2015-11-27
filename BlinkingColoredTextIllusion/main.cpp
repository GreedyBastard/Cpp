#include <iostream>
#include <windows.h>

using namespace std;

/*
* This is just an illusion for, there are better ways to do this
*/

enum Colors { blue, green, cyan, red, purple = 1, yellow, grey, dgrey, hblue, hgreen, hred, hpurple, hyellow, hwhite };
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

int main(int argc, char* argv[])
{
// print, clear, then print again 10 times
for (int i = 0; i < 10; i++)
{
    system("cls");
    SetConsoleTextAttribute(handle, hwhite);
    cout << "--------------------------------------" << endl;
    cout << "This is blinking colored text illusion\n";
    cout << "--------------------------------------" << endl;
    Sleep(500);
    system("cls");

}
return 0;
}


