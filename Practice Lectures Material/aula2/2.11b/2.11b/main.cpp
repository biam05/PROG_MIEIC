#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
	{
		return n * factorial(n - 1);
	}
}
int main()
{
	int num;
	float result = 1, count = 1.0;

	cout << "N termos: ";
	cin >> num;

	while (count < num)
	{
		result = result + 1 / (factorial(int(count))*1.0);
		count = count + 1;
	}

	cout << setprecision(3) << fixed << result;

	return 0;
}