/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q4
**	Date Created		:	November 22, 2013
**	Date Last Modified	:	November 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
5. Repeat q5 above but this time without replacement, that is, one red ball is drawn, it cannot
be drawn again.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

void pick_a_thing();
int select_next_available(int n);
int results_drawn[8];
int results_remaining = 8;
char *color[] = {"red", "blue", "orange", "green"};
char *type[] = {"ball", "cube"};

int rand_0toN1(int n){
    return rand() % n;
}

int select_next_available(int n){
    int i = 0;

    while(results_drawn[i])
        i++;
    while(n-- > 0){
        i++;
        while(results_drawn[i])
            i++;
    }
    results_drawn[i] = true;
    return i;
}

void pick_a_thing(){
        int c;
        int t;
        int n, result;

        n = rand_0toN1(results_remaining--);
        result = select_next_available(n);

        c = result % 4;
        t = result / 4;
        cout << color[c] << " " << type[t] << "\n";
}

int main()
{
    srand(time(0));
    int number;
    cout << "Enter no. of items to draw (0 to exit): ";
    cin >> number;
    if(number == 0)
        exit(0);
    if(number > 8 || number < 0){
        cout << "Cannot be under 0 or over 8. Exiting.\n";
        system("pause");
        return 0;
    }
    while(number > 0){
        pick_a_thing();
        number--;
    }
   system("pause");
   return 0;
}
