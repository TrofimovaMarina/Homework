#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    double d = 0;
    cin >> d;

    long long* p = (long long*)&d;
    long long number = *p;

    int size = sizeof(long long) * 8;
    long long one = 1ll;
    for (int i = 1; i <= size; ++i)
    {
        long long digit = ((number & (one << (size - i))) >> (size - i));
        cout << digit;
        if ((i % 4) == 0)
        {
            cout << " ";
        }
    }

    return EXIT_SUCCESS;
}