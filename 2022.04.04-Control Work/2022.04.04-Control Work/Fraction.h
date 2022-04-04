#pragma once
#include <iostream>

class Fraction
{
private:
	long long numerator;
	long long denominator;

public:
	//конструкторы и деструктор
	Fraction();
	Fraction(long long numerator = 0, long long denominator = 1);
	Fraction(const Fraction& fraction);
	~Fraction()
	{
		this->numerator = 0;
		this->denominator = 0;
	}

	//операторы присваивания, равенства (==) и сравнения(<, <=, >, >=)
	void operator=(const Fraction& fraction);
	
	bool operator==(const Fraction& fraction);

	bool operator<(const Fraction& fraction);
	bool operator<=(const Fraction& fraction);
	bool operator>(const Fraction& fraction);
	bool operator>=(const Fraction& fraction);

	//операторы сложения, умножения на число, умножения на Fraction, вычитания, 
	//нахождения противоположенного числа
	friend Fraction operator+(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator+(const long long d, const Fraction& fraction);
	friend Fraction operator+(const Fraction& fraction, const long long d);

	friend Fraction operator-(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator-(const Fraction& fraction, const long long d);
	friend Fraction operator-(const long long d, const Fraction& fraction);
	Fraction operator-();

	friend Fraction operator*(const long long d, const Fraction& fraction);
	friend Fraction operator*(const Fraction& fraction, const long long d);
	friend Fraction operator*(const Fraction& fraction1, const Fraction& fraction2);

	friend Fraction operator/(const Fraction& fraction1, const Fraction& fraction2);
	friend Fraction operator/(const long long d, const Fraction& fraction);
	friend Fraction operator/(const Fraction& fraction, const long long d);

	//оператор вывода в поток
	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);

	//функции
	Fraction reverse();
	Fraction abs();
	Fraction exponentation(const int n);

};
