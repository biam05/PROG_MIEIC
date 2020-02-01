/*
1.3
Dados os valor p e r, determina o valor de M (M = 4/3(ppir**3)
*/
#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int p, r;
	float pi_const;
	float M;

	cout << "Massa específica do material da esfera (Kg/m^3): " << endl;
	cin >> p;
	cout << "Raio (m): " << endl;
	cin >> r;

	pi_const = M_PI;

	M = (4 * (p * pi_const * pow(r, 3)))/3;

	cout << "Massa da esfera (Kg): " << M;

	return 0;

}