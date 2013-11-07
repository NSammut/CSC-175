/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw7, q4
**	Date Created		:	October 30, 2013
**	Date Last Modified	:	October 30, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
4. A K-12 science and engineering competition has 5 judges, each of whom awards a score
between 0 and 10 to each project. Fractional scores, such as 8.3, are allowed. A projects
nal score is determined by dropping the highest and lowest score received, then averaging
the 3 remaining scores. Write a program that uses this method to calculate a contestants

score. It should include the following functions: a) void getJudgeData() should ask the user
for a judges score, store it in a reference parameter variable, and validate it. This function
should be called by main once for each of the 5 judges. b) void calcScore() should calculate
and display the average of the 3 scores that remain after dropping the highest and lowest
scores the performer received. This function should be called just once by main, and should
be passed the 5 scores.
The last two functions, described below, should be called by calcScore, who uses the returned
information to determine which of the scores to drop. c) int ndLowest() should nd and
return the lowest of the 5 scores passed to it. d) int ndHighest() should nd and return the
highest of the 5 scores passed to it.
Input Validation: Do not accept judge scores lower than 0 or higher than 10.

**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void getJudgeData(double&);
void calcScore(double[]);

double findHighest(double score[])
{
       int counter;
       double number;
       number = score[0];
       for( counter = 1; counter < 5; counter++ )
       if( score[counter] > number )

           number = score[counter];
           return number;
}
double findLowest(double score[])
{
       int counter;
       double number;
       number = score[0];
       for( counter = 1; counter < 5; counter++ )
       if( score[counter] < number )

           number = score[counter];
           return number;
}

int main(){
double scores[5];
    int counter;

    for( counter = 0; counter < 5; counter++ )
    getJudgeData(scores[counter]);
    calcScore(scores);
    system("pause");
    return 0;
}

void getJudgeData(double& score)

{
     cout << "Enter score between 0 and 10: ";
     cin >> score;
     while ( score < 0 || score > 10 )
     {
           cout << "Please Try Again!\n\n";
           cout << "Enter score between 0 and 10: ";
           cin >> score;
           }
}

void calcScore(double score[])
{
     double low, high, total = 0, average;
     int counter;
     low = findLowest( score );
     high = findHighest( score );

     for( counter = 0; counter < 5 ; counter++ )
          total += score[counter];
          average = ( total - low - high ) / 3;
          cout << "This contestant's talent score is " << fixed << setprecision(2) << average << endl;
}

