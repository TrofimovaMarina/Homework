#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int h1, m1, s1, h2, m2, s2;

	cin >> h1;
	cin >> m1;
	cin >> s1;
	cin >> h2;
	cin >> m2;
	cin >> s2;

	cout << 3600 * (h2 - h1) + 60 * (m2 - m1) + (s2 - s1) << endl;

	return EXIT_SUCCESS;
}
