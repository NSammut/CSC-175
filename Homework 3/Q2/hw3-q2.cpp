/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q2
**	Date Created		:	September 24, 2013
**	Date Last Modified	:	September 24, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
2. Write a program that reads two integers from the keyboard and prints if the first is a multiple
of the second. Hint: Use modulus operator.
Test Data:
(i)
Enter the first integer : 23
Enter the second integer : 58
23 is NOT evenly divisible by 58
(ii)
Enter the first integer : 240
Enter the second integer : 3
240 is evenly divisible by 3

**	Pseudocode:
**	1) ask for two inputs and store them to variables
**	2) use first % second and store int into a variable
**	3) if variable is 0 then it is evenly divided
**  4) if not, it isnt evenly divided
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int first, second, calculate;
    cout << "Enter the first integer : ";
    cin >> first;
    cout << "Enter the second integer : ";
    cin >> second;
    calculate = first % second;
    if(calculate == 0){
        cout << first << " is evenly divisible by " << second << endl;
    }
    else {
        cout << first << " is NOT evenly divisible by " << second << endl;
    }
    system("pause");
    return 0;
}
