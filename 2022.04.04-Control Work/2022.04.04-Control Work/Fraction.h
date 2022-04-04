#pragma once
#include <iostream>

class Fraction
{
private:
	long long numerator;
	long long denominator;

public:
	//������������ � ����������
	Fraction();
	Fraction(long long numerator = 0, long long denominator = 1);
	Fraction(const Fraction& fraction);
	~Fraction()
	{
		this->numerator = 0;
		this->denominator = 0;
	}

	//��������� ������������, ��������� (==) � ���������(<, <=, >, >=)
	void operator=(const Fraction& fraction);
	
	bool operator==(const Fraction& fraction);

	bool operator<(const Fraction& fraction);
	bool operator<=(const Fraction& fraction);
	bool operator>(const Fraction& fraction);
	bool operator>=(const Fraction& fraction);

	//��������� ��������, ��������� �� �����, ��������� �� Fraction, ���������, 
	//���������� ������������������ �����
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

	//�������� ������ � �����
	friend std::ostream& operator<<(std::ostream& stream, const Fraction& fraction);

	//�������
	Fraction reverse();
	Fraction abs();
	Fraction exponentation(const int n);

};
