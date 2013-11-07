/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw4, q3
**	Date Created		:	October 8, 2013
**	Date Last Modified	:	October 8, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
The process of finding the largest and smallest numbers is used frequently in computer ap-
plications. Write a C++ program that uses a while statement to determine and print the
largest and the second largest number of x integers entered by the user, where x should also
be input by the user.

**	Pseudocode:
**	1) ask for how many you want to input
**	2) store value into number
**	3) if number is greater than greatest;
make secondGreatest = greatest and greatest = to the number
and else ifnumber >= secondGreatest
make secondGreatest = to number
**  4)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int numbersEntered = 0, greatest = 0, secondGreatest = 0, number = 0, counter = 1;
    cout << "How many numbers do you want to enter?";
    cin >> numbersEntered;
    while(numbersEntered >= counter){
        cout << "Please enter an integer number " << counter << " ";
        cin >> number;
            if(number > greatest){
                secondGreatest = greatest;
                greatest = number;
            }
            else if(number >= secondGreatest){
            secondGreatest = number;
            }


        counter++;
}
        cout << "\nThe Greatest Number Is " << greatest << "\n";
        cout << "The Second Greatest Number Is " << secondGreatest << "\n";
    system("pause");
    return 0;
}
