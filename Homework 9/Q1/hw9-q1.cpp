/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q1
**	Date Created		:	November 14, 2013
**	Date Last Modified	:	November 14, 2013
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
1. De Morgan's Law: De Morgan's law can sometimes make it more convenient for us to express
a logical expression. These laws state that the following expressions are logically equivalent:
! (condition1 && condition2)  (! condition1 jj ! condition2) (1)
Also,
! (condition1 jj condition2)  (! condition1 && ! condition2) (2)
Use De Morgan's laws to write equivalent expressions for each of the following, then write
a program with four functions (one for each proof) to show that the original expression and
the new expression in each case are equivalent: (refer to logical operator example on p.199 of
the slides)
(a) !( x < 5 ) && !( y  7 )
(b) !( a == b ) jj !( g != 5 )
(c) !( ( x  8 ) && ( y > 4 )
**************************************************************************/
#include <cstdlib>
#include <iostream>

using namespace std;

void partA()
{
   int x = 6;
   int y;

   cout << "Part A" << endl << endl;

   do
   {
      x--;
      y = 5;

      do
      {
         y++;

         cout << "!( x < 5 ): " << !( x < 5 ) << endl;
         cout << "!( y >= 7 ): " << !( y >= 7 ) << endl;

         if ( ( !( x < 5 ) && !( y >= 7 ) ) ==
              ( !( ( x < 5 ) || ( y >= 7 ) ) ) )
            cout << "!(x < 5) && !(y >= 7) is equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;
         else
            cout << "!(x < 5) && !(y >= 7) is not equivalent to"
               << " !((x < 5) || (y >= 7))" << endl;

         cout << endl;
      } while ( !( y >= 7 ) );

   } while ( !( x < 5 ) );

   cout << endl << endl;
}


void partB()
{
   int a = 3;
   int b = 5;
   int g;

   cout << "Part B" << endl << endl;


   do
   {
      a++;
      g = 4;


      do
      {
         g++;

         cout << "!( a == b): " << !( a == b ) << endl;
         cout << "!( g != 5): " << !( g != 5 ) << endl;

         if ( ( !( a == b ) || !( g != 5 ) ) ==
              ( !( ( a == b ) && ( g != 5 ) ) ) )
            cout << "!(a == b) || !(g != 5) is equivalent to"
               << " !((a == b) && (g != 5))" << endl;
         else
            cout << "!(a == b) || !(g != 5) is not equivalent to"
               << " !((a == b) && (g != 5))" << endl;

         cout << endl;
      } while ( !( g != 5 ) );

   } while ( !( a == b ) );

   cout << endl << endl;
}

void partC()
{
   int x = 7;
   int y;

   cout << "Part C" << endl << endl;

   do
   {
      x++;
      y = 6;

      do
      {
         y--;

         cout << "( x <= 8 ): " << ( x <= 8 ) << endl;
         cout << "( y > 4 ): " << ( y > 4 ) << endl;

         if ( !( ( x <= 8 ) && ( y > 4 ) ) ==
              ( !( x <= 8 ) || !( y > 4 ) ) )
            cout << "!((x <= 8) && (y > 4)) is equivalent to"
               << " !(x <= 8) || !(y > 4)" << endl;
         else
            cout << "!((x <= 8) && (y > 4)) is not equivalent to"
               << " !(x <= 8) || !(y > 4)" << endl;

         cout << endl;
      } while ( ( y > 4 ) );

   } while ( ( x <= 8 ) );

   cout << endl << endl;
}

void partD()
{
   int i = 6;
   int j;

   cout << "Part D" << endl << endl;
   do
   {
      i--;
      j = 5;


      do
      {
         j++;
         cout << "( i > 4 ): " << ( i > 4 ) << endl;
         cout << "( j <= 6 ): " << ( j <= 6 ) << endl;

         if ( !( ( i > 4 ) || ( j <= 6 ) ) ==
            ( !( i > 4 ) && !( j <= 6 ) ) )
            cout << "!((i > 4) || (j <= 6)) is equivalent to"
               << " !(i > 4) && !(j <= 6)" << endl;
         else
            cout << "!((i > 4) || (j <= 6)) is not equivalent to"
               << " !(i > 4) && !(j <= 6)" << endl;

         cout << endl;
      } while ( ( j <= 6 ) );

   } while ( ( i > 4 ) );
}



int main()
{
    cout << boolalpha;
    partA();
    partB();
    partC();
    partD();

   system("pause");
   return 0;
}

