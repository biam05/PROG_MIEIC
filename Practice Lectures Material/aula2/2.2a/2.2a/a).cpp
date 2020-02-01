#include <iostream>
using namespace std;

int main()
{
	float x, y, z;

	cout << "Escreve 3 números para saber qual o maior e o menor: ";
	cin >> x >> y >> z;

	if (x > y && x > z)
	{
		if (y > z)
			cout << "Maior: " << x << " Menor: " << z;
		else if (z > y)
			cout << "Maior: " << x << " Menor: " << y;
	}
	else if (y > x && y > z)
	{
		if (x > z)
			cout << "Maior: " << y << " Menor: " << z;
		else if (z > x)
			cout << "Maior: " << y << " Menor: " << x;
	}
	else if (z > x && z > y)
	{
		if (x > y)
			cout << "Maior: " << z << " Menor: " << y;
		else if (y > x)
			cout << "Maior: " << z << " Menor: " << x;
	}
	return 0;
}