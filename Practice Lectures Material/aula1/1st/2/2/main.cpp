/*
PROGRAM 02
Test whether the user knows the basic math tables.
Max operand value and no. of operations can be changed, but recompilation is
necessary...
JAS
2013-02-12
*/
#include <iostream>
#include <ctime>
using namespace std;
int main(void)
{
	// variable declaration
	int operand1, operand2, result, answer;
	char operators[4] = { '+','-','*','/' };
	char operation; // why not 'operator' ...?
	int numCorrectAnswers = 0;
	const int MAX_OPERAND_VALUE = 10;
	const int NUM_OPERATIONS = 10;

	// initialize random number generator
	srand((unsigned int)time(NULL));

	for (int i = 1; i <= NUM_OPERATIONS; i++)
	{
		// randomly generate operands and operator
		operand1 = rand() % MAX_OPERAND_VALUE + 1;
		operand2 = rand() % MAX_OPERAND_VALUE + 1;
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
		// and update number of correct answers
		if (answer == result)
		{
			cout << "Correct answer. Congratulations!\n";
			numCorrectAnswers++;
		}
		else
			cout << "Wrong answer ...\n";
	}
	// show final result
	cout << "Number of correct answers = " << numCorrectAnswers << endl;
	return 0;
}