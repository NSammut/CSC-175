/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw2, q2
**	Date Created		:	September 18, 2013
**	Date Last Modified	:	September 18, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
2. Using only the techniques we covered so far, write a program that calculates the squares and
cubes of the five integers input from the keyboard by the user and prints a table whose first
column has the five integers entered, second column corresponding squares of the first column
and third the cubes. Use tabs to separate the columns.
Expected Output:
Enter 1st Integer : 2
Enter 2nd Integer : 4
Enter 3rd Integer : 23
Enter 4th Integer : 34
Enter 5th Integer : 5
Int Sqr Cube
2 4 8
4 16 64
23 529 12167
34 1156 39304
5 25 125

**	Pseudocode:
**	1)Ask user for 5 the five integers
**	2)using \t correctly space the columns
**	3)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cout << "Enter 1st Integer : ";
    cin >> a;
    cout << "Enter 2nd Integer : ";
    cin >> b;
    cout << "Enter 3rd Integer : ";
    cin >> c;
    cout << "Enter 4th Integer : ";
    cin >> d;
    cout << "Enter 5th Integer : ";
    cin >> e;
    cout << "Int \tSqr \tCube\n";
    cout << a << "\t" << a * a << "\t" << a * a * a << "\n";
    cout << b << "\t" << b * b << "\t" << b * b * b << "\n";
    cout << c << "\t" << c * c << "\t" << c * c * c << "\n";
    cout << d << "\t" << d * d << "\t" << d * d * d << "\n";
    cout << e << "\t" << e * e << "\t" << e * e * e << "\n";
    system("pause");
    return 0;
}
