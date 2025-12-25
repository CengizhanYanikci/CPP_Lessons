#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    int randomNumber, guessNumber = 0, guessCount=0, score = 100;
    srand(time(0));
    randomNumber = rand() % 100 + 1;
    cout << "Guess a number between 1 and 100" << endl;
    do
    {
        cout << "Enter a guess number : ";
        cin >> guessNumber;
        if (guessNumber == -1)
        {
            break;
        }
        if (guessNumber < 0 || guessNumber > 100)
        {
            cout << "Please enter a number between 1 and 100";
            continue;
        }
        guessCount++;
        if (guessNumber == randomNumber)
        {
            cout << "Cong your guess is correct you find a number " << guessCount << " trying"<<endl;
            cout<<"Your score is : "<<score<<endl;
            break;
        }
        else
        {
            score -= 10;
            if (guessNumber > randomNumber)
            {
                cout << "Your number is greater than randomnumber" << endl;
                continue;
            }
            else
            {
                cout << "Your number is lower than randomnumber" << endl;
                continue;
            }
        }

    } while (guessNumber != -1);

    return 0;
}