#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int k = 1;
    for (int i = 0; i < n; ++i)
    {
        k = k * 2;
    }

    cout << k << endl;

    return EXIT_SUCCESS;
}