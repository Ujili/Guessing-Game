#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;


    while (guessCount < 3) {
        cout << "Please Enter Your Guess: ";
        cin >> guess;

        if (guess == secretNum) {
            break;
        }
        else {
            guessCount++;
        }
    }
    if (guess == secretNum) {
        cout << "You win!" << endl;
    }
    else {
        cout << "You ran out of guesses!" << endl;
    }


    return 0;
}
