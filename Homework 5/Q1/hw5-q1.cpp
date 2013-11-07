/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q1
**	Date Created		:	October 15, 2013
**	Date Last Modified	:	October 15, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
1. A palindrome is a number or a text phrase that reads the same backwards as forwards. For
example, 12321, 3456543, etc. Write a program that reads in a five-digit integer and deter-
mines whether it is a palindrome. Hint: use the integer division and modulus operator to
separate the number into its individual digits.

**	Pseudocode:
**	1)ask for the 5 digit number
**	2)seperate 5 digit number with number 1X... % 10
**	3)if the last digit +1 is equal to the fourth digit and the fourth digit +1 is equal to the third
**  4)and if the second digit-1 is equal to the first digit, the number must be a palindrome
**  5)if not it isnt a palindrome
**************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int number = 0, one, two, three, four, five;
    cout << "Please Enter a 5-Digit Integer: ";
    start:
    cin >> number;
    if(number > 99999){
        cout << "ERROR: Please Enter Only A 5-Digit Number!\n";
        goto start;
    }
    one = number / 1 % 10;
    two = number / 10 % 10;
    three = number / 100 % 10;
    four = number / 1000 % 10;
    five = number / 10000 % 10;

    cout << "The Numbers Seperated Are ";
    cout << five << " " << four << " " << three << " " << two << " " << one << "\n";


    if(five == (four - 1) && three == (four + 1) && three == (two + 1) && one == (two - 1)){
            cout << number << " is a palindrome\n";
            goto end;
        }
    cout << number << " is NOT a palindrome\n";

end:
  system("pause");
  return 0;
}
