#include <iostream>

int main() {

	int num;
	std::cout << "Enter The Number: ";
	std::cin >> num;
	if (num > 3) {
		std::cout << "The Number Is Bigger";
	}
	else if (num < 3) {
		std::cout << "The Number Is Smaller";
	}
	return 0;
}
