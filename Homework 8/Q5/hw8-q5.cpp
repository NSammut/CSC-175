/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q5
**	Date Created		:	November 12, 2013
**	Date Last Modified	:	November 12, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
5. Write a program that will check and print if the numbers from 1 to 20 are prime or not as
shown below. Implement checking the primeness in a function.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

bool checkPrime(int num){
    for(int i = 2 ; i < num ; i++){
        if(num % i == 0)
            return false;
        }
        return true;
}

int main()
{
    for(int num = 1 ; num <= 20 ; num++){
        cout << num;
        if(checkPrime(num))
            cout << " is prime\n";
        if(!checkPrime(num))
            cout << " is not prime\n";
    }
   system("pause");
   return 0;
}

