#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));

    int playerChoice;
    int computerChoice;
    char playAgain;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    do {
        cout << "Choose your move:" << endl;
        cout << "1. Rock" << endl;
        cout << "2. Paper" << endl;
        cout << "3. Scissors" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> playerChoice;

        computerChoice = rand() % 3 + 1; // Randomly choose the computer's move

        cout << "Computer chose ";

        switch (computerChoice) {
            case 1:
                cout << "Rock." << endl;
                break;
            case 2:
                cout << "Paper." << endl;
                break;
            case 3:
                cout << "Scissors." << endl;
                break;
        }

        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 1 && computerChoice == 3) ||
                   (playerChoice == 2 && computerChoice == 1) ||
                   (playerChoice == 3 && computerChoice == 2)) {
            cout << "Congratulations! You win!" << endl;
        } else {
            cout << "Sorry, you lose." << endl;
        }

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing Rock, Paper, Scissors!" << endl;

    return 0;
}