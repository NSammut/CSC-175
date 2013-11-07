/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q6
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
6. Write a program that nds and prints all of the prime numbers between 3 and 1000. Print
them and display the total prime numbers between 3 and 1000.

**	Pseudocode:
**	1)declare and initialize a boolean variable and a starting variable(3), a variable(i) to keep track of the checking of primes
**	2)use nested for to find if the number is prime and if it is return a bool of true and if not default it to false
**	3)then use an outer for loop to loop through this process starting variable(3) to 1000 times using the starting variable every time
**  4) incrementing each and every time a number is checked for prime
**  5)Print output
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

bool is_prime;
int primes = 0;

int main()
{
	for(int start = 3; start <= 1000; start++){
		bool is_prime = true;

		for(int i = 2; i < start; i++){
			if(start % i == 0 || start == i){
				is_prime = false;
				break;
			}
		}

		if(is_prime == true){
			cout << start << " " << endl;
			primes++;
		}
	}
	cout << "There are " << primes << " prime numbers between 3 and 1000\n";
    system("pause");
    return 0;
}



