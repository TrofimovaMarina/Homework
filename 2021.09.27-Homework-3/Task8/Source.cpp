#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int k = 0;
    int c = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        c = c + k;
    }
    cout << c << endl;

    return EXIT_SUCCESS;
}