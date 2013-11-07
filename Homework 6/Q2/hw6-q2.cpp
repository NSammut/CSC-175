/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q2
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
2. Write a program that prints a table of binary, octal and hexadecimal equivalents of the deci-
mal numbers in the range 0 through 255.

**	Pseudocode:
**	1)DIDNT FINISH
**	2)
**	3)
**  4)
**  5)
**  6)
**************************************************************************/

#include <iostream>

using namespace std;

int decToBinary(int i){
    int quotient = i;
    while(true){
    quotient /= 2;
    int remainder = quotient % 2;
    cout << remainder;
    }
}



int main()
{
    cout << "Decimal\tBinary\tOctal\t\tHex\n";
    cout << "======================================\n";
    for(int i = 0 ; i <= 255 ; i++){
        cout << i << "\t" << decToBinary(i) << "\t" << i << "\t\t" << i << "\n";
    }
    return 0;
}
