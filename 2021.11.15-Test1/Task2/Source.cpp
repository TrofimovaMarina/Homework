#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int min = 0;
    int max = 0;
    int i = 0;

    cin >> a;
    min = a;

    cin >> a;
    max = a;

    while (cin >> a)
    {
        /*cout << "i = " << i << endl;
        cout << "min = "  << min << endl;
        cout << "max = "  << max << endl;*/
        if (i % 2 == 0)
        {
            if (min > a)
            {
                min = a;
            }
        }
        if (i % 2 != 0)
        {
            if (max < a)
            {
                max = a;
            }
        }
        ++i;
    }

    cout << max + min << endl;

    return EXIT_SUCCESS;
}