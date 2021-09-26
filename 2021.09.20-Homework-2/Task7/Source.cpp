#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;

	cin >> n;
	cin >> m;
	cin >> k;

	if ((k < m * n) && ((k % m == 0) || (k % n == 0)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}