/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw2, q3
**	Date Created		:	September 18, 2013
**	Date Last Modified	:	September 18, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
3. A county collects property tax on the assessment value of property, which is 60% of the
property's actual value. If an acre of land is valued at $10000, then its assessment is $6000.
The property tax is then 64 cents for each $100 of the assessment value. The tax for the acre
assessed at $6000 will be $38.40. Write a program that asks for the actual value of a piece of
property and displays the assessment value and property tax.
Expected Output:
Enter the market value for the property : 10000
Property Tax for the market value of $10000 is $38.4

**	Pseudocode:
**	1)Ask for market value for property
**	2)Store value into a variable
**	3)Calculate the property tax by x*.6/100*.64
**  4)Print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double marketValue, propertyTax;
    cout << "Enter the market value for the property : ";
    cin >> marketValue;
    propertyTax = (((marketValue * .6)/ 100) * .64);
    cout << "Property Tax for the market value of $" << marketValue << " is $" << propertyTax << endl;
    system("pause");
    return 0;
}
