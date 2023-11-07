#include <iostream>
#include <random>

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int rand_number = rand() % 100;
	int number{};

	std::cout << "”гадай число от 0 до 100" << '\n';

	while (true) {
		std::cout << "¬ведите число -> ";
		std::cin >> number;

		if (number == rand_number) {
			std::cout << "„исло отгадано!" << '\n';
			break;
		}

		else {
			if (number < rand_number) {
				std::cout << "¬аше число меньше загаданого, попробуй ещЄ раз!" << '\n' << '\n';
			}
			else {
				std::cout << "¬аше число больше загаданого, попробуй ещЄ раз!" << '\n' << '\n';
			}
		}
	}
}