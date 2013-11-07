/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q3
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
3. Write a program that reads five numbers (between 1 and 30). Assume that the user only en-
ters valid values. For each number that is read, your program should output a line containing
that number of adjacent asterisks.
**	Pseudocode:
**	1)ask for the 5 numbers
**	2)for int a = 1 until 5 a++
**	3)input number
**  4)then nested for loop to print asterisks "number" times
**  5)print * in loop
**  6)end line for aesthetics
**  7)end program
**************************************************************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int number;

    cout << "Enter 5 numbers between 1 and 30: \n";
    for(int a = 1; a <= 5 ; a++){
        cin >> number;
        for(int b = 1 ; b <= number; b++){
        cout << "*";
        }
        cout << endl;
    }

  return 0;
}
