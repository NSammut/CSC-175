/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q2
**	Date Created		:	November 22, 2013
**	Date Last Modified	:	November 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
2. Write a recursive function that computes F(n) = 2 + 4 + 6 + ... + 2n. Calculate F(n) in
function by using the "pass-by-reference" technique.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

 int total = 0;
 int n;

unsigned int theFunction(int &n){
    int num;
    for(num = n * 2 ; num > 0 ; num -= 2){
        total += num;
    }
    return total;
}

int main()
{
    cout << "Enter n for computing F(n): ";
    cin >> n;
    cout << "F( " << n << " ) = " << theFunction(n) << "\n";
   system("pause");
   return 0;
}

