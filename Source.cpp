#include <iostream>
#include <random>

int main() {
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int rand_number = rand() % 100;
	int number{};

	std::cout << "������ ����� �� 0 �� 100" << '\n';

	while (true) {
		std::cout << "������� ����� -> ";
		std::cin >> number;

		if (number == rand_number) {
			std::cout << "����� ��������!" << '\n';
			break;
		}

		else {
			if (number < rand_number) {
				std::cout << "���� ����� ������ ����������, �������� ��� ���!" << '\n' << '\n';
			}
			else {
				std::cout << "���� ����� ������ ����������, �������� ��� ���!" << '\n' << '\n';
			}
		}
	}
}