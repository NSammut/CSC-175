/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q7
**	Date Created		:	November 12, 2013
**	Date Last Modified	:	November 12, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
7. Extra credit (8%): Write a program that prints a calendar for a year. Prompt the user for
which day of the week January 1 is on and whether the year is a leap year. The day that
January 1 is on is coded as follows: Sun 0 Mon 1 Tue 2 Wed 3 Thu 4 Fri 5 Sat 6 Hint: Use a
switch statement inside a for or while loop for the monhts.
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

void calendar(int day, bool leap){
    for(int months = 1 ; months <= 12 ; months++){
        switch(months){
       case 1:
         cout << "\n\nJanuary";
         daysInMonth = 31;
         break;
      case 2:
         cout << "\n\nFebruary";
         if (leap)
            daysInMonth = 29;
         else
            daysInMonth = 28;
         break;
      case 3:
         cout << "\n\nMarch";
         daysInMonth = 31;
         break;
      case 4:
         cout << "\n\nApril";
         daysInMonth = 30;
         break;
      case 5:
         cout << "\n\nMay";
         daysInMonth = 31;
         break;
      case 6:
         cout << "\n\nJune";
         daysInMonth = 30;
         break;
      case 7:
         cout << "\n\nJuly";
         daysInMonth = 31;
         break;
      case 8:
         cout << "\n\nAugust";
         daysInMonth = 31;
         break;
      case 9:
         cout << "\n\nSeptember";
         daysInMonth = 30;
         break;
      case 10:
         cout << "\n\nOctober";
         daysInMonth = 31;
         break;
      case 11:
         cout << "\n\nNovember";
         daysInMonth = 30;
         break;
      case 12:
         cout << "\n\nDecember";
         daysInMonth = 31;
         break;
        }

        cout << "\n\nSu Mo Tu We Th Fr Sa\n";



    }

}


int main()
{
    int day, leap, daysInMonth;
    cout << "Enter day of the week for January 1\nSunday =    0\nMonday =    1\nTuesday =   2\nWednesday = 3\nThursday =  4\nFriday =    5\nSaturday =  6\nEnter Here: ";
    cin >> day;
    cout << "Enter day leap year code (1 for leap year, 0 for non-leap year): ";
    cin >> leap;
    calendar(day, leap);
   system("pause");
   return 0;
}

