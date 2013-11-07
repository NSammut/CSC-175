/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q2
**	Date Created		:	October 18, 2013
**	Date Last Modified	:	October 20, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
2. A person invests $10000.00 in a savings account. Assuming that all interest is left on deposit
in the account, calculate and print the amount of money in the account at the end of 10 years
for interest rates of 1, 2, 3, 4, 5, 6, 7, 8, 9 and 10%. Use the following formula for determining
these amounts:
a = p * (1 + r)n^(1)
where p is the principal, r is the annual interest rate, n is the number of years, and a is the
amount on deposit at the end of the nth year.

**	Pseudocode:
**	1)Display rate and total title
**	2)for the rate is less than or equal to .10
**	3)loop through the formula given
**  4)also use fixed and setprecision(2) to display the ".1'0'"
**  5)end program
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double total = 0;
    cout << "Rate\t\tAmount at the end of 10th year\n====\t\t===============================\n";
        for(double i = 0.01;i <= 0.10;i += 0.01){
            total = 10000*pow((1+i), 10);
            cout << fixed << setprecision(2) << i << "\t\t\t" << total << "\n";
        }
    system("pause");
    return 0;
}
