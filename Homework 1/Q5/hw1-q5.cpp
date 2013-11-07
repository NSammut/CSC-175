/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw1, q5
**	Date Created		:	September 11, 2013
**	Date Last Modified	:	September 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Linux Ubuntu 12.04 LTS/Code:Blocks 10.05
**	Problem:
5) The workers have won a 7.6% pay increase, effective 6 months
 retroactively. This program is to accept the previous salary,
  then outputs the retroactive
pay due the employee, the new annual salary, and the new
 monthly salary.

Output:

Enter current annual salary.
I'll return new annual salary, monthly salary, and retroactive pay.
1000
new annual salary 1076
new monthly salary 89.6667
retroactive salary due: 38

**	Pseudocode:
**	1)ask for current salary
**	2)calculate annual by multiplying current by 1.076
**	3)calculate monthly by divising current by 12 and multiplying by 1.076
**  4)calculate retroactive salary due by finding the difference between 6 months
**    of the old and new salary
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    double annual, due, current, monthly;  //declares variables

    cout << "Enter current annual salary.\n"; //asks for current salary
    cin >> current;
    annual = current * 1.076; //calculates annual
    cout << "new annual salary " << annual;
    monthly = (current / 12.0) * 1.076;  //clculates monthly
    cout << "\nnew monthly salary " << monthly;
    due = (monthly * 6)- (current / 12 * 6);  //calculates amount due
    cout << "\nretroactive salary due: " << due;
    return 0;
}
