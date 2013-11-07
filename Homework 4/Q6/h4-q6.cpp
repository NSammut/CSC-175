/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw4, q6
**	Date Created		:	October 2, 2013
**	Date Last Modified	:	October 8, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
6. Extra credit (20%) : Extend q2 above to accept variable length binary integer up to 10
digits.

**	Pseudocode:
**	1)ask for binary number
**	2)store binary number into variable
**	3)keep original binary
**  4)loop until binary doesnt equal 0
**  5)find the remainder when of binary divided by 10
**  6)make decimal equal to decimal + the remainder multiplied by i
**  7)make i *= 2 and binary /= 10
**  8)then print output
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int binary, decimal = 0, i = 1, remainder;
    cout << "Enter a binary number : ";
    cin >> binary;
    int binaryOriginal = binary;
    while(binary != 0){
        remainder = binary % 10;
        decimal = decimal + remainder * i;
        i *= 2;
        binary /= 10;
    }
    cout << "Decimal equivalent of " << binaryOriginal << " is " << decimal << ".\n";

    system("pause");
    return 0;
}
