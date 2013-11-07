/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw7, q2
**	Date Created		:	October 30, 2013
**	Date Last Modified	:	October 30, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
2. A common application in computer graphics, as well as in many dierent subelds in science
and engineering, is to compute the distance between two points which involves Pythagorean
theorem and hence a square root calculation. However, as accuracy of the square root in-
creases the time to compute it also increases. Often, a very coarse granularity approximation
of the square root is good enough. Use Babylonian method (special case of Newton's method
{ Newton's method is a method in calculus for determining a zero of a function) and Halley
approximation to nd crude estimates of square root of numbers. You may need to do some
research about these algorithms.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double EPSILON = 1.0e-16;
double babylonianSquareRoot(double);
double halleySquareRoot(double);
double wholeNumberOfDigits(double);


double babylonianSquareRoot(double number)
{

    double estimate1 = number / 2;

    double estimate2 = ((estimate1 + number / estimate1) / 2);

    while ( abs( estimate1 / estimate2 - 1) > EPSILON )
    {
          estimate1 = estimate2;
          estimate2 = ((estimate1 + number / estimate1) / 2);
          }
          return estimate2;
    }

double halleySquareRoot(double number)
{

       double estimate1 = babylonianSquareRoot(number);

       estimate1 = (1 / estimate1);

       double temp = number * (estimate1 * estimate1);
       double estimate2 = estimate1 * (15 - temp  * (10 - 3 * temp)) / 8;

       while ( abs( temp - 1.0) > EPSILON * 10 )
       {
             estimate1 = estimate2;
             temp = number * estimate1 * estimate1;
             estimate2 = estimate1 * (15 - temp * (10 - 3 * temp)) / 8;
             }
             return (1 / estimate2);
             }
double wholeNumberOfDigits(double number)
{

       double estimate3 = sqrt(number);
       return(estimate3);
       }

int main()
{
    int num;

    cout << "Enter a number to find the square root : ";
    cin >> num;

    cout << "\nSquare root approximation by using the Babylonian Method is \n" << fixed << setprecision(20) << babylonianSquareRoot(num) << endl;

    cout << "\nSquare root approximation by using the Halley Method is \n" << fixed << setprecision(20) << halleySquareRoot(num) << "\n\n";

    cout << "\nSquare root by cmath function sqrt is\n" << fixed << setprecision(20) << wholeNumberOfDigits(num) << "\n\n";

    system("pause");
    return 0;
}
