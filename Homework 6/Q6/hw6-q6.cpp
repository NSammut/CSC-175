/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q6
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
6. Write a function IntegerPower(base, exponent) that returns the value of base exponent . For
example, IntegerP ower(3, 4) = 3 4 = 3 ∗ 3 ∗ 3 ∗ 3 = 81. Assume that exponent is positive,
nonzero integer, and base is an integer. The function should use for or while loop to control
the calculation. Do not use any math library functions.

**	Pseudocode:
**	1)make function for i = 1 < exponent and i++
**	2)result *= base return result
**	3)ask for base and exponent
**  4)print base
**  5)print exponent
**  6)call function as IntegerPower(base, exponent)
**  7)end program
**************************************************************************/

#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

double exponent = 0, base = 0, result = 0;

double IntegerPower(double base, double exponent)
{
    for(int i = 1 ; i < exponent ; i++){
        result *= base;
    }
  return result;
}

int main(){
    cout << "Enter the base : ";
    cin >> base;
    cout << "Enter the exponent : ";
    cin >> exponent;
    result = base;

    cout << base << " to the power of " << exponent << " is " << fixed << IntegerPower(base, exponent);
}
