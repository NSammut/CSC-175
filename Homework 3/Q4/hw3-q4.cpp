/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q4
**	Date Created		:	September 24, 2013
**	Date Last Modified	:	September 24, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
4. Write a program that inputs three integers from the keyboard and prints the sum, average,
product, smallest and largest of these numbers.
Test Data:
(i)
Please enter Integer 1 : 24
Please enter Integer 2 : 34
Please enter Integer 3 : 54
Sum of 24, 34 and 54 is 112
Average of 24, 34 and 54 is 37
Product of 24, 34 and 54 is 44064
Smallest of 24, 34 and 54 is 24
Largest of 24, 34 and 54 is 54
(ii)
Please enter Integer 1 : 5
Please enter Integer 2 : 1
Please enter Integer 3 : 9
Sum of 5, 1 and 9 is 15
Average of 5, 1 and 9 is 5
Product of 5, 1 and 9 is 45
Smallest of 5, 1 and 9 is 1
Largest of 5, 1 and 9 is 9

**	Pseudocode:
**	1)ask for the 3 integers and store them into values
**	2)output all three numbers with sum, product, average
**	3)then if first is greater than second and third, first is biggest
**  4)copy top but change first to others and change the number to the biggest
**  5)copy the above lines but in place do less than for the smallest number
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int first, second, third, smallest, largest, sum, product;
    double average;
    cout << "Please enter Integer 1 : ";
    cin >> first;
    cout << "Please enter Integer 2 : ";
    cin >> second;
    cout << "Please enter Integer 3 : ";
    cin >> third;

    sum = first + second + third;
    average = ((first + second + third) / 3);
    product = first * second * third;
        if(first < second && third){
            smallest = first;
        }
        if(second < first && third){
            smallest = second;
        }
        if(third < first && third){
            smallest = third;
        }
        if(first > second && third){
            largest = first;
        }
        if(second > first && third){
            largest = second;
        }
        if(third > first && third){
            largest = third;
        }


    cout << "Sum of " << first << ", " << second << " and " << third << " is " << sum << endl;
    cout << "Average of " << first << ", " << second << " and " << third << " is " << average << endl;
    cout << "Product of " << first << ", " << second << " and " << third << " is " << product << endl;
    cout << "Smallest of " << first << ", " << second << " and " << third << " is " << smallest << endl;
    cout << "Largest of " << first << ", " << second << " and " << third << " is " << largest << endl;
    system("pause");
    return 0;
}
