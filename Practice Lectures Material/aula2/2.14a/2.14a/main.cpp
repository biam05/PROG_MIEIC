#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float delta, rq = 1, rqn, rqn2, dif = 999999999999999, n;
	int nMaxIter;

	cout << "delta? nMaxIter? \n";
	cin >> delta >> nMaxIter;
	cout << "n? ";
	cin >> n;

	cout << "rq \t\t rqn \t\t rqn2 \t\t dif = n - rqn2 \n";
	while (nMaxIter >= 0 && abs(dif) >= delta)
	{	
		cout << setprecision(6) << fixed << rq;
		rqn = (rq + n / rq)/2;
		cout << "\t" << rqn;
		rq = rqn;
		rqn2 = pow(rqn, 2);
		dif = n - rqn2;
		cout << "\t" << rqn2;
		cout << "\t" << dif << "\n";

		nMaxIter = nMaxIter - 1;
	}

	return 0;
}