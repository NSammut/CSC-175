/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q7
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
Extra credit (7%): Combine your code for q4 above to print the triangles side by side as
shown below:

**************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    for(int row = 1 ; row <= 10 ; row++){
        //first
        for(int column = 1 ; column <= row ; column++)
            cout << "*";
        for(int space = 1 ; space <= 10 - row ; space++)
            cout << " ";
            cout << "\t";
        //second
        for(int column = 10 ; column >= row ; column -= 1)
            cout << "*";
        for(int space = 1 ; space < row ; space++)
            cout << " ";
            cout << "\t";
        //third
        for(int space = 10 ; space > row ; space -= 1)
            cout << " ";
        for( int column = 1 ; column <= row ; column++)
        cout << "*";
        cout <<"\t";
        //fourth
        for(int space = 1 ; space < row ; space++)
            cout << " ";
        for(int column = 10 ; column >= row ; column -= 1)
        cout << "*";
        cout << "\n";
    }
  return 0;
}
