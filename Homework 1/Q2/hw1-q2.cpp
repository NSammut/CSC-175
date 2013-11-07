/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw1, q2
**	Date Created		:	September 11, 2013
**	Date Last Modified	:	September 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Linux Ubuntu 12.04 LTS/Code:Blocks 10.05
**	Problem:
2) Write a complete program that calculates and displays the product of three integers
read from keyboard. Add comments to the code where appropriate.

Test Data:
  (a)
Integer 1: 1
Integer 2: 2
Integer 3: 3

Product of 1, 2 and 3 is 6

  (b)
Integer 1: 10
Integer 2: 20
Integer 3: 30

Product of 10, 20 and 30 is 6000

**	Pseudocode:
**	1)Ask for 3 integers
**	2)calculate total product of the 3
**	3)print results
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int int1, int2, int3, total; //declares variables

    cout << "Input 3 integers: ";             //asks for all integer inputs
    cout << "\nInteger 1: ";
    cin >> int1;
    cout << "Integer 2: ";
    cin >> int2;
    cout << "Integer 3: ";
    cin >> int3;

    total = int1 * int2 * int3; //calculates the product of the 3

    cout << "\nProduct of " << int1 << ", " << int2 << " and " << int3 << " is " << total; //outputs total

    return 0;
}
