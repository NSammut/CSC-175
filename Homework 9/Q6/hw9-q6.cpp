/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q6
**	Date Created		:	November 19, 2013
**	Date Last Modified	:	November 19, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
6. Extra credit (5%): A robot can take steps of 1 meter or 2 meters. Write a recursive
program to calculate the number of ways the robot can walk n meters. Refer to the slides for
more information.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

int walk(int distanceOfWalk) {

     if (distanceOfWalk <= 2) {
        return distanceOfWalk;
     }

     return walk(distanceOfWalk - 1) + walk(distanceOfWalk - 2);

   system("pause");
   return 0;
}

int main()
{
   int counter, distanceOfWalk;

   cout << "Distance of the walk? ";
   cin >> distanceOfWalk;

   if (distanceOfWalk < 1) {
       cout << "The distance of the walk must be greater than zero!\n";
   }
   else {
        counter = walk(distanceOfWalk);
        cout << "The robot can walk " << distanceOfWalk << " meters in " << counter << " ways.\n";
   }

  system("pause");
  return 0;

}
