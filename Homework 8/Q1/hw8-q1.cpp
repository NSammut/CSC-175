/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw8, q1
**	Date Created		:	November 11, 2013
**	Date Last Modified	:	November 11, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
1. Write a program that simulates a coin tossing. For each toss of the coin, the program should
print Heads or Tails. Let the program toss the coin 200 times and count the number of times
each side of the coin appears. Print the results. The program should call a separate function
(
ip) that takes no arguments and returns 0 for tails and 1 for heads.

**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int heads = 0, tails = 0;
int coin;

int flip(){
        if(coin == 0){
            return 0;
        }
        if(coin == 1){
            return 1;
        }
}

int main()
{
    srand(time(0));
    for(int counter = 0 ; counter < 200 ; counter++){
        coin = 1 - rand() % 2;
        if(flip() == 0){
            cout << "tails ";
            tails++;
        }
        if(flip() == 1){
            cout << "heads ";
            heads++;
        }
    }
    cout << "\nThe total number of Heads was " << heads;
    cout << "\nThe total number of Tails was " << tails;
    cout << "\n";

   system("pause");
   return 0;
}

