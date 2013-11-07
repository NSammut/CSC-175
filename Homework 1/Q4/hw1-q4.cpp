/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw1, q4
**	Date Created		:	September 11, 2013
**	Date Last Modified	:	September 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Linux Ubuntu 12.04 LTS/Code:Blocks 10.05
**	Problem:
4) Write a program that inputs an integer that represents a length of time
in seconds.  The program should then output the number of hours, minutes,
and seconds that corresponds to that number of seconds.  For example, if
the user inputs 50391 total seconds then the program should output 13
hours, 59 minutes, and 51 seconds.


Output:
Enter a time in seconds.
34567
34567 total seconds is equivalent to 9 hours, 36 minutes, and 7 seconds.


**	Pseudocode:
**	1)ask for length in seconds
**	2)calculate seconds to hours, minutes, seconds
**	3)output screen result
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int seconds, rhours, rminutes, rseconds;  //declare variables

    cout << "Enter a time in seconds.\n";
    cin >> seconds; //input seconds
    rhours = seconds / 3600;  //convert to real hours
    rminutes = (seconds % 3600) / 60;  //convert to real minutes
    rseconds = seconds % 60; //convert to real seconds
    cout << seconds << " total seconds is equivalent to " << rhours << " hours, " << rminutes << " minutes, and " << rseconds << " seconds."; //output results

    return 0;
}
