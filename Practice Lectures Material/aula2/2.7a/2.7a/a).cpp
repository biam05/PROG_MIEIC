#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	double Sen, Cos, Tan, pi;
	cout << "ang \t\t sen \t\t cos \t\t tan \n";
	for (i = 0; i <= 90; i += 15)
	{	
		pi = M_PI;
		Sen = sin((i*pi)/180);
		Cos = cos((i*pi)/180);
		Tan = tan((i*pi) / 180);

		if (i == 90 || i == 270)
			cout << i << setprecision(6) << fixed << "\t\t" << Sen << "\t" << Cos << "\t" << "infinito" << "\n";
		else
			cout << i << setprecision(6) << fixed << "\t\t" << Sen << "\t" << Cos << "\t" << Tan << "\n";

	}
	return 0;
}