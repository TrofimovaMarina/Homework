#include <iostream>
#include "MyLib.h"

using namespace std;

int count(int n)
{
	int k = 0;
	while (n > 1)
	{
		if (n % 2 == 0)
		{
			n = n / 2;
		}
		else
		{
			n = 3 * n + 1;
		}
		k++;
	}
	return k;
}


void print_circle(int r)
{
	int height = r;
	int width = 3 * r / 2;//otherwise it looks too elongated

	for (int y = height; y >= -height; y -= 2)
	{
		for (int x = -width; x <= width; ++x)
		{

			if ((x * x + y * y - r * r > -r) && (x * x + y * y - r * r < r))/*a suitable deviation from the real value*/
			{
				cout << "*";
			}
			else cout << " ";
		}
		cout << "\n";
	}
}