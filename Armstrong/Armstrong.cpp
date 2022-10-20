#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int k = n;
	int t = n;
	int sum = 0;
	int counter_r = 0;

	while (n > 0) {
		++counter_r;
		n /= 10;
	}

	while (k > 0)
	{
		sum += pow(k % 10, counter_r);
		k /= 10;
	}

	if (sum == t)
	{
		cout << "Y\n";
		return 0;
	}

	cout << "N\n";
	return 0;
}