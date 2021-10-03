#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    for (int i = 1; i < n / 2 + 1; ++i)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    cout << n;

    return EXIT_SUCCESS;
}