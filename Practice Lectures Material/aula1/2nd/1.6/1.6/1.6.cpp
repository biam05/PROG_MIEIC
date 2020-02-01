/*
1.6
Ler coordenadas dos vértices de um triângulo dadas pelo utilizador e 
calcular a área deste
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
	float s, a, b, c, Final;

	cout << "Coordenada 1: ";
	cin >> x1 >> y1;
	cout << "Coordenada 2: ";
	cin >> x2 >> y2;
	cout << "Coordenada 3: ";
	cin >> x3 >> y3;

	a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
	c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
	s = (a + b + c) / 2.0;
	Final = sqrt(s * (s - a) * (s - b) * (s - c));

	cout << "Area do triangulo: " << Final;

	return 0;
}