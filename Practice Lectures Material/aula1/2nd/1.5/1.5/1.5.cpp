/*
1.5
Soma de dois tempos dados
*/

#include <iostream>

using namespace std;

int main()
{
	int h1, m1, s1;
	int h2, m2, s2;
	int sum_s;
	int sum_m;
	int sum_h;
	int dias;

	cout << "Tempo 1 (horas minutos segundos) ? ";
	cin >> h1 >> m1 >> s1;
	cout << "Tempo 2 (horas minutos segundos) ? ";
	cin >> h2 >> m2 >> s2;

	sum_s = (s1 + s2) % 60;
	sum_m = (m1 + m2 + (s1 + s2) / 60) % 60;
	sum_h = (h1 + h2 + (m1 + m2 + (s1 + s2) / 60) / 60) % 24;
	dias = (h1 + h2 + (m1 + m2 + (s1 + s2) / 60) / 60) / 24;


	cout << "Soma dos tempos: " << dias << " dia, " << sum_h << " horas, " << sum_m << " minutos e " << sum_s << " segundos";
	
	return 0;
}