#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	int t = 0;

	cin >> k;
	cin >> m;
	cin >> n;

	if (n < k)
	{
		cout << 2 * m;
	}
	else
	{
		if (n % k == 0)
		{
			t = n / k;
			cout << 2 * m * t;
		}
		else
		{
			t = n / k;
			if (2 * (n % k) <= k)
			{
				cout << 2 * m * t + m;
			}
			else
			{
				cout << 2 * m * t + 2 * m;
			}
		}
	}

	return EXIT_SUCCESS;
}