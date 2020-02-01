#include <iostream>
using namespace std;

int main()
{
	int x, i = 1, count = 0;

	cout << "Is it a prime? Insert a number to check: ";
	cin >> x;

	for (i; i <=int(sqrt(x)); i++)
	{
		if (x % i == 0)
		{
			count += 1;
		}
	}
	if (count > 1)
	{
		cout << "It's not a prime";
	}
	else
		cout << "It's a prime";

	return 0;
}