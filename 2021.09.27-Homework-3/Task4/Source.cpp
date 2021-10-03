#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;

    cin >> n;
    cin >> k;

    int c = 1;
    for (int i = 1; i < k + 1; ++i)
    {
        c = c * (n - k + i) / i;
    }
    cout << c;

    return EXIT_SUCCESS;
}
