/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q9
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
9. Extra credit: Reduce the number of times the innermost loop is executed to about 1
12th (or
more maybe) of the normal case, where we go through all the 3-number combinations. The
innermost loop should be executed no more than 10323125 times to get the 10% extra credit.
Further improvement will be 15% additional extra credit.

**	Pseudocode:
Same as second part of Q3
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

int side1, side2, hypotenuse, innerLoop = 0, innerLoopNoDuplicates = 0, withDuplicates = 0, withoutDuplicates = 0;

for (side1 = 1; side1 <= sqrt(pow(500, 2) / 2); side1++){
    for (side2 = side1; side2 <= round(sqrt(pow(500, 2) - pow(side1, 2))); side2++){
        hypotenuse = round(sqrt(pow(side1, 2) + pow(side2, 2)));
            innerLoopNoDuplicates++;
            if (( side1 * side1 ) + ( side2 * side2 ) == ( hypotenuse * hypotenuse)){
            withoutDuplicates++;
            }
        }

    }


cout << "Number of Pythagorean Triples (no duplicates) faster version: " << withoutDuplicates << "\n";
cout << "The Innermost for loop is entered " << innerLoopNoDuplicates << " times\n";




    system("pause");
    return 0;
}
