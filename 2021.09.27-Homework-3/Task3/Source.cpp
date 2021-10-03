#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int k = 1;
    int t = 1;

    for (int i = 1; i < n + 1; i++)
    {
        printf("%2d ", i);

        if (i == k)
        {
            cout << endl;
            t = t + 1;
            k = k + t;
        }
    }

    return EXIT_SUCCESS;
}