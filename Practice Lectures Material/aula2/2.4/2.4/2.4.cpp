#include <iostream>
using namespace std;

int main()
{
	int x;
	float result;

	cout << "Qual o custo do transporte da mercadoria? Insere o peso: ";
	cin >> x;

	if (x < 500)
		result = 5;
	else if (x >= 500 && x <= 1000)
		result = 5 + ceil((x - 500)/100.0)* 1.5;
	else if (x > 1000)
		result = 12.5 + ceil((x - 1000)/250.0) * 5;
	
	cout << result;

	return 0;
}