// file1.cpp -- example of a three-file program
#include <iostream>
#include "coordin.h" // structure templates, function prototypes
using namespace std;
int main()
{
    rect rplace;
    polar pplace;

    cout << "Enter the x and y values: ";
    cout << "Bye!\n";
// keep window open in MSVC++
    cin.clear();
    while (cin.get() != '\n')
        continue;
    cin.get();
    return 0; 
}
