/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q4
**	Date Created		:	November 22, 2013
**	Date Last Modified	:	November 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
6. The factorial function results reported in the expected output for hw8-q3 were not correct.
See http://www.nitrxgen.net/factorialcalc.php
Write an accurate factorial function. Hint: Store the individual digits of the factorial in an
integer array.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int fact[150] = {0};
double factorial = 1;
int number;
int main()
{
    cout << "Enter a number for factorial calculation: ";
    cin >> number;
    if(number > 150 || number < 1){
        cout << "Number cannot be less than 1 or greater than 150. Exiting.\n";
        system("pause");
        return 0;
    }
    int temp = number;
    for(int i = 0 ; i < number ; i++){
    fact[i] = temp;
    temp--;
    factorial *= fact[i];
    }

    cout << setprecision(0) << fixed << factorial << "\n";
   system("pause");
   return 0;
}
