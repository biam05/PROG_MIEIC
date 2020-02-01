#include <iostream>
using namespace std;

int main()
{
	float a, b;
	char op;

	cout << "Escreve uma conta no formato 'número operação número': ";
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