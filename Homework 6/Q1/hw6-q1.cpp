/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q1
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
1. A company wants to transmit data over the Internet but is concerned about the security of the
sensitive data. All of the data are transmitted as four-digit integers. The company asked you
to write a program that encrypts the data so that it can be transmitted securely. Your pro-
gram should read a four-digit integer and encrypt it as follows: Replace each digit (the sum of
that digit plus 7) modulus 10. Then, swap the rst digit with the third, swap the second with
the fourth and print the encrypted integer. Add decryption functionality to your program
above that inputs an encrypted four-digit integer and decrypts it to form the original number.

**	Pseudocode:
**	1)first ask for the 4 digit number and input it into a variable
**	2)seperate each digit of the variable into different variables using the / and % operators
**	3)add 7 to each variable and mod 10
**  4)print results in the three,four,one,two fashion for swapping the integers
**  5)use all same steps as above for encryption but everything backwards, so
**  6)take each integer and add 3 then mod 10 for opposites, then print the variables in the normal fashion one,two,three,four
**************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int number = 0,  one = 0, two = 0, three = 0, four = 0;
    //Encryption
    cout << "Enter a four-digit number: ";
    cin >> number;
    if(number >= 10000){
        cout << "You entered a value greater than 4 digits! Ending Program.";
        return 0;
    }
    three = ((number / 1000 % 10) + 7) % 10;
    four = ((number / 100 % 10) + 7) % 10;
    one = ((number / 10 % 10) + 7) % 10;
    two = ((number % 10) + 7) % 10;
    cout << "Encrypted number is " << one << two << three << four << "\n";
    //Decryption
    cout << "Enter an encrypted number: ";
    cin >> number;
    if(number >= 10000){
        cout << "You entered a value greater than 4 digits! Ending Program.";
        return 0;
    }
    one = ((number / 1000 % 10) + 3) % 10;
    two = ((number / 100 % 10) + 3) % 10;
    three = ((number / 10 % 10) + 3) % 10;
    four = ((number % 10) + 3) % 10;
    cout << "Decrypted number is " << three << four << one << two << "\n";

  return 0;
}
