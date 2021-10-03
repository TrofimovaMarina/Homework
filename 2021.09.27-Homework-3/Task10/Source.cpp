#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;

    cin >> a;
    cin >> b;

    int i = 0;
    do
    {
        if ((i * i >= a) && (i * i <= b))
        {
            cout << i * i << " ";
        }

        i++;
    } while (i <= b);

    return EXIT_SUCCESS;
}