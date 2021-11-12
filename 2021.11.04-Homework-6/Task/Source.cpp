#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int choice = 0;
    int count = 0;
    int capacity = 10;
    int element = 0;
    int* a = new int[capacity] { 0 };

    do
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            for (int i = 0; i < count; ++i)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            break;
        }
        //add to the end
        case 2:
        {
            cin >> element;
            if (count == capacity)
            {
                int* temp = new int[capacity * 2] { 0 };
                for (int i = 0; i < capacity; ++i)
                {
                    temp[i] = a[i];
                }
                delete[] a;
                a = temp;
                capacity *= 2;
            }
            a[count] = element;
            ++count;
            break;
        }
        //add to the beginning
        case 3:
        {
            cin >> element;
            int* temp = new int[capacity] { 0 };
            for (int i = 0; i < count; ++i)
            {
                temp[i + 1] = a[i];
            }
            delete[] a;
            a = temp;
            capacity++;
            
            a[0] = element;
            ++count;
            break;
        }
        //delete from the end
        case 4:
        {
            int* temp = new int[capacity] { 0 };
            for (int i = 0; i < count; ++i)
            {
                temp[i] = a[i];
            }
            delete[] a;
            a = temp;
            --count;
            break;
        }
        //delete from the beginning
        case 5:
        {
            int* temp = new int[capacity] { 0 };
            for (int i = 0; i < count - 1; ++i)
            {
                temp[i] = a[i + 1];
            }
            delete[] a;
            a = temp;
            --count;
            break;
        }
        //reverse
        case 6:
        {
            int* temp = new int[capacity] { 0 };
            for (int i = 0; i < count; ++i)
            {
                int t = 0;
                //cout << count - 1 - i << " " << a[count - 1 - i] << endl;
                t = a[count - 1 - i];
                temp[i] = t;
            }
            delete[] a;
            a = temp;
            break;
        }
        }
    } while (choice != 0);

    return EXIT_SUCCESS;
}