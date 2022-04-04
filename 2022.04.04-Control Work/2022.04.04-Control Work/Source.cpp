#include <iostream>
#include "Fraction.h"

using namespace std;

int main()
{
	Fraction fr1(10, 4);
	Fraction fr2(5, -2);
	Fraction fr3(-1, 5);
	
	cout << fr1 * fr2 << endl;
	cout << fr1 / fr2 << endl;
	cout << (3 * fr1 + 4 * fr2) << endl;
	cout << 1 / (3 * fr1 + 4 * fr2) << endl;
	cout << fr1.abs() << endl; //модуль числа
	cout << fr1.reverse() << endl; //обратное число
	cout << fr3.exponentation(3) << endl;
	
	return 0;
}