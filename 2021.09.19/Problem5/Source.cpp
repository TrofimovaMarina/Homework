#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n;

	cin >> n;

	cout << n / 100 + (n % 100) / 10 + (n % 100) % 10 << endl;

	return EXIT_SUCCESS;
}
