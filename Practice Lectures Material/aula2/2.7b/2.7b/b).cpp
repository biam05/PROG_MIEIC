#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int x;
	double Sen, Cos, Tan, pi, y, z;
	
	cout << "Limite inferior, Limite superior, Incremento: ";
	cin >> x >> y >> z;

	cout << "ang \t\t sen \t\t cos \t\t tan \n";
	for (x; x <= y; x += z)
	{
		pi = M_PI;
		Sen = sin((x*pi) / 180);
		Cos = cos((x*pi) / 180);
		Tan = tan((x*pi) / 180);

		if (x == 90 || x == 270)
			cout << x << setprecision(6) << fixed << "\t\t" << Sen << "\t" << Cos << "\t" << "infinito" << "\n";
		else
			cout << x << setprecision(6) << fixed << "\t\t" << Sen << "\t" << Cos << "\t" << Tan << "\n";

	}
	return 0;
}