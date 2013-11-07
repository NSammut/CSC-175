/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw7, q3
**	Date Created		:	October 30, 2013
**	Date Last Modified	:	October 30, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
3. A company pays its employees as managers (who receive a xed weekly salary), hourly workers
(who receive a xed hourly wage for up to the rst 40 hours they work and time-and-a-half,
i.e. 1.5 times their hourly wage, for overtime hours worked), commission workers (who re-
ceive $250 plus 5% of their gross weekly sales), or pieceworkers (who receive a xed amount
of money for each item they produce-each pieceworker in the company works only on one
type of item). Write a program to compute the weekly pay for each employee. You do not
know the number of employees in advance. Each type of employee has its own pay code:
Managers have code 1, hourly workers have code 2, commission workers 3 and pieceworkers
4. Use a switch to compute each employee's pay according to his/her paycode. Within the
switch, prompt the user to enter the appropriate facts your program needs to calculate each
employee's pay according to the paycode.


**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
int paycode, manager = 0, hrworker = 0, comworker = 0, pworker = 0;
    double salary;
    while (paycode != -1) {
    cout << "Enter paycode (-1 to end): ";
    cin >> paycode;
          switch(paycode)
          {
          case -1:
               cout << "Good-bye!";
               return 0;
          case 1:
               cout << "Manager selected." << endl;
               cout << "Enter weekly salary: ";
               cin >> salary;
               cout << "Managers pay is $" << fixed << setprecision(2) << salary << "\n";
          break;

          case 2:
               double wage;
               int hrs;

               cout << "Hourly Worker Selected." << endl;
               cout << "Enter hourly salary: ";
               cin >> wage;
               cout << "Enter the total hours worked: ";
               cin >> hrs;
               if ( hrs <= 40 )
                  salary = hrs * wage;
                  else
                  salary = 40.0 * wage + ( hrs - 40 ) * wage * 1.5;
                  cout << "Hourly workers pay is $" << fixed << setprecision(2) << salary << "\n";
          break;

          case 3:
               int sales;
               cout << "Commission Worker Selected." << endl;
               cout << "Enter gross weekly sales: ";
               cin >> sales;
               salary = sales * .05 + 250;
               cout << "Commission worker's pay is $" << fixed << setprecision(2) << salary << "\n";
          break;

          case 4:
               int pieces;
               double wagep;
               cout << "Piece worker Selected." << endl;
               cout << "Enter number of pieces: ";
               cin >> pieces;
               cout << "Enter wage per piece: ";
               cin >> wagep;
               salary = pieces * wagep;
               cout << "Piece worker's pay is $" << fixed << setprecision(2) << salary << "\n";
          break;
          default:
               cout << "Invalid number! Please try again.\n";
          }
}
          system("pause");
          return 0;
}
