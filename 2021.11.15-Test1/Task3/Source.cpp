#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int m = 0;
    int k = 0;

    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        if (n * i % m == 0)
        {
            k = n * i;
            break;
        }
    }

    cout << k;

    return EXIT_SUCCESS;
}