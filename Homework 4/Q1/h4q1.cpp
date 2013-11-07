/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw4, q1
**	Date Created		:	October 1, 2013
**	Date Last Modified	:	October 1, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
1. Drivers are concerned with the mileage obtained by their cars. One driver has kept track of
several tankful of gasoline by recording miles driven and gallons used for each tankful. De-
velop a c++ program that uses a while statement to input the miles driven and gallons used
for each tankful. The program should calculate and display the miles per gallon obtained
for each tankful and print the combined miles per gallon obtained for all tankfuls up to that
point. If the mileage is -1, the program quits.


**	Pseudocode:
**	1)Ask for the variables mileage and gallons
**	2)if mileage is equal to -1 end program
**	3)otherwise print (mileage/gallons)
**  4)add the total of mileage and gallons in two seperate variables
**  5)print the total mpg (totalMileage / totalGallons)
**************************************************************************/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    double totalMileage = 0, totalGallons = 0, gallons = 0, mileage = 0, total = 0, counter = 1;
    while(true){
    cout << "Enter Mileage for Trip #" << counter << " : ";
    cin >> mileage;
    if(mileage == -1){
        goto end;
    }
    cout << "Enter Gallons for Trip #" << counter << " : ";
    cin >> gallons;
    totalMileage += mileage;
    totalGallons += gallons;
    cout << "MPG for Trip #" << counter << " : " << (mileage / gallons);
    cout << "\nMPG for all trips so far is " << (totalMileage / totalGallons) << "\n\n";
    counter++;
    }
    end:
    cout << "\nThank you for using our MPG Program!\n";
    system("pause");
    return 0;
}
