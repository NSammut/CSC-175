/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw4, q4
**	Date Created		:	October 8, 2013
**	Date Last Modified	:	October 8, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
4. Salespeople of a company are paid a fixed salary plus a commission based on sales. Base
salary is $200 and commission is 9% of their gross weekly sale. Develop a C++ program that
uses a while statement to input each salesperson's gross sales for last week and calculates and
displays his earnings. If gross sales entered is -1, the program quits.

**	Pseudocode:
**	1)while true
**	2)ask for sales and use counter to add more salesmen
**	3)use 200 + (.09 * sales) to find salary
**  4)output results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int counter = 1, grossSales;
    double salary = 0;
    while(true){
        cout << "Enter Sales for Salesman #" << counter << " \t: ";
        cin >> grossSales;
        if(grossSales == -1){
            goto end;
        }
        salary = 200 +(.09 * grossSales);
        cout << "Salary for Salesman #" << counter << " \t\t: " << salary << "\n\n";
    counter++;
    }
    end:
    cout << "Thank you for using our program!\n";
    system("pause");
    return 0;
}
