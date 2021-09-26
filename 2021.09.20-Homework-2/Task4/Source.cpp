#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int x = 0;

	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;

	if (a != 0)
	{
		x = -b / a;

		if (a * x + b == 0)
		{
			if (c * x + d != 0)
			{
				cout << x;
			}
			else
			{
				cout << "NO";
			}
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		if (b == 0)
		{
			cout << "INF";
		}
		else
		{
			cout << "NO";
		}
	}

	return EXIT_SUCCESS;
}