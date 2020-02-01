#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	float result = 0.0, count = 1.0;

	cout << "n termos: ";
	cin >> n;

	while (count <= n)
	{
		if (int(count) % 2 == 0)
		{
			result = result - 4 / (2 * count - 1);
			count += 1.0;
		}
		else
		{
			result = result + 4 / (2 * count - 1);
			count += 1.0;
		}
	}

	cout << setprecision(3) << fixed << result;

	return 0;
}