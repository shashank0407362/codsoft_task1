#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));
    int randomNumber = std::rand() % 100 + 1;

    int guess = 0;
    int attempts = 0;

    std::cout << "Guess the number between 1 and 100!" << std::endl;

    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++;

        if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the correct number in " << attempts << " attempts." << std::endl;
        }
    }

    return 0;
}
