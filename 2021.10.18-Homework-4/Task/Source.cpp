#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    const int N = 100;
    int a[N] = { 0 };

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    {
        cout << "ARRAY : ";
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }


    {
        cout << "EVEN : ";
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }

    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s = s + a[i];
        }
        cout << "SUM : " << s << endl;
    }

    {
        int s = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                s = s * a[i];
            }
        }
        cout << "PRODUCT OF NEGATIVE : " << s << endl;
    }

    {
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < a[k])
            {
                k = i;
            }
        }
        cout << "FIRST MIN INDEX : " << k << endl;
    }

    {
        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > a[k])
            {
                k = i;
            }
        }

        int b = a[0];
        for (int i = 0; i < n; i++)
        {
            if ((a[i] > b) && (a[i] != a[k]))
            {
                b = a[i];
            }
        }
        cout << "SECOND MAX : " << b << endl;
    }

    {
        cout << "REVERSE : ";
        for (int i = 0; i < n; i++)
        {
            cout << a[n - 1 - i] << " ";
        }
        cout << endl;

    }

    {
        cout << "ODD INDEXES : ";
        for (int i = 0; i < n; i++)
        {
            if (i % 2 != 0)
            {
                cout << a[i] << " ";
            }
        }
    }

    return EXIT_SUCCESS;
}