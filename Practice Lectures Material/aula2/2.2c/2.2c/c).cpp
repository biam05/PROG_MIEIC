#include <iostream>
using namespace std;

int main()
{
	double x, y, z;

	cout << "Insere 3 valores para saber se estes poderiam formar um triângulo: ";
	cin >> x >> y >> z;

	if ((abs(x - y) < z < (x + y)) && (abs(z - y) < x < (z + y)) && (abs(z - x) < y < (z + x)))
		cout << "É possível formar um triângulo";
	else
		cout << "É impossível formar um triângulo";

	return 0;
}
