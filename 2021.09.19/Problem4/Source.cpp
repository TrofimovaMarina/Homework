#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v, t, L = 109;

	cin >> v; //* скорость
	cin >> t; //* время

	cout << (L + v * t % L) % L << endl;

	return EXIT_SUCCESS;
}