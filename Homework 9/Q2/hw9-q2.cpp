/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q2
**	Date Created		:	November 15, 2013
**	Date Last Modified	:	November 15, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
2. An integer is said to be a perfect integer if the sum of its factors, including 1, but not the
number itself, is equal to the number. For example, 6 is a perfect integer because 6 = 1 + 2
+ 3. Write a function (perfect) that determines whether a given number is a perfect integer.
Use this function in a program that determines and prints all perfect numbers between 1 and
1000. Print the factors of each perfect integer to conrm. Put your computer to hard work
to nd the fth perfect integer. First is 6, second is 28, etc.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

int perfectNumber(int a)
{
    int i, sum = 1;
    for (i = 2; i < a; i++)
    if (a % i == 0)
       sum += i;
    if ( sum == a)
       return 1;
    else
        return 0;
        }


int main()
{
    int number, x, count = 0;

    cout << "Perfect integers between 1 and 1000 are: \n";

    for ( number = 1; number <= 1000; number++)
    {
        x = perfectNumber(number);
        if (x == 1)
           cout << number << "\n";
           }

    cout << "\nThe 5th perfect number is: ";
    number = 0;

    while (count < 5)
    {
          x = perfectNumber(number);
          if (x == 1)
             count++;
          if (count == 5)
             cout << number << endl;
          number++;
          }
    system("pause");
    return 0;
}


