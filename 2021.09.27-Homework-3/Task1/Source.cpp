#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int k = 1;
    for (int i = 1; i < n + 1; ++i)
    {
        k = k * i;
    }
    cout << k << endl;

    return EXIT_SUCCESS;
}