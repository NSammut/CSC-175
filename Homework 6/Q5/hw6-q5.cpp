/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw6, q5
**	Date Created		:	October 23, 2013
**	Date Last Modified	:	October 23, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Ubuntu 13.10/Code::Blocks 12.11
**	Problem:
5. Write a simple calculator program that adds, subtracts, multiplies and divides. When the
program is run, it initializes the result to 0. The user can then type in an operator and
number. The result is updated and displayed. The following operators are valid:
Operator
Meaning
--------------------------------
+
Addition
-
Subtraction
*
Multiplication
/
Division
---------------------------------
Handle the case when the user enters q or Q to quit and h or H for usage help.
**	Pseudocode:
**	1)while whole program until Q or q
**	2)display table and ask for number and symbol
**	3)if the symbol == /,*,+,- do (result <symbol>= number) to change variables
**  4)if it is Q or q goto end
**  5)if it is H or h display help
**  6)else say it is invalid and retry
**  7)display results
**************************************************************************/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    double result = 0, number = 0;
    char symbol;
    while(true){
    start:
    cout << "\nResult: " << result << "\n";
    cout << "Enter operator from the table below, Q or q for quit, H or h for help : \n";
    cout << "Operator    Meaning\n";
    cout << "=========   =======\n";
    cout << "        +       Add\n";
    cout << "        -  Subtract\n";
    cout << "        *  Multiply\n";
    cout << "        /    Divide\n";
    cout << "Enter the operator: ";
    cin >> symbol;
        if(symbol == 'H' || symbol == 'h'){
        cout << "Use ’+’ to add a value to the result ( " << result << " )\n";
        cout << "Use ’-’ to subrtact a value from the result ( " << result << " )\n";
        cout << "Use ’*’ to multiply a value with the result ( " << result << " )\n";
        cout << "Use ’/’ to divide a value into the result ( " << result << " )\n";
        goto start;
        }
        else if(symbol == 'Q' || symbol == 'q'){
        cout << "Thank you for using our calculator. Come back again :-)";
        goto end;
            }
        else if(symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/'){}
        else{
        cout << "Invalid Entry! Please retry.\n";
        goto start;
        }
    cout << "Enter the value : ";
    cin >> number;
    cout << result;
        if(symbol == '+'){
            result += number;
            }
        else if(symbol == '-'){
            result -= number;
            }
        else if(symbol == '/' && number == 0){
            cout <<  " " << symbol << " " << number << "\n";
            cout << "Error: Divide by zero. Operation Ignored\n";
            goto start;
            }
        else if(symbol == '/' ){
            result /= number;
            }

        else if(symbol == '*'){
            result *= number;
            }
    cout <<  " " << symbol << " " << number << "\n";
    }
  end:
  return 0;
}
