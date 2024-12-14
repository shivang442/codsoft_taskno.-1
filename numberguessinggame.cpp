#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Initialize the random number generator.
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int userGuess = 0;

    cout << "Hello there! Welcome to the Number Guessing Game!" << endl;
    cout << "I've picked a secret number between 1 and 100." << endl;
    cout << "Your job is to guess it. Let's see how quickly you can figure it out!" << endl;

    while (userGuess != randomNumber) {
        cout << "Took a guess: ";
        cin >> userGuess;

        if (userGuess < randomNumber) {
            cout << "Oops, that's too low! Try a bit higher." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Whoa, too high! Aim a little lower." << endl;
        } else {
            cout << "Amazing! You got it right! The secret number was " << randomNumber << "." << endl;
            cout << "Great job! Thanks for playing the Number Guessing Game!" << endl;
        }
    }

    return 0;
}
