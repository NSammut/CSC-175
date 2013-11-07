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
**	2)add all of the quiz totals together and output total
**	3)divide total by 10 to find average
**  4)use ((quiz# - mean) * (quiz# - mean)) and add it 10 times to find variance
**  5)square root the variance to find the standard deviation
**  6)output  total, mean, variance, standard deviation

**EXTRA COMMENTS: This program is not optimized, but is the only way I could figure out how to
**add standard deviation and variances in.
**************************************************************************/
#include <math.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int quiz1, quiz2, quiz3, quiz4, quiz5, quiz6, quiz7, quiz8, quiz9, quiz10;
    double variance, sd, mean, total;
    quiz1:
    cout << "Quiz Score #1 : ";
    cin >> quiz1;
    if(quiz1 >= 101 || quiz1 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz1;
    }

        quiz2:
    cout << "Quiz Score #2 : ";
    cin >> quiz2;
    if(quiz2 >= 101 || quiz2 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz2;
    }

        quiz3:
    cout << "Quiz Score #3 : ";
    cin >> quiz3;
    if(quiz3 >= 101 || quiz3 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz3;
    }

        quiz4:
    cout << "Quiz Score #4 : ";
    cin >> quiz4;
    if(quiz4 >= 101 || quiz4 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz4;
    }

        quiz5:
    cout << "Quiz Score #5 : ";
    cin >> quiz5;
    if(quiz5 >= 101 || quiz5 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz5;
    }

        quiz6:
    cout << "Quiz Score #6 : ";
    cin >> quiz6;
    if(quiz6 >= 101 || quiz6 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz6;
    }

        quiz7:
    cout << "Quiz Score #7 : ";
    cin >> quiz7;
    if(quiz7 >= 101 || quiz7 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz7;
    }

        quiz8:
    cout << "Quiz Score #8 : ";
    cin >> quiz8;
    if(quiz8 >= 101 || quiz8 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz8;
    }

        quiz9:
    cout << "Quiz Score #9 : ";
    cin >> quiz9;
    if(quiz9 >= 101 || quiz9 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz9;
    }

        quiz10:
    cout << "Quiz Score #10 : ";
    cin >> quiz10;
    if(quiz10 >= 101 || quiz10 <= 0){
        cout << "Out of range, re-enter\n";
        goto quiz10;
    }

    total = quiz1 + quiz2 + quiz3 + quiz4 + quiz5 + quiz6 + quiz7 + quiz8 + quiz9+ quiz10;
    mean = total / 10;
    variance = (((quiz1 - mean) * (quiz1 - mean)) + ((quiz2 - mean) * (quiz2 - mean)) + ((quiz3 - mean) * (quiz3 - mean)) + ((quiz4 - mean) * (quiz4 - mean)) + ((quiz5 - mean) * (quiz5 - mean)) + ((quiz6 - mean) * (quiz6 - mean)) + ((quiz7 - mean) * (quiz7 - mean)) + ((quiz8 - mean) * (quiz8 - mean)) + ((quiz9 - mean) * (quiz9 - mean)) + ((quiz10 - mean) * (quiz10 - mean))) / 10;
    sd = sqrt(variance);


    cout << "\nTotal is " << total << "\n";
    cout << "Avg is " << mean << "\n";
    cout << "Variance is " << variance << "\n";
    cout << "Standard Deviation is " <<  sd << "\n";

    system("pause");
    return 0;
}
