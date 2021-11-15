#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    
    int n = 0;
    int m = 0;
    cin >> n >> m;

    int* num1 = new int[n] { 0 };
    int* num2 = new int[m] { 0 };

    for (int i = 0; i < n; ++i)
    {
        cin >> num1[i];
    }

    for (int i = 0; i < m; ++i)
    {
        cin >> num2[i];
    }

    int x = 0;
    int* num3 = new int[n] { 0 };
    int t = 0;
    for (int i = 0; i < n; ++i)
    {
        x = num1[i];
        for (int j = 0; j < m; ++j)
        {
            if (num2[j] == x)
            {
                num3[t] = x;
                ++t;
                break;
            }
        }
    }
    //cout << "t = " << t << endl;
    if (t != 0)
    {
        //sort
        int y = 0;
        for (int i = 0; i < t; ++i)
        {
            for (int j = 0; j < t - i - 1; ++j)
            {
                if (num3[j] > num3[j + 1])
                {
                    y = num3[j];
                    num3[j] = num3[j + 1];
                    num3[j + 1] = y;
                }
            }
        }

        //without repeating
        cout << num3[0] << " ";
        for (int i = 1; i < t; ++i)
        {
                if (num3[i] != num3[i - 1])
                {
                    cout << num3[i] << " ";
                }
        }
    }

    delete[] num1;
    delete[] num2;
    delete[] num3;

    return EXIT_SUCCESS;
}