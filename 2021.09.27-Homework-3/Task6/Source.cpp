#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;

    cin >> n;

    int k = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;

    for (int i = 0; i < n; ++i)
    {
        cin >> k;

        if (k < 0)
        {
            c1++;
        }
        if (k == 0)
        {
            c2++;
        }
        if (k > 0)
        {
            c3++;
        }
    }
    cout << c2 << " " << c3 << " " << c1 << endl;

    return EXIT_SUCCESS;
}