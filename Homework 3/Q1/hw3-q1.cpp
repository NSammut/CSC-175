/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q1
**	Date Created		:	September 24, 2013
**	Date Last Modified	:	September 24, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
1. Write a program that reports whether a number input is divisible by 7.
Hint: If a number is divisible by 7, that means you can divide it by 7 and get a remainder
of 0.
Test Data:
(i)
Enter an integer number : 79
Your integer number: 79 is not divisible by 7
(ii)
Enter an integer number : 28
Your integer number: 28 is divisible by 7

**	Pseudocode:
**	1) Ask and set an input for a number
**	2) calculate the number % 7
**	3) if caclulated to 0, return saying it is divisible
**  4) if not 0, return saying it is not divisible
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int number = 0, numberCalculated;
    cout << "Type -1 for the number to stop the program at any time.\n";
    cout << "Enter an integer number : ";
    cin >> number;

        while(number != -1){

    numberCalculated = number % 7;
        if(numberCalculated == 0){
            cout << "Your integer number : " << number << " is divisble by 7.\n\n";
        }
        else{
            cout << "Your integer number : " << number << " is not divisible by 7.\n\n";
        }
        cout << "Enter an integer number : ";
        cin >> number;
        }
    system("pause");
    return 0;
}
