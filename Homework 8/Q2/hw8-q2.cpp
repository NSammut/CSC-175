/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q2
**	Date Created		:	November 7, 2013
**	Date Last Modified	:	November 7, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
2. The expression C(n; r) denotes the number of r-element subsets of an n-element set. For
example, C(4; 2) is 6 because there are six 2-element subsets of a 4-element set. The value of
C(n; r) is given by the formula
c(n; r) =
n!
r!  (n 􀀀 r)!
(1)
Write a program that computes C(n; r) using the following component functions.
(a) main: prompts the user for two numbers and accents them into n and r, respectively.
(b) check: compares r and n. If r > n, check invokes the function err msg, which prints an
appropriate error message.
(c) comb: computes C(n; r).
(d) fact: computes factorial.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

double fact(int num){
    if(num <= 0)
        return 1;
    double result = num;
    while(--num > 1)
        result *= num;
    return result;
}

double comb(int n, int r){
    return fact(n)/(fact(r) * fact(n - r));
}

void check(int n, int r){
        if(r > n){
            cout << "n must be greater than or equal to r in C(n,r)\n";
            system("exit");
        }
        else
            cout << comb(n,r) << "\n";
}

int main()
{
   int n, r;
   cout << "Enter n in C(n,r): ";
   cin >> n;
   cout << "Enter r in C(n,r): ";
   cin >> r;
   check(n, r);
   system("pause");
   return 0;
}

