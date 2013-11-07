/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw4, q5
**	Date Created		:	October 8, 2013
**	Date Last Modified	:	October 8, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
5. Write a program that reads in the size of a square and then prints a hollow square of that
size out of asterisks and blanks. Your program should work for squares of all sizes between 1
and 20. If the input is greater than 20 or less than 1 use 20 or 1, retrospectively.

**	Pseudocode:
**	1)ask for side length
**	2)use nested for loops to determine where the "*" should be
**	3)if its bigger than 20 or less than 1, use 20 for side length
**  4)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

void hollowSquare(int sum);

int main()
{
    int num;
    cout << "Enter length of side: ";
    cin >> num;
    if(num >= 20 || num <=1){
        cout << "Invalid Input\nUsing Default Value 20\n";
        hollowSquare(20);
        system("pause");
        return 0;
    }
    hollowSquare(num);
}


    void hollowSquare(int num){
 int col = 0, row = 0;
  while(col < num)
  {
    cout << "*";
    col++;
  }

  cout << "\n";

  row = 1;
  while(row < (num - 1))
  {
    cout << "*";
    row++;
    col = 2;
    while(col <= num)
    {
      if (col == num)
       cout << "*";
      else
        cout << " ";
      col++;
    }
    cout << "\n";
  }

  if ( row < num )
  {
    col = 0;
    while(col < num)
    {
      cout << "*";
      col++;
    }
  }
  cout << "\n";
  system("pause");
  return;
}
