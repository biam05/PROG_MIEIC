/*
1.2
Calcula a média de 3 números e calcula a diferença de 
cada um destes em relação à média
*/

#include <iostream>
#include <iomanip> // std::setprecision

using namespace std;

int main()
{
	int a, b, c;
	float media;

	cout << "A ? ";
	cin >> a;
	cout << "B ? ";
	cin >> b;
	cout << "C ? ";
	cin >> c;

	media = (a + b + c) / 3.0;

	cout << "media = " << fixed << setprecision(3) << media << endl;
	cout << "A-media = " << setprecision(3) << a - media << endl;
	cout << "B-media = " << setprecision(3) << b - media << endl;
	cout << "C-media = " << setprecision(3) << c - media << endl;

	return 0;
}