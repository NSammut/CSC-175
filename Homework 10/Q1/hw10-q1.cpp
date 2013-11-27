/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q1
**	Date Created		:	November 20, 2013
**	Date Last Modified	:	November 20, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
1. Use a one-dimensional array to solve the following program: Read in 20 numbers, each of
which is between 10 and 100, inclusive. As each number is read in, validate it and store it in
the array only if it is not a duplicate of a number already read. After reading all the values,
display only the unique values that the user has entered.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;
int numbersMaybe;
int numbers[10] = {};

int main()
{
    cout << "Enter 10 integers between 10 and 100: ";
    for(int i = 0 ; i < 10 ; i++){
        start:
        cin >> numbersMaybe;
        if(numbersMaybe < 10 || numbersMaybe > 100){
            cout << "Invalid number.\n";
            goto start;
        }
        for(int x = 0 ; x < 10 ; x++){
            if(numbersMaybe == numbers[x]){
                cout << "Duplicate number.\n";
                goto start;
            }
        }
        numbers[i] = numbersMaybe;

    }
    cout << "\nThe nonduplicate values are:\n";
    for(int a = 0 ; a < 10 ; a++){
        cout << numbers[a] << " ";
    }
    cout << "\n";
   system("pause");
   return 0;
}

