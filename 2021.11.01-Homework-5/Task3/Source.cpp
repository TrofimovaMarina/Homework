#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int x = 0;

    cout << "Enter the number: ";
    cin >> x;

    int t = 0;
    t = ~(x >> 31); //t = -1, if x >= 0 and 0, if x < 0
    //cout << "t = " << t << endl;

    //add 1 to t
    int res1 = 0;
    int t1 = 0;
    res1 = t ^ 1;
    t1 = (t & 1) << 1;
    while (t1 != 0)
    {
        int temp = res1;
        res1 = res1 ^ t1;
        t1 = (temp & t1) << 1;
    }
    //cout << "t + 1 = " << res1 << endl;

    int y = (x >> 31) ^ x; // x, if x >= 0 and (-x - 1), if  x < 0
    //cout << "y = " << y << endl;

    //add y to res1
    int res = 0;
    t1 = 0;
    res = y ^ res1;
    t1 = (y & res1) << 1;
    while (t1 != 0)
    {
        int temp = res;
        res = res ^ t1;
        t1 = (temp & t1) << 1;
    }
    cout << "Absolute value = " << res << endl;

    return EXIT_SUCCESS;
}