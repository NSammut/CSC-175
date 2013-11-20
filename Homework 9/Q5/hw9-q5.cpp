/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q5
**	Date Created		:	November 19, 2013
**	Date Last Modified	:	November 19, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
5. Write a program using a recursive function to display the rst 25 Fibonacci numbers.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

int fibonacci(int i)
{
 if (i == 1)
  return 0;
 if(i == 2 || i == 3)
    return 1;
 else
  return fibonacci(i -1) + fibonacci(i - 2);
}

int main()
{
    for(int i = 1 ; i <= 25 ; i++){
        cout << "Fibonacci ( " << i << " ) = \t" <<  setw(5) << fibonacci(i) << "\n";
    }

   system("pause");
   return 0;
}

