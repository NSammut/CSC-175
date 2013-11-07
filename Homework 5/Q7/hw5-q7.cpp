/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw5, q7
**	Date Created		:	October 22, 2013
**	Date Last Modified	:	October 22, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8 Pro 64-bit/Code::Blocks 12.11
**	Problem:
7. The simplest technique is to use a nested loop for each unique letter (in this case T, O, G,
D). The loops would systematically assign the digits from 0-9 to each letter. For example, it
might rst try T = 0, O = 0, G = 0, D = 0, then T = 0, O = 0, G =0, D = 1, then T = 0,
O = 0, G = 0, D = 2, etc. up to T = 9, O = 9, G = 9, D = 9. In the loop body test that
each variable is unique and that the equation is satised. Output the values for the letters
that satisfy the equation.

**	Pseudocode:
**	1)for t,o,g,d from 0 to 9
**	2)if all combinations are different
**  3)int too = t * 100 + o * 10 + o;
**  4)int good = g * 1000 + o * 100 + o * 10 + d;
**  5)and if the too * 4 is good, because too + too + too + too
**  6)print the result
**************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
    for(int t = 0 ; t <= 9 ; t++){
        for(int o = 0 ; o <= 9 ; o++){
            for(int g = 0 ; g <= 9 ; g++){
                for(int d = 0 ; d <= 9 ; d++){
                        if(t != o && t != g && t != d && o != g && o != d && g != d){
                            int too = t * 100 + o * 10 + o;
                            int good = g * 1000 + o * 100 + o * 10 + d;
                        if(4 * too == good){
                              cout << "The values are : T = " << t << " O = " << o << " G = " << g << " D = " << d << "\n";
                    }
                }
            }
        }
    }
}
    system("pause");
    return 0;
}
