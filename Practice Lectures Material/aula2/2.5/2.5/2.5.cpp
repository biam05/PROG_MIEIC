#include <iostream>
#include <iomanip> // std::setprecision
using namespace std;

int main()
{
	float a, b, c;
	float x, y, aux, real;

	cout << "Introduza os coeficientes (a b c) : ";
	cin >> a >> b >> c;

	if (a == 0)
	{
		x = (0 - c) / b;
		cout << "A equação tem 1 raíz real: " << fixed << setprecision(3) << x;
	}
	else if ((pow(b, 2) - 4 * a * c) == 0)
	{
		x = (0 - b) / (2 * a);
		cout << "A equação tem 2 raízes reais iguais: " << fixed << setprecision(3) << x << " e " << fixed << setprecision(3) <<  x;
	}
	else if ((4 * a * c) > pow(b, 2))
	{
		aux = (sqrt(abs(pow(b, 2) - 4 * a * c))) / (2 * a);
		real = (0 - b) / (2 * a);
		cout << "A equação tem 2 raízes imaginárias: " << fixed << setprecision(3) << real << "+" << fixed << setprecision(3) << aux << "i e " << fixed << setprecision(3) << real << "-" << fixed << setprecision(3) << aux << "i";
	}
	else
	{
		x = ((0 - b) + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		y = ((0 - b) - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
		cout << "A equação tem 2 raízes reais diferentes: " << fixed << setprecision(3) << x << " e " << fixed << setprecision(3) << y;
	}

	return 0;

}