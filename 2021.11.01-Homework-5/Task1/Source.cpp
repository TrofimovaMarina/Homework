#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;
    int k = 0;
    int m = 0;

    cin >> x >> k >> m;

    int x1 = 0;
    int x2 = 0;
    x1 = (x & (1 << k)) >> k; //if value of k-th bit of x equals 1 then x1 = 1, else x1 = 0
    x2 = (x & (1 << m)) >> m;

    x = x & (~(1 << k)) & (~(1 << m)); //delete k-th and m-th bits if x

    x = (x1 << m) | (x2 << k) | x;

    cout << x;

    return EXIT_SUCCESS;
}