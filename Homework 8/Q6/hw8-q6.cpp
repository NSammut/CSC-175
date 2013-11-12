/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q6
**	Date Created		:	November 12, 2013
**	Date Last Modified	:	November 12, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
6. Write a program that nds the rst prime number greater than one billion.

**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

bool checkPrime(int number){
    for(int i = 2 ; i < number ; i++){
        if(number % i == 0)
            return false;
        }
        return true;
}

int main()
{
    for(int counter = 1000000000 ; ; counter++){
        if(checkPrime(counter)){
            cout << counter << "\n";
            break;
        }
    }

   system("pause");
   return 0;
}

