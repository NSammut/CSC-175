/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q4
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
4. Write a program that uses for statements to print the following separately, one below the
other. Use for loops to generate the patterns. All asterisks should be printed by a single
statement of the form ( cout << ’*’; and cout << " " ).
**************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //first
    for(int row = 10 ; row >= 1 ; row -= 1){
        for(int column = 1 ; column <= row ; column++){
            cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    //second
    for(int row = 1 ; row <= 10 ; row++){
        for(int column = 1 ; column <= row ; column++){
            cout << "*";
            }
            cout << "\n";
        }
        cout << "\n";
    //third
    for(int row = 10 ; row >= 1 ; row -= 1){
        for(int space = 10 ; space > row ; space -= 1){
            cout << " ";
            }
        for(int column = 1 ; column <= row ; column++){
            cout << "*";
            }
            cout << "\n";
        }
        cout <<"\n";
        //fourth
    for(int row = 10 ; row >= 1 ; row -= 1){
        for(int space = 1 ; space < row ; space++){
            cout << " ";
            }
        for(int column = 10 ; column >= row ; column -= 1){
        cout << "*";
            }
            cout << "\n";
            }


  return 0;
}
