/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw1, q1
**	Date Created		:	September 11, 2013
**	Date Last Modified	:	September 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Linux Ubuntu 12.04 LTS/Code:Blocks 10.05
**	Problem:
1) Accept the following information from the user (keyboard):
- Hw1, hw2 and hw3 (out of 100)
- Midterm (out of 100)
- Final exam (out of 100)

Calculate the total grade out of 100 based on the following grading scale:
Hws          -->    30% (10% each)
Midterm      -->    30%
Final Exam   -->    40%

Test Data:
(a)
Hw1: 0
Hw2: 0
Hw3: 0
MT: 0
Final : 0

Overall Grade: 0 out of 100

(b)
Hw1: 100
Hw2: 100
Hw3: 100
MT: 100
Final : 100

Overall Grade: 100 out of 100

(c)
Hw1: 80
Hw2: 90
Hw3: 70
MT: 50
Final : 80

Overall Grade: 71 out of 100

**	Pseudocode:
**	1)ask for the 3 Homework, the midterm and the final grades
**	2)put values into variable
**	3)calculate total grade based on the given scale
**  4)print results
**************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    int hw1, hw2, hw3, midterm, final, total;  //decalres all variables used

    cout << "Enter your grade for the following assignments: \n";   //asks for the assignments
    cout << "Hw1: ";
    cin >> hw1;
    cout << "Hw2: ";
    cin >> hw2;
    cout << "Hw3: ";
    cin >> hw3;
    cout << "MT: ";
    cin >> midterm;
    cout << "Final: ";
    cin >> final;

    total = ((((hw1 + hw2 + hw3)/3) * .3) + (midterm * .3) + (final * .4)); //calculates overall grade and stores into overall

    cout << "\nOverall Grade: " << total << " out of 100"; //prints results of total

    return 0;
}
