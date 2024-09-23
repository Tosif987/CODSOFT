#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); 
    int number = rand() % 100 + 1; 
    int guess;
    int attempts = 0;

    cout << "<-...Guessing Game...->" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > number) {
            cout << "Too high!" << endl;
        } else if (guess < number) {
            cout << "Too low!" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
        }
    } while (guess != number);

    return 0;
}