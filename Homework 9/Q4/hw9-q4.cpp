/*************************************************************************
**	Author			    :	Nicholas Sammut
**	Program			    :	hw9, q4
**	Date Created		:	November 14, 2013
**	Date Last Modified	:	November 14, 2013
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
    cout << "Enter -1 to End.\n";
    start:
    first = 1 + rand() % 9;
    second = 1 + rand() % 9;
    answer = first * second;
    while(true){
    retry:
    response = 1 + rand() % 4;
    cout << "How much is " << first << " times " << second << " (-1 to End)? : ";
    cin >> guess;
    if(guess == answer){
        switch(response){
            case 1: cout << "Very good!\n";
                    goto start;
            case 2: cout << "Excellent!\n";
                    goto start;
            case 3: cout << "Nice work!\n";
                    goto start;
            case 4: cout << "Keep up the good work!\n";
                    goto start;
        }
    }
    else if(guess == -1){
        cout << "That's all for now. Bye.\n";
        system("pause");
        return 0;
    }
    else{
        switch(response){
            case 1: cout << "No. Please try again.\n";
                    goto retry;
            case 2: cout << "Wrong. Try once more.\n";
                    goto retry;
            case 3: cout << "Don't give up.\n";
                    goto retry;
            case 4: cout << "Not really, keep trying.\n";
                    goto retry;
        }
    }
}
   system("pause");
   return 0;
}

