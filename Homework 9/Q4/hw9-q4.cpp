/*************************************************************************
**	Author			    :	Divyanshu Bisht
**	Program			    :	hw9, q4
**	Date Created		:	February 11,2020
**	Date Last Modified	:	February 11,2020
**	Usage			    :	No command line arguments
**  Operating System/IDE:   Windows 8.1/Code::Blocks 12.11
**	Problem:
4. Write a program that helps an elementary school student learn multiplication. Use rand to
produce two positive one-digit integers. It should then type a question such as
How much is 6 times 7?
The student types the answer. Your program checks the answer. If it is correct, print 'Very
Good', then ask another multiplication question. If wrong, print 'No, please try again'. Let
the student repeatedly try until the right answer.
The various comments for correct and incorrect answers are printed as follows:
Correct answer responses:
- Very good!
- Excellent!
- Nice work!
- Keep up the good work!
Incorrect answer responses:
- No. Please try again.
- Wrong. Try once more.
- Don't give up.
- Not really, keep trying.
Use random number generator to choose a number from 1 to 4 to select an appropriate re-
sponse to each answer. Use switch statement to issue the responses.

**************************************************************************/
#include <cstdlib>
#include <iostream>
using namespace std;

int guess = 0, answer = 0, first = 0, second = 0, endProgram = 0, response = 0;

int main()
{
    while(1)
    {
    first = 1 + rand() % 9;
    second = 1 + rand() % 9;
    answer = first * second;
    response = 1 + rand() % 4;
    cout << "How much is " << first << " times " << second << " (-1 to End)? : ";
    cin >> guess;
     if(guess == answer){
        switch(response){
            case 1: cout << "Very good!\n";
                    continue;
            case 2: cout << "Excellent!\n";
                    continue;
            case 3: cout << "Nice work!\n";
                    continue;
            case 4: cout << "Keep up the good work!\n";
                    continue;
        }
    }
    else if(guess == -1){
        cout << "That's all for now. Bye.\n";
        break;
    }
    else{
         while(guess!=true)
         {
           response = 1 + rand() % 4;
           switch(response){
              case 1: cout << "No. Please try again.\n";
              case 2: cout << "Wrong. Try once more.\n";
              case 3: cout << "Don't give up.\n";
              case 4: cout << "Not really, keep trying.\n";
                  }
             cout<<"\n TRY GUESSING ANSWER ONCE AGAIN";
             cin>>guess;
         }
    }
}
   return 0;
}


