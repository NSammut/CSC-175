/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw10, q4
**	Date Created		:	November 22, 2013
**	Date Last Modified	:	November 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
4. Write a program that randomly selects from a bag of eight objects. Each object can be red,
blue, orange, or green and it can be a ball or a cube. Assume the bag contains once object
for each combination, i.e. one red ball, one red cube, etc. Using one character array for color
and one for the shape, write a program to draw random object from the bag with replacement.
**************************************************************************/
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

char *color[] = {"red", "blue", "orange", "green"};
char *type[] = {"ball", "cube"};

int main()
{
    int number;
    cout << "Enter no. of items to draw (0 to exit): ";
    cin >> number;
    srand(time(0));
    if(number == 0)
        exit(0);
    while(number > 0){
        int x = rand() % 4;
        int y = rand() % 2;
        cout << color[x] << " " << type[y] << "\n";
        number--;
    }

   system("pause");
   return 0;
}
