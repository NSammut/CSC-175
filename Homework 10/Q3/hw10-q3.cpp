/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q3
**	Date Created		:	November 22, 2013
**	Date Last Modified	:	November 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
3. Write a program that accepts from the user homework 1, hw2, hw3, midterm and nal exam
scores for up to 10 students. Declare 5 arrays, one for each of hw1, hw2, hw3, midterm and
nal, to read in the scores of the students. Use sentinel controlled loop and terminate accept-
ing values when the user enters -1 or the maximum number of students have been entered.
Display the average, standard deviation, largest, smallest and second smallest of all ve grad-
ing components in a tabular format. In another table, display each student's overall grade
(same as hw1-q1 grading scale) and the corresponding letter grade based on our grading scale
from our syllabus that is available on the BB.
Make sure you check your output carefully with respect to the following excepted output;
program terminates for (i) and (ii):
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double hw1[10] = {0};
double hw2[10] = {0};
double hw3[10] = {0};
double midTerm[10] = {0};
double finalExam[10] = {0};
double temp, deviation = 0;
int counter = 0;


void InsertionSort(double num[])
{
     int i, j, key, numLength = counter;
     for(j = 1; j < numLength; j++)    // Start with 1 (not 0)
    {
           key = num[j];
           for(i = j - 1; (i >= 0) && (num[i] < key); i--)   // Smaller values move up
          {
                 num[i+1] = num[i];
          }
         num[i+1] = key;    //Put key into its proper location
     }
     return;
}

double devF(double dev[]){
    double variance = 0;
    double temps = 0;
    double total = 0;
    for(int counters = 0 ; counters < counter ; counters++){
        temps = dev[counters] * dev[counters];
        total += temps;
    }
    variance = total / (static_cast <double> (counter));
    deviation = sqrt(variance);
    return deviation;
}

double averageF(double avg[]){
    double average = 0;
    for(int counters = 0 ; counters < counter ; counters++){
        average += avg[counters];
    }
    return average / (static_cast <double> (counter));
}

void displayTable(){


    cout << "\n\n\t\t\tTotal Grade\tLetter Grade\n";
    cout << "\t\t\t===========\t============\n";
    for(int i = 1 ; i <= counter ; i++){
            double results = (hw1[i-1] + hw2[i-1] + hw3[i-1] + midTerm[i-1] + finalExam[i-1]) / 5.0;
            char *letter;
            if(results == 100)
                letter = "A+";
            else if(results >= 94)
                letter = "A";
            else if(results >= 90)
                letter = "A-";
            else if(results >= 87)
                letter = "B+";
            else if(results >= 83)
                letter = "B";
            else if(results >= 80)
                letter = "B-";
            else if(results >= 77)
                letter = "C+";
            else if(results >= 73)
                letter = "C";
            else if(results >= 70)
                letter = "C-";
            else if(results >= 67)
                letter = "D+";
            else if(results >= 63)
                letter = "D";
            else if(results >= 60)
                letter = "D-";
            else
                letter = "F";

        cout << "Student # " << i << " \t\t" << fixed << setprecision(2) << setw(11) << results << "\t\t" << letter << "\n";
    }


    InsertionSort(hw1);
    InsertionSort(hw2);
    InsertionSort(hw3);
    InsertionSort(midTerm);
    InsertionSort(finalExam);
    cout << "\n\n====================================================================\n\n";
    cout << "************ Accepted Student Count = " << counter << ". ************\n\n";
    cout << "\t\tHomework1\tHomework2\tHomework3\tMidTerm\tFinal\n";
    cout << "\t\t=========\t=========\t=========\t=======\t=====\n";
    cout << "Average\t\t" << setw(9) << averageF(hw1) << "\t" << setw(9) << averageF(hw2) << "\t" << setw(9) << averageF(hw3) << "\t" << setw(7) << averageF(midTerm) << "\t" << setw(5) << averageF(finalExam) << "\n";
    cout << "Std.Dev\t\t" << setw(9) << devF(hw1) << "\t" << setw(9) << devF(hw2) << "\t" << setw(9) << devF(hw3) << "\t" << setw(7) << devF(midTerm) << "\t" << setw(5) << devF(finalExam) << "\n";
    cout << "Smallest\t" << setw(9) << hw1[counter - 1] << "\t" << setw(9) << hw2[counter - 1] << "\t" << setw(9) << hw3[counter - 1] << "\t" << setw(7) << midTerm[counter - 1] << "\t" << setw(5) << finalExam[counter - 1] << "\n";
    cout << "Largest\t\t" << setw(9) << hw1[0] << "\t" << setw(9) << hw2[0] << "\t" << setw(9) << hw3[0] << "\t" << setw(7) << midTerm[0] << "\t" << setw(5) << finalExam[0] << "\n";
    if(hw1[1] == 0){
        cout << "Smallest2\t" << setw(9) << hw1[counter-1] << "\t" << setw(9) << hw2[counter-1] << "\t" << setw(9) << hw3[counter-1] << "\t" << setw(7) << midTerm[counter-1] << "\t" << setw(5) << finalExam[counter-1] << "\n";
        cout << "Largest2\t" << setw(9) << hw1[0] << "\t" << setw(9) << hw2[0] << "\t" << setw(9) << hw3[0] << "\t" << setw(7) << midTerm[0] << "\t" << setw(5) << finalExam[0] << "\n";
    }
    else{
        cout << "Smallest2\t" << setw(9) << hw1[counter-2] << "\t" << setw(9) << hw2[counter-2] << "\t" << setw(9) << hw3[counter-2] << "\t" << setw(7) << midTerm[counter-2] << "\t" << setw(5) << finalExam[counter-2] << "\n";
        cout << "Largest2\t" << setw(9) << hw1[1] << "\t" << setw(9) << hw2[1] << "\t" << setw(9) << hw3[1] << "\t" << setw(7) << midTerm[1] << "\t" << setw(5) << finalExam[1] << "\n";
    }


    }

void studentInput(int i){
hw1:
cout << "Homework #1 score for Student #" << i << " (or -1 to exit) : ";
cin >> temp;
    if(temp == -1 && counter != 0){
        displayTable();
        exit(0);
    }
    else if(temp == -1){
        exit(0);
    }
    else if(temp < 0 || temp > 100){
        cout << "Invalid Score; must be in [0, 100].\n";
        goto hw1;
    }
    else{
    hw1[i-1] = temp;
    }

hw2:
cout << "Homework #2 score for Student #" << i << " (or -1 to exit) : ";
cin >> temp;
    if(temp == -1 && counter != 0){
        displayTable();
        exit(0);
    }
    else if(temp == -1){
        exit(0);
    }
    else if(temp < 0 || temp > 100){
        cout << "Invalid Score; must be in [0, 100].\n";
        goto hw2;
    }
    else{
    hw2[i-1] = temp;
    }

hw3:
cout << "Homework #3 score for Student #" << i << " (or -1 to exit) : ";
cin >> temp;
    if(temp == -1 && counter != 0){
        displayTable();
        exit(0);
    }
    else if(temp == -1){
        exit(0);
    }
    else if(temp < 0 || temp > 100){
        cout << "Invalid Score; must be in [0, 100].\n";
        goto hw3;
    }
    else{
    hw3[i-1] = temp;
    }

midTerm:
cout << "Midterm score for Student #" << i << " (or -1 to exit) : ";
cin >> temp;
    if(temp == -1 && counter != 0){
        displayTable();
        exit(0);
    }
    else if(temp == -1){
        exit(0);
    }
    else if(temp < 0 || temp > 100){
        cout << "Invalid Score; must be in [0, 100].\n";
        goto midTerm;
    }
    else{
    midTerm[i-1] = temp;
    }

finalExam:
cout << "Final Exam score for Student #" << i << " (or -1 to exit) : ";
cin >> temp;
    if(temp == -1 && counter != 0){
        displayTable();
        exit(0);
    }
    else if(temp == -1){
        exit(0);
    }
    else if(temp < 0 || temp > 100){
        cout << "Invalid Score; must be in [0, 100].\n";
        goto finalExam;
    }
    else{
    finalExam[i-1] = temp;
    counter++;
    }
}

int main()
{
    for(int i = 1 ; i <= 10 ; i++){
        studentInput(i);
        cout << "\n";
    }
    displayTable();
   system("pause");
   return 0;
}
