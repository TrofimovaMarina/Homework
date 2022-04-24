#include "ArrayList.h"

using namespace std;

int main()
{
	ArrayList list(10);
	cout << list << endl;

	for (int i = 0; i < 10; ++i)
	{
		list.pushend(i);
	}
	cout << "Filling the array (pushend): " << list << endl;

	int a = list.extractend();
	cout << "Extractend: " << list << endl;

	int b = list.extractbegin();
	cout << "Extractbegin: " << list << endl;

	list.pushbegin(10);
	cout << "Pushbegin(10):" << list << endl;

	list[1] = 20;
	cout << "list[1] = 20: " << list << endl;

	list[5] = 30;
	cout << "list[5] = 30: " << list << endl;

	list[16] = 40;
	cout << "list[16] = 40: " << list << endl;

	list[-2] = 50;
	cout << "list[-2] = 50: " << list << endl;

	list.swap(2, 4);
	cout << "Swap(2, 4): " << list << endl;

	list.insert(6, 3);
	cout << "Insert(6, 3): " << list << endl;

	int c = list.extract(4);
	cout << "Extract(4): " << list << endl;

	list.sort();
	cout << "Sort: " << list << endl;

	return 0;
}