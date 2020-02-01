#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	int n;
	float x, count = 1.0, result = 0;

	cout << "N termos: ";
	cin >> n;
	cout << "x? ";
	cin >> x;

	while (count <= n)
	{
		if (count == 1)
		{
			result = result + 1;
			count = count + 1.0;
		}

		else
		{
			if (int(count) % 2 == 0)
			{
				result = result - pow(x,(count-1)) / (factorial(int(count) - 1)*1.0);
				count = count + 1.0;
			}
			else
			{
				result = result + pow(x, (count - 1)) / (factorial(int(count) - 1)*1.0);
				count = count + 1.0;
			}
		}
	}

	cout << result;

	return 0;
}