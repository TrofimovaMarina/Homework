#pragma once
#include <iostream>
#include <cmath>
#define eps 0.000001

class ComplexNumbers
{
private:
	double re;
	double im;
	double scrabs()
	{
		return re * re + im * im;
	}
public:
	ComplexNumbers();
	ComplexNumbers(double re = 0, double im = 0);
	ComplexNumbers(const ComplexNumbers& complex_number);
	~ComplexNumbers();

	void setRe(double re);
	double getRe();

	void setIm(double im);
	double getIm();

	void set(double re, double im);

	//void print();
	//ComplexNumbers exponentation(const int n);
	ComplexNumbers reverse();
	double abs();
	double arg();
	void roots(const int n, std::ostream& stream);

	void operator=(const ComplexNumbers& complex_number);

	friend ComplexNumbers operator+(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2);
	friend ComplexNumbers operator+(const double sum, const ComplexNumbers& complex_number);
	friend ComplexNumbers operator+(const ComplexNumbers& complex_number, const double sum);

	friend ComplexNumbers operator-(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2);
	friend ComplexNumbers operator-(const double d, const ComplexNumbers& complex_number);
	friend ComplexNumbers operator-(const ComplexNumbers& complex_number, const double d);
	ComplexNumbers operator-();

	friend ComplexNumbers operator*(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2);
	friend ComplexNumbers operator*(const double mult, const ComplexNumbers& complex_number);
	friend ComplexNumbers operator*(const ComplexNumbers& complex_number, const double mult);

	friend ComplexNumbers operator/(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2);
	friend ComplexNumbers operator/(const ComplexNumbers& complex_number, const double d);
	friend ComplexNumbers operator/(const double d, const ComplexNumbers& complex_number);

	friend std::ostream& operator<<(std::ostream& stream, const ComplexNumbers& complex_number);
};


