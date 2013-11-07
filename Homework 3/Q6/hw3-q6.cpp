/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw3, q6
**	Date Created		:	September 27, 2013
**	Date Last Modified	:	September 27, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
6. Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1-4):
If the user enters 1, the program should ask for the radius of the circle and then display its
area. Use 3.14159 for Pi. If the user enters 2, the program should ask for the length and width
of the rectangle, and then display the rectangle's area. If the user enters 3, the program
should ask for the length of the triangle's base and its height, and then display its area. If
the user enters 4, the program should end. Input Validation: Display an error message if the
user enters a number outside the range of 1 through 4 when selecting an item from the menu.
Do not accept negative values for the circle's radius, the rectangle's length or width, or the
triangle's base or height.

**	Pseudocode:
**	1)ask for 1-4
**	2)if 1, go through circle code
-ask for radius
-store value into radius and use (pi*(radius*radius)) for area
-output result
**	3)if 2, go through rectangle code
-ask for length and width
-store values and use (length * width) for area
-output result
**  4)if 3, go through triangle code
-ask for base and height
-store values and use (.5 * base * height) for area
-output result
**  5)if 4, quit program
**  6)if anything less than 1 or greater than 4, make error saying only 1-4
----------If any values in code are negative (less than 0) show error using negatives and exit program
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int option;
    cout << "1. Calculate the Area of a Circle\n";
    cout << "2. Calculate the Area of a Rectangle\n";
    cout << "3. Calculate the Area of a Triangle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice (1-4) : ";
    cin >> option;

    if(option == 1){
        double radius;
        cout << "What is the radius of the circle?\n";
        cout << "Radius = ";
        cin >> radius;
        if(radius <= 0){
            cout << "You have entered a value less than zero! Retry using a number greater than zero!";
            goto exit;
        }
        cout << "Your circle's area is " << 3.14159 * (radius * radius) << endl;
    }
    if(option == 2){
        double length, width;
        cout << "What is the length and width of the rectangle?";
        cout << "\nLength = ";
        cin >> length;
        cout << "Width = ";
        cin >> width;
        if(width <= 0 || length <= 0){
            cout << "Only enter positive values for length and width.\nProgram Will Exit!\n";
            goto exit;
        }
        cout << "The area of the rectangle is " << length * width << endl;
    }
    if(option == 3){
        double base, height;
        cout << "What is the height and base of the triangle?\n";
        cout << "Height = ";
        cin >> height;
        cout << "Base = ";
        cin >> base;
        if(height <= 0 || base <= 0){
            cout << "Only positive values for base and height.\nProgram Will Exit!\n";
            goto exit;
        }
        cout << "The area of the triangle is " << (.5 * base * height) << endl;
    }
    if(option == 4){
        cout << "You have quit the program!";
        cout << "\n\tBYE!\n";
        goto exit;
    }
    if(option < 1 || option > 4){
        cout << "ERROR! You have typed a value different than the integers 1-4.";
        cout << "\nPlease reopen the program!\n";
    }
    exit:
    system("pause");
    return 0;
}
