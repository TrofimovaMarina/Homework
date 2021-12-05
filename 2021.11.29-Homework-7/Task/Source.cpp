#include <iostream>
#include "MyLib.h"

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int c = 0;

    cin >> n;
    c = count(n);
    cout << c << endl;

    int r = 0;
    cin >> r;
    print_circle(r);

    return EXIT_SUCCESS;
}