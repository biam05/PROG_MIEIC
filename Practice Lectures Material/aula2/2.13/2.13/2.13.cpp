#include <iostream>
using namespace std;

int main()
{
	int n, i = 2;

	cout << "Escreva um número inteiro para o decompor em fatotes: ";
	cin >> n;

	cout << n << "=";

	for (i; i <= n; i = i + 1)
	{
		while (n % i == 0)
		{
			cout << i << "x";
			n = n / i;
		}
	}

	return 0;
}

