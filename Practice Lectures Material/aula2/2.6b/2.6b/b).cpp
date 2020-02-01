#include <iostream>
using namespace std;

int main()
{
	int i = 2, count = 0, k, count2 = 0;

	for (i; count2 <= 99; i++)
	{
		count = 0;
		for (k = 2; k <= int(sqrt(i)); k++)
		{
			if (i % k == 0)
			{
				count += 1;
			}
		}
		if (count == 0)
		{
			count2 += 1;
			cout << i << ' ';
		}
	}
	return 0;
}