#include <iostream>
using namespace std;

int main()
{
	double x, y, z;

	cout << "Insere 3 valores para saber se estes poderiam formar um tri�ngulo: ";
	cin >> x >> y >> z;

	if ((abs(x - y) < z < (x + y)) && (abs(z - y) < x < (z + y)) && (abs(z - x) < y < (z + x)))
		cout << "� poss�vel formar um tri�ngulo";
	else
		cout << "� imposs�vel formar um tri�ngulo";

	return 0;
}
