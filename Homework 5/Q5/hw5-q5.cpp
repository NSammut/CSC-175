/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q5
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
5. Write a program that computes the value of ex by using the formula
...
Prompt the user for the desired accuracy of e, i.e. the number of terms in the summation
and the power of "e". Use 10 digits of precision to display the result.

**	Pseudocode:
**	1)use same exact programming as question 4
**	2)just let user input x as well
**	3)then use the pow() function to get the value
**  4)pow(eTotal,x)
**  5)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double number = 0, factorial = 1, eTotal = 1;

    double desiredAccuracy, i = 1, x;
    cout << "Enter the exponent of e : ";
    cin >> x;
    cout << "Desired Accuracy for ""e"" (number of terms in the series) : ";
    cin >> desiredAccuracy;
        while (i <= desiredAccuracy)
            {
            int counter1 = i, initial = i;

            double eFactorial = i;
            int counter = 1;
            while (counter1 > 1)
            {
                    eFactorial *= (initial-counter);
                    counter++;
                    counter1--;
      }
      eTotal += (1/eFactorial);
      i++;
}

    cout << "e^" << x << " with " << desiredAccuracy << " terms = " << setprecision(desiredAccuracy) << pow(eTotal, x) << " (with " << desiredAccuracy << " digits of accuracy)\n";


    system("pause");
    return 0;
}
