#include<iostream>
#include"LinkedList.h"

using namespace std;

int main(int argc, char* argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(0);
	list.pushTail(1);
	list.pushTail(2);
	list.pushHead(-1);
	list.pushHead(-2);
	cout << list << endl;
	list.insert(10, 3);
	cout << list << endl;
	list.extract(5);
	cout << list << endl;
	list.swap(2, 3);
	cout << list << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;
	return EXIT_SUCCESS;
	
}