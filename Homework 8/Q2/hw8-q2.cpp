/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q2
**	Date Created		:	November 7, 2013
**	Date Last Modified	:	November 7, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:

**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int n = 0, r = 0;

double factorial(int n){
    int num = 1;

       for (int i = 1; i <= n; i++)
           num *= i;
}


int main()
{
   cout << "Enter n in C(n,r): ";
   cin >> n;
   cout << "Enter r in C(n,r): ";
   cin >> r;
        if(n < r){
            cout << "n must be greater than or equal to r in C(n,r)\n";
            main();
        }
    cout << factorial(n) / (factorial(r) * factorial(n-r));
    cout << "\n";

   system("pause");
   return 0;
}

