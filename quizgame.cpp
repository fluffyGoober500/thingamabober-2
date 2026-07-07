include <iostream>
int main() {
	int score = 0;
	std::string questions[] = { "1: What shape is the earth?", "2: What is my preferred name?", "3: What programming language was used to make this?"};
	std::string answers[][4] = { {"A: circle", "B: sphere", "C: pyramid", "D: flat"},
								 {"A: Niko", "B: Mat", "C: James", "D: Mathew"},
								 {"A: Python", "B: Javascript" , "C: Lua", "D: C++"}};
	char answerKey[] = {'B','A','D'};
	char guess;
	int size = sizeof(questions) / sizeof(questions[0]);
	int rows = sizeof(answers) / sizeof(answers[0]);
	int collumns = sizeof(answers[0]) / sizeof(answers[0][0]);
	for (int i = 0; i < size; i++) {
		std::cout << questions[i] << std::endl;
		std::cout << "****************************************** \n";
		for (int j = 0; j < collumns; j++) {
			std::cout << answers[i][j] << std::endl;
		};
		std::cout << "****************************************** \n";
		std::cin >> guess;
		guess = toupper(guess);
		if (guess == answerKey[i]) {
			score += 1; 
		};
	};
	std::cout << "You got " << score << " out of " << size << " correct! \n";
	std::cout << &answerKey;
};
 
