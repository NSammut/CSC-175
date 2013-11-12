/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q4
**	Date Created		:	November 12, 2013
**	Date Last Modified	:	November 12, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:

**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void run(int number){
    for(int i = 1 ; i <= number ; i++)
        cout << i << " ";
}

int main()
{
    int number;

    cout << "Enter a number (to print all whole numbers from 1 to that number) : ";
    cin >> number;
    run(number);
    cout << "\n";

   system("pause");
   return 0;
}

