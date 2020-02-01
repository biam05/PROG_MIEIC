#include <iostream>
using namespace std;

int main()
{
	float x, y, z;

	cout << "Escreve 3 números para saber qual a ordemd decrescente destes: ";
	cin >> x >> y >> z;

	if (x > y && x > z)
	{
		if (y > z)
			cout << x << ' ' << y << ' ' << z;
		else if (z > y)
			cout << x << ' ' << z << ' ' << y;
	}
	else if (y > x && y > z)
	{
		if (x > z)
			cout << y << ' ' << x << ' ' << z;
		else if (z > x)
			cout << y << ' ' << z << ' ' << x;
	}
	else if (z > x && z > y)
	{
		if (x > y)
			cout << z << ' ' << x << ' ' << y;
		else if (y > x)
			cout << z << ' ' << y << ' ' << x;
	}
	return 0;
}