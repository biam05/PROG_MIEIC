/*
PROGRAM 01
Test whether the user knows the basic math tables.
JAS
2013-02-12
*/
#include <iostream>
#include <ctime>
using namespace std;
int main(void)
{
	// variable declarations and initialization
	int operand1, operand2, result, answer;
	char operators[4] = { '+','-','*','/' };
	char operation; // why not 'operator' ...?

	// initialize random number generator
	srand((unsigned int)time(NULL));

	// randomly generate operands and operator
	operand1 = rand() % 10 + 1;
	operand2 = rand() % 10 + 1;
	operation = operators[rand() % 4];

	// calculate the correct result
	switch (operation)
	{
	case '+':
		result = operand1 + operand2;
		break;
	case '-':
		result = operand1 - operand2;
		break;
	case '*':
		result = operand1 * operand2;
		break;
	case '/':
		result = operand1 / operand2;
		break;
	}

	// ask the answer from the user
	cout << operand1 << " " << operation << " " << operand2 << " ? ";
	cin >> answer;

	// verify if the answer of the user is correct
	if (answer == result)
		cout << "Correct answer. Congratulations\n";
	else
		cout << "Wrong answer ...\n";
	return 0;
}