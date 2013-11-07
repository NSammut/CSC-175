/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw7, q1
**	Date Created		:	October 30, 2013
**	Date Last Modified	:	October 30, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
1. Write a program to display the area of a rectangle after accepting its length and width from
the user by means of the following functions:
getLength { ask user to enter the length and return it as double
getWidth { ask user to enter the width and return it as double
getArea { pass width and length, compute area and return area
displayArea { pass area and display it in this function.

**	Pseudocode:
**	1)create a function that takes the input of length
**	2)create a function that takes the input of width
**	3)pass the variables width and length to getArea and compute the Area
**  4)display results with returned method
**  5)end program
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

double length, width, area;

double getLength(){
    cout << "Enter the length: ";
    cin >> length;
    return length;
}

double getWidth(){
    cout << "Enter the width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width){
    return length * width;
}

void displayArea(){
    cout << "\nRectangle Data\n";
    cout << "--------------\n";
    cout << "Length: " << length << "\n";
    cout << "Width: " << width << "\n";
    cout << "Area: " << getArea(length, width);
    cout << "\n";
}

int main(){
    getLength();
    getWidth();
    getArea(length, width);
    displayArea();

    system("pause");
    return 0;
}
