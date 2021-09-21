#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int K = 0;

	cin >> N; //* students
	cin >> K; //* apples

	cout << K % N << endl;

	return EXIT_SUCCESS;
}
