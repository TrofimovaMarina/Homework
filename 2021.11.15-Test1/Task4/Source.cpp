#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    cin >> n;

    int* numbers = new int[n] { 0 };
    
    for (int i = 0; i < n; ++i)
    {
        cin >> numbers[i];
    }

    int min = 0;
    min = numbers[0];
    for (int i = 0; i < n; ++i)
    {
        if (min > numbers[i])
        {
            min = numbers[i];
        }
    }

    int max = 0;
    max = numbers[0];
    for (int i = 0; i < n; ++i)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        if (numbers[i] == max)
        {
            numbers[i] = min;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << numbers[i] << " ";
    }

    delete[] numbers;

    return EXIT_SUCCESS;
}