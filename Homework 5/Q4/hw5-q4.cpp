/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q4
**	Date Created		:	October 20, 2013
**	Date Last Modified	:	October 20, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
4. The factorial of a nonnegative integer n is written n! (pronounced "n factorial") and is defned
as follows:...

(a) Write a program that reads a nonnegative integer and computes and prints its factorial.
Do not use scientific notation for displaying the result.
(b) Write a program that estimates the value of mathematical constant e by using the
formula:...

Prompt the user for the desired accuracy of e, i.e. the number of terms in the summation.
Use 10 digits of precision to display the result.


**	Pseudocode:
**	1)Ask for the number to be factorial'd
**	2)use the formula n *= n-1 to find the factorial
**	3)then use that program inside of the second program
**  4)and use the formula e += 1/factorial when e is first declared to 1
**  5)then loop the factorial up until the desired accuracy is met and print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double number = 0, factorial = 1, eTotal = 1;

    cout << "Number for Factorial : ";
    cin >> number;
    factorial = number;
    for(int i = 1; i < number ; i++){
        factorial *= (number - i);
    }
    cout << number << "!" << " = " << fixed << factorial << "\n";
    //-----------------------------------------------------------------------------------
    int desiredAccuracy, i = 1;
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

    cout << "e with " << desiredAccuracy << " terms = " <<  setprecision(desiredAccuracy) << eTotal << " (with " << desiredAccuracy << " digits of accuracy)\n";


    system("pause");
    return 0;
}
