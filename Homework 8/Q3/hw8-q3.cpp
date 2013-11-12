/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q3
**	Date Created		:	November 7, 2013
**	Date Last Modified	:	November 7, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
3. Write a program to calculate the factorial by means of a function. Note: The result will
not be accurate for relatively larger numbers with the built-in C++ data types. We will
implement the accurate one later with arrays.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

double fact(int num){
    if(num <= 0)
        return 1;
    double result = num;
    while(--num > 1)
        result *= num;
    return result;
}

int main()
{
    int num;
    cout << "Enter a number for factorial computation and press ENTER: ";
    cin >> num;
    cout << num << "! (by Factorial Function) is " << fixed << fact(num) << "\n";
   system("pause");
   return 0;
}

