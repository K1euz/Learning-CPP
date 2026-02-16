#include <iostream>
#include <ctime>

int main() {
    srand(time(0)); 
    int secret = rand() % 10 + 1; 
    int guess = 0;
    int attempts = 0; // Счетчик попыток

    std::cout << "I have picked a number between 1 and 10. Try to guess it!\n";

    while (guess != secret) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;
        attempts++; // Прибавляем единицу к попыткам

        if (guess > secret) {
            std::cout << "Too high! Try again.\n";
        } else if (guess < secret) {
            std::cout << "Too low! Try again.\n";
        }
    }

    std::cout << "Congratulations! You won in " << attempts << " attempts!";
    return 0;
}
