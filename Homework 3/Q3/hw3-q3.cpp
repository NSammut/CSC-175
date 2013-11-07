/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q3
**	Date Created		:	September 24, 2013
**	Date Last Modified	:	September 24, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
3. Modify the hw1, q1 program so that it prints out the letter grade based on the grading scale
of this class available on the syllabus.
Test Data:
(i)
Please enter points scored in Homework 1 :59
Please enter points scored in Homework 2 :59
Please enter points scored in Homework 3 :59
Please enter points scored in Mid-Term :59
Please enter points scored in Final :59
Hw1 Hw2 Hw3 Mid-Term Final Total
59 59 59 59 59 59
Overall Grade: 59 out of 100
Your letter grade is : F
(ii)
Please enter points scored in Homework 1 :97
Please enter points scored in Homework 2 :97
Please enter points scored in Homework 3 :97
Please enter points scored in Mid-Term :97
Please enter points scored in Final :97
Hw1 Hw2 Hw3 Mid-Term Final Total
97 97 97 97 97 97
Overall Grade: 97 out of 100
Your letter grade is : A+
(iii)
Please enter points scored in Homework 1 :80
2
Please enter points scored in Homework 2 :90
Please enter points scored in Homework 3 :70
Please enter points scored in Mid-Term :50
Please enter points scored in Final :80
Hw1 Hw2 Hw3 Mid-Term Final Total
80 90 70 50 80 71
Overall Grade: 71 out of 100
Your letter grade is : C-

**	Pseudocode:
**	1)ask for all scores
**	2)store all values into different values
**	3)calculate the total of the values
**  4)use nested elseif statements using the number to determine the letter grade
**************************************************************************/

#include <iostream>
#include <stdlib.h>
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

    cout << "\nOverall Grade: " << total << " out of 100\n"; //prints results of total
    cout << "Your letter grade is : ";
        if(total >= 97){
                cout << "A+";}
            else if(total >= 92){
                cout << "A";}
                else if(total >= 90){
                    cout << "A-";}
                    else if(total >= 88){
                            cout << "B+";}
                        else if(total >= 82){
                            cout << "B";}
                            else if(total >= 80){
                                cout << "B-";}
                                else if(total >= 78){
                                    cout << "C+";}
                                    else if(total >= 72){
                                        cout << "C";}
                                        else if(total >=70){
                                            cout << "C-";}
                                            else if(total >= 68){
                                                cout << "D+";}
                                                else if(total >= 60){
                                                    cout << "D";}
                                                    else{
                                                        cout << "E";
                                                    }
    cout << "\n";
    system("pause");
    return 0;
}
