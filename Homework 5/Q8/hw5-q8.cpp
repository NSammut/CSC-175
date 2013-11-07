/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q8
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:

**	Pseudocode:
**	1)use same program as #6
**	2)ask user for upper and lower bound
**	3)use upper as 1000 and lower as the "start" variable
**  4)print results
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

bool is_prime;
int primes = 0;

int main()
{
    int ends, start;
    cout << "Enter Lower Bound: ";
    cin >> start;
    cout << "Enter Upper Bound: ";
    cin >> ends;
    int startC = start, endsC = ends;

	for( ; start <= ends; start++){
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
	cout << "There are " << primes << " prime numbers between " << startC << " and " << endsC << "\n";
    system("pause");
    return 0;
}



