#include <iostream>
using namespace std;

int main()
{
	float a, b;
	char op;

	cout << "Escreve uma conta no formato 'n�mero opera��o n�mero': ";
	cin >> a >> op >> b;

	if (op == '+')
		cout << a + b;
	else if (op == '-')
		cout << a - b;
	else if (op == '*')
		cout << a * b;
	else if (op == '/')
		cout << a / b;

	return 0;
}