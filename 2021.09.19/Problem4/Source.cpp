#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int v, t, L = 109;

	cin >> v; //* ��������
	cin >> t; //* �����

	cout << (L + v * t % L) % L << endl;

	return EXIT_SUCCESS;
}