/*
 * Author: Syed Shaheer Ali
 * Task: 06 - Number Guessing Game
 * Purpose: An interactive game using random number generation and while-loops for user input validation.
 */

 #include <iostream>
#include <cstdlib>
using namespace std;
int main() {
    srand(time(0));
    
    int guess;
    int randomNum = (rand() % 100) + 1;

    cout << "Make a guess: ";
    cin >> guess;

    while (guess != randomNum) {
        cout << "\nIncorrect guess. Try again.";
        cout << "\nMake a guess: ";
        cin >> guess;
    }

    cout << "\nCongratulations! Your Guess is correct.";

    return 0;
}
