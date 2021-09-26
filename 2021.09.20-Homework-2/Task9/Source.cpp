#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	cin >> M;
	cin >> N;
	cin >> x;
	cin >> y;

	if (x + 1 <= M)
	{
		cout << x + 1 << " " << y << endl;
	}
	if (x - 1 >= 1)
	{
		cout << x - 1 << " " << y << endl;

	}
	if (y + 1 <= N)
	{
		cout << x << " " << y + 1 << endl;
	}
	if (y - 1 >= 1)
	{
		cout << x << " " << y - 1 << endl;
	}

	return EXIT_SUCCESS;
}