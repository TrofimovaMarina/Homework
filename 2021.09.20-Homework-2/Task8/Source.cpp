#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int a1 = 0;
	int b1 = 0;
	int c1 = 0;

	cin >> a;
	cin >> b;
	cin >> c;

	if (c > a)
	{
		a1 = a;
		if (c > b)
		{
			b1 = b;
			c1 = c;
		}
		else
		{
			b1 = c;
			c1 = b;
		}
	}

	else
	{
		a1 = c;
		if (a > b)
		{
			b1 = b;
			c1 = a;
		}
		else
		{
			b1 = a;
			c1 = b;
		}
	}

	if (a1 + b1 <= c1)
	{
		cout << "impossible";
	}
	else
	{
		if (a1 * a1 + b1 * b1 == c1 * c1)
		{
			cout << "right";
		}
		if (a1 * a1 + b1 * b1 > c1 * c1)
		{
			cout << "acute";
		}
		if (a1 * a1 + b1 * b1 < c1 * c1)
		{
			cout << "obtuse";
		}
	}
	return EXIT_SUCCESS;
}