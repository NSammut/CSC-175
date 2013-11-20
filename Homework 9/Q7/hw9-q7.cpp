/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q7
**	Date Created		:	November 19, 2013
**	Date Last Modified	:	November 19, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
7. Extra credit (5%): The tower of Hanoi is a puzzle consisting of three pegs mounted on a
board and n disks of various sizes with holes in their centers, stacked from largest to smallest
on the rst peg. Your objective: to move all the rings to the second or third tower. You can
only move the top ring on a given tower, and you can't place larger rings on top of smaller
rings. Write a recursive program that solves this puzzle for the number of disks specied by
the user. See the slides for more information.
**************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

void hanoi(char peg1, char peg2, char peg3, int disks) {

     if (disks == 1) {
        cout << "Move top disk from peg " << peg1 << " to " << peg2 << endl;
        return;
     }
     hanoi(peg1, peg3, peg2, disks - 1);
     cout << "Move top disk from peg " << peg1 << " to " << peg2 << endl;
     hanoi( peg3, peg2, peg1, disks - 1 );
}


int main()
{
   char peg1 = 'O';
   char peg2 = 'D';
   char peg3 = 'S';

   int disks;

   cout << "How many disks do you want to have? ";
   cin >> disks;

   if (disks < 1) {
       cout << "Nothing to move!\n";
   }
   else {
        hanoi(peg1, peg2, peg3, disks);
   }
  system("pause");
  return 0;

}
