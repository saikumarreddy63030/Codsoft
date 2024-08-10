#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0)); // Seed the random number generator
    int randomNumber = std::rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess = 0;

    std::cout << "I have generated a random number between 1 and 100." << std::endl;
    std::cout << "Can you guess what it is?" << std::endl;

    while (guess != randomNumber) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess > randomNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
        }
    }

    return 0;
}

