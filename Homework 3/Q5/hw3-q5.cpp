/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q5
**	Date Created		:	September 25, 2013
**	Date Last Modified	:	September 25, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
5. Write a program that reads in the quiz scores of a class of ten students. The grades are
integers in the range of 0-100. If the grade entered is not within this range, reject and ask
for a number in the range. Calculate and display the total of all student grades and calculate
the average.
Extra Credit (10%): Calculate the standard deviation. Use only what we have so far learned
in class about c++. You may need to do some lookup for standard deviation.
Test Data: (with the extra credit. If you don't want to do the extra credit, ignore
the std and var parts).
(i)
Quiz Score #1 : 50
Quiz Score #2 : 60
Quiz Score #3 : 70
Quiz Score #4 : 80
Quiz Score #5 : 90
Quiz Score #6 : 100
Quiz Score #7 : 50
Quiz Score #8 : 60
Quiz Score #9 : 70
Quiz Score #10 : 80
Total is 710
Avg is 71
Variance is 249
Std Var is the square root of variance
(ii)
Quiz Score #1 : 101
Out of range, re-enter
Quiz Score #1 : -4
Out of range, re-enter
Quiz Score #1 : 50
Quiz Score #2 : 60
Quiz Score #3 : 70
Quiz Score #4 : 120
Out of range, re-enter
Quiz Score #4 : 80
4
Quiz Score #5 : 90
Quiz Score #6 : 100
Quiz Score #7 : 50
Quiz Score #8 : 60
Quiz Score #9 : 70
Quiz Score #10 : 80
Total is 710
Avg is 71
Variance is 249
Std Var is the square root of variance

**	Pseudocode:
**	1)ask for each number (if at any time the number is greater than 100 or less than 0 make error and reinput)
**	2)while doing so make a total variable to add number to the total
**	3)after finishing inputs, print total
**  4)divide total by 10 to find average
**************************************************************************/
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int number = 0, total = 0, average = 0, variance = 0, counter = 1, varianceTotal = 0;
    double deviation = 0;
    int counter1 = 0;
    while(counter <= 10){
        reenter:
        cout << "Quiz Score #" << counter << " : ";
        cin >> number;
        if(number >= 101 || number <= 0){
            cout << "Out of range, re-enter\n";
            goto reenter;
        }
        counter++;
        total += number;
    }
    average = total / (counter - 1);

    cout << "Total is " << total << "\n";
    cout << "Avg is " << average << "\n";

    system("pause");
    return 0;
}
