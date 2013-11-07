/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw1, q3
**	Date Created		:	September 11, 2013
**	Date Last Modified	:	September 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Linux Ubuntu 12.04 LTS/Code:Blocks 10.05
**	Problem:
3) Write a program that reads the value (x) from keyboard and calculates y based on the following
formula:

   y = 6x^2 + 12x - 27

Test Data:

  (a)
Enter x = 2

y = 21

    (b)
Enter x = -3

y = -9

**	Pseudocode:
**	1)ask for an int to go into x variable
**	2)calculate y by plugging in x
**	3)print result of y
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int x, y;   //declares variables

    cout << "Input an x to plug into the formula: y = 6x^2 + 12x - 27";
    cout << "\nx = ";  //asks for x
    cin >> x; //prompts x input

    y = (6 * (x * x)) + (12 * x) - 27; //calculates y

    cout << "y = " << y;// outputs y


}
