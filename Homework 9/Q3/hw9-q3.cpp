/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q3
**	Date Created		:	November 14, 2013
**	Date Last Modified	:	November 15, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
3. Write a program that simulates the rolling of two dice. The program should use rand() to
roll the rst die and should use rand() again to roll the second die. The sum of the two
values should then be calculated. Your program should roll the dice 120,000 times. Tally
the numbers of times each possible sum appears. Print the results in tabular format. Also,
determine if the totals are reasonable, i.e. there are six ways to roll a 7, so approximately
one-sixth of all the rolls should be 7.
Expected Output:
Sum Total Expected Actual
2 3373 2.778% 2.811%
3 6707 5.556% 5.589%
4 9955 8.333% 8.296%
5 13151 11.111% 10.959%
6 16763 13.889% 13.969%
7 19922 16.667% 16.602%
8 16714 13.889% 13.928%
9 13445 11.111% 11.204%
10 9927 8.333% 8.273%
11 6742 5.556% 5.618%
12 3301 2.778% 2.751%
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int total[11] = {0};
double expected[11] = {2.778, 5.556, 8.333, 11.111, 13.889, 16.667, 13.889, 11.111, 8.333, 5.556, 2.778};
int firstDice = 0, secondDice = 0;

void calculateRolls(){
    for(int i = 0 ; i <= 120000 ; i++){
                firstDice = 1 + rand() % 6;
                secondDice = 1 + rand() % 6;
        switch(firstDice + secondDice){
            case 2: total[0]++;
                    break;
            case 3: total[1]++;
                    break;
            case 4: total[2]++;
                    break;
            case 5: total[3]++;
                    break;
            case 6: total[4]++;
                    break;
            case 7: total[5]++;
                    break;
            case 8: total[6]++;
                    break;
            case 9: total[7]++;
                    break;
            case 10: total[8]++;
                    break;
            case 11: total[9]++;
                    break;
            case 12: total[10]++;
                    break;
        }
    }

}


void displayResults(){
    cout << "Sum\tTotal\t\tExpected\t\tActual\n";
    for(int i = 2 ; i <= 12 ; i++){
        cout << setw(3) << i << "\t" << setw(5) << total[i-2] << "\t\t" << setw(7) << expected[i-2] << "%\t" << setw(13) << fixed << setprecision(3) << (total[i-2] / 120000.0) * 100 << "%\n";
    }
}

int main()
{
    srand(time(0));
    calculateRolls();
    displayResults();
   system("pause");
   return 0;
}

