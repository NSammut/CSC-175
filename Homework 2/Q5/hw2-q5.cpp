/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw2, q5
**	Date Created		:	September 18, 2013
**	Date Last Modified	:	September 18, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
5. A bag of cookies holds 50 cookies. The nutrition facts from the bag reports that there are 10
servings in the bag and a serving is about 300 calories. Write a program that asks the user
to input how many cookies (s)he actually ate and then report the total calories consumed.
Expected Output:
Enter the number of cookies you ate : 4
You have consumed 240 calories!
Enter the number of cookies you ate : 50
You have consumed 3000 calories!

**	Pseudocode:
**	1)Ask for how many cookies the person ate
**	2)store number into variable
**	3)calculate calories consumed
**  4)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numOfCookies, calories;
    cout << "Enter the number of cookies you ate : ";
    cin >> numOfCookies;
    calories = 60 * numOfCookies;
    cout << "You have consumed " << calories << " calories!\n";
    system("pause");
    return 0;
}
