/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw2, q1
**	Date Created		:	September 18, 2013
**	Date Last Modified	:	September 18, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
1. Write a program that inputs a five-digit integer, separates the integer into its individual digits
and prints the digits separated from one another by tab length. Hint: Use integer division
and modulus operator.
For example, if the user types in 66095, the program should print
6 6 0 9 5
00021 as input should give
0 0 0 2 1

**	Pseudocode:
**	1)Ask user for the 5 digit integer
**	2)store 5 digit integer into variable
**	3)print and calculate the digits with "number % 1000... % 10"
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a;
    cout << "Enter The Five Digit Integer To Be Split: ";
    cin >> a;
    cout << (a/10000%10) << " " << (a/1000%10) << " " << (a/100%10) << " " << (a/10%10) << " " << (a%10) << endl;
    system("pause");
    return 0;
}
