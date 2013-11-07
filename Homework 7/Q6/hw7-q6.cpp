/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw7, q6
**	Date Created		:	October 30, 2013
**	Date Last Modified	:	October 30, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
6. Write a program that inputs an odd number from 1 to 35 and prints a diamond of aster-
isks. You may only use output statements that print a single asterisk (*) or a single blank.
Maximize the use of repetition with nested for loops and minimize the number of output
statements. Check the input to make sure it is not an even number nor it is outside the
range. Use do...while to ensure acceptable input value.

**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    int one, two, three, rows;
    do
    {
    cout << "Enter an odd number for rows (1 to 35) for the diamond of asterisks : ";
    cin >> rows;

    if( rows < 1 || rows > 35 || rows % 2 == 0 )
           cout << rows <<  " is not an odd number. Please re-try.\n";
           }
    while( rows < 1 || rows > 35 || rows % 2 == 0);

    for( two = 1; two <= rows; two += 2 )
    {
         for(one = 1; one <= (rows - two) / 2; one++)
         cout << " ";
              for(three = 1; three <= two; three++ )
                    cout << "*";
         cout << "\n";
         }
    for( two = rows - 1; two >= 2; two -= 2)
    {
         for( one = 1; one <= (rows - two + 1) / 2; one++)
              cout << " ";
              for(three = 1; three < two; three++ )
                    cout << "*";
         cout << "\n";
         }

    system("pause");
    return 0;
}

