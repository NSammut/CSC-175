/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q3
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
3. Pythagorean Triples: A right triangle can have sides that are all integers. A set of three
integer values for the sides of a right triangle is called a Pythagorean triple. These three
sides must satisfy the relationship that the sum of the squares of two of the sides is equal
to the square of the hypotenuse. Find all unique Pythagorean triples for side1, side2 and
hypotenuse, all no longer than 500. How many are there? Note that this problem specifcally
asks you to exclude the duplicates, unlike the one on p.167 of the slides. For example, if you
were to check all unique Pythagorean Triples less than 5 (rather than 500) your output must
be
3 4 5
That is, it must NOT output both (3,4,5) and (4,3,5).

**	Pseudocode:
**	1)initialize variables and declare to 0
**	2)for side1/2/hypotenuse from 0 to 500,
**	3)innerLoop++ for data keeping
**  4)if a^2 + b^2 == c^2
**  5)withDuplicates++ because they are triangles
**  6)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{

int side1, side2, hypotenuse, innerLoop = 0, innerLoopNoDuplicates = 0, withDuplicates = 0, withoutDuplicates = 0;

for (side1 = 1; side1 <= 500; side1++){
    for ( side2 = 1; side2 <= 500; side2++){
        for ( hypotenuse = 1; hypotenuse <= 500; hypotenuse++){
                innerLoop++;
            if (( side1 * side1 ) + ( side2 * side2 ) == ( hypotenuse * hypotenuse)){
            withDuplicates++;
            }
        }

    }
}

cout << "Number of Pythagorean Triples with duplicates : " << withDuplicates << "\n";
cout << "The Innermost for loop is entered " << innerLoop << " times\n\n";



for (side1 = 1; side1 <= sqrt(pow(500, 2) / 2); side1++){
    for (side2 = side1; side2 <= round(sqrt(pow(500, 2) - pow(side1, 2))); side2++){
        hypotenuse = round(sqrt(pow(side1, 2) + pow(side2, 2)));
            innerLoopNoDuplicates++;
            if (( side1 * side1 ) + ( side2 * side2 ) == ( hypotenuse * hypotenuse)){
            withoutDuplicates++;
            }
        }

    }


cout << "Number of Pythagorean Triples (no duplicates) : " << withoutDuplicates << "\n";
cout << "The Innermost for loop is entered " << innerLoopNoDuplicates << " times\n";




    system("pause");
    return 0;
}
