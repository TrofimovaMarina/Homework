#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v = 0;
	int t = 0;
	const int L = 109;

	cin >> v; 
	cin >> t; 

	cout << (L + v * t % L) % L << endl;

	return EXIT_SUCCESS;
}