#include <iostream>
#include <string>

int main() {
	char *pGrades = NULL;
	int size;
	std::cout << "How many grades would you like to enter?";
	std::cin >> size;
	pGrades = new char[size];
	for (int i = 0; i < size; i++ ) {
		std::cout << " Enter grade #" << i + 1 << ": ";
		char temp;
		std::cin >> temp;
		temp = toupper(temp);
		pGrades[i] = temp;
	}
	for (int i = 0; i < size; i++) {
		std::cout << pGrades[i] << " ";
	}
	delete[] pGrades;
};
