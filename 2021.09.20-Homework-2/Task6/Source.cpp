#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x_q = 0;
	int y_q = 0;
	int x_f = 0;
	int y_f = 0;

	cin >> x_q;
	cin >> y_q;
	cin >> x_f;
	cin >> y_f;

	if ((x_q == x_f) || (y_q == y_f) || ((x_q - x_f) * (x_q - x_f) == (y_q - y_f) * (y_q - y_f)))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return EXIT_SUCCESS;
}