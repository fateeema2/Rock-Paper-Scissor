#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function to get the computer's choice
int getComputerChoice() {
    return rand() % 3; // Random number between 0 and 2
}

// Function to determine the winner
string determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        return "It's a tie!";
    }
    else if ((userChoice == 0 && computerChoice == 2) ||  // Rock beats Scissors
             (userChoice == 1 && computerChoice == 0) ||  // Paper beats Rock
             (userChoice == 2 && computerChoice == 1)) {  // Scissors beats Paper
        return "You win!";
    } else {
        return "Computer wins!";
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    int userChoice;
    int computerChoice;
    string choices[3] = {"Rock", "Paper", "Scissors"};

    cout << "Welcome to Rock, Paper, Scissors!\n";
    
    // Get user input
    cout << "Enter your choice (0 = Rock, 1 = Paper, 2 = Scissors): ";
    cin >> userChoice;

    // Input validation
    while (userChoice < 0 || userChoice > 2) {
        cout << "Invalid choice. Please enter 0 for Rock, 1 for Paper, or 2 for Scissors: ";
        cin >> userChoice;
    }

    // Get computer choice
    computerChoice = getComputerChoice();

    // Output the choices
    cout << "Your choice: " << choices[userChoice] << endl;
    cout << "Computer's choice: " << choices[computerChoice] << endl;
 
    cout << determineWinner(userChoice, computerChoice) << endl;

    return 0;
}
