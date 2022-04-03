#include "ComplexNumbers.h"

ComplexNumbers::ComplexNumbers()
{
	this->re = 0;
	this->im = 0;
}

ComplexNumbers::ComplexNumbers(double re, double im) : re(re), im(im) {}

ComplexNumbers::ComplexNumbers(const ComplexNumbers& complex_number) :
	re(complex_number.re), im(complex_number.im) {}

ComplexNumbers :: ~ComplexNumbers()
{
	this->re = 0;
	this->im = 0;
}

void ComplexNumbers::setRe(double re)
{
	this->re = re;
}

double ComplexNumbers::getRe()
{
	return this->re;
}

void ComplexNumbers::setIm(double im)
{
	this->im = im;
}

double ComplexNumbers::getIm()
{
	return this->im;
}

void ComplexNumbers::set(double re, double im)
{
	this->re = re;
	this->im = im;
}

/*void ComplexNumbers::print()
{
	//std::cout << this->re << " " << this->im << std::endl;
	if (fabs(this->re) > eps)
	{
		std::cout << this->re;
		if (this->im > eps)
		{
			std::cout << "+";
		}
	}
	if ((fabs(this->im) < eps) && (fabs(this->re) < eps))
	{
		std::cout << 0 << std::endl;
	}
	if (fabs(this->im) > eps)
	{
		std::cout << this->im << "i" << std::endl;
	}
}
*/

/*
ComplexNumbers ComplexNumbers::exponentation(const int n)
{
	double new_r = pow(this->abs(), n);
	//std::cout << new_r * cos_n_alpha << " " << new_r * sin_n_alpha << std::endl;
	return ComplexNumbers(new_r * cos(n * this->arg()), new_r * sin(n * this->arg()));
}
*/

void ComplexNumbers::roots(const int n, std::ostream& stream)
{
	double r = pow(this->abs(), 1.0 / double(n));

	double alpha = this->arg();

	const double PI = 3.141592653589793;
	stream << "There are " << n << " roots:" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		stream << i + 1 << ". " << ComplexNumbers(r * cos((alpha + 2 * PI * i) / n), r * sin((alpha + 2 * PI * i) / n)) << std::endl;
	}
}

ComplexNumbers	ComplexNumbers::reverse()
{
	return ComplexNumbers(this->re / this->scrabs(), -this->im / this->scrabs());
}

double ComplexNumbers::abs()
{
	return sqrt(this->scrabs());
}

double ComplexNumbers::arg()
{
	const double PI = 3.141592653589793;
	if (this->re >= 0)
	{
		return atan(this->im / this->re);
	}
	if ((this->re < 0) && (this->im >= 0))
	{
		return PI + atan(this->im / this->re);
	}
	if ((this->re < 0) && (this->im < 0))
	{
		return atan(this->im / this->re) - PI;
	}
}

void ComplexNumbers::operator=(const ComplexNumbers& complex_number)
{
	this->re = complex_number.re;
	this->im = complex_number.im;
}

ComplexNumbers operator+(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2)
{
	return ComplexNumbers(complex_number1.re + complex_number2.re, complex_number2.im + complex_number1.im);
}

ComplexNumbers operator+(const double sum, const ComplexNumbers& complex_number)
{
	return ComplexNumbers(sum + complex_number.re, complex_number.im);
}

ComplexNumbers operator+(const ComplexNumbers& complex_number, const double sum)
{
	return ComplexNumbers(sum + complex_number.re, complex_number.im);
}

ComplexNumbers operator-(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2)
{
	return ComplexNumbers(complex_number1.re - complex_number2.re, complex_number1.im - complex_number2.im);
}

ComplexNumbers operator-(const double d, const ComplexNumbers& complex_number)
{
	return ComplexNumbers(d - complex_number.re, -complex_number.im);
}

ComplexNumbers operator-(const ComplexNumbers& complex_number, const double d)
{
	return ComplexNumbers(complex_number.re - d, complex_number.im);
}

ComplexNumbers ComplexNumbers::operator-()
{
	return ComplexNumbers(-this->re, -this->im);
}

ComplexNumbers operator*(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2)
{
	return ComplexNumbers(complex_number1.re * complex_number2.re - complex_number1.im * complex_number2.im,
		complex_number1.re * complex_number2.im + complex_number1.im * complex_number2.re);
}

ComplexNumbers operator*(const double mult, const ComplexNumbers& complex_number)
{
	return ComplexNumbers(mult * complex_number.re, mult * complex_number.im);
}

ComplexNumbers operator*(const ComplexNumbers& complex_number, const double mult)
{
	return ComplexNumbers(mult * complex_number.re, mult * complex_number.im);
}

ComplexNumbers operator/(const ComplexNumbers& complex_number1, const ComplexNumbers& complex_number2)
{
	double re1 = complex_number1.re;
	double im1 = complex_number1.im;
	double re2 = complex_number2.re;
	double im2 = complex_number2.im;

	if ((re2 == 0) && (im2 == 0))
	{
		std::cout << "Incorrect input: the divisor equals zero" << std::endl;
	}
	else
	{
		return ComplexNumbers((re1 * re2 + im1 * im2) / (re2 * re2 + im2 * im2),
			(re2 * im1 - re1 * im2) / (re2 * re2 + im2 * im2));
	}
}

ComplexNumbers operator/(const ComplexNumbers& complex_number, const double d)
{
	if (d == 0)
	{
		std::cout << "Incorrect input: the divisor equals zero" << std::endl;
	}
	else
	{
		return ComplexNumbers(complex_number.re / d, complex_number.im / d);
	}

}

ComplexNumbers operator/(const double d, const ComplexNumbers& complex_number)
{
	double re1 = d;
	double im1 = 0;
	double re2 = complex_number.re;
	double im2 = complex_number.im;

	if ((re2 == 0) && (im2 == 0))
	{
		std::cout << "Incorrect input: the divisor equals zero" << std::endl;
	}
	else
	{
		return ComplexNumbers((re1 * re2 + im1 * im2) / (re2 * re2 + im2 * im2),
			(re2 * im1 - re1 * im2) / (re2 * re2 + im2 * im2));
	}
}

std::ostream& operator<<(std::ostream& stream, const ComplexNumbers& complex_number)
{
	if (fabs(complex_number.re) > eps)
	{
		stream << complex_number.re;
		if (complex_number.im > eps)
		{
			stream << "+";
		}
	}
	if ((fabs(complex_number.im) < eps) && (fabs(complex_number.re) < eps))
	{
		stream << 0;
	}
	if (fabs(complex_number.im) > eps)
	{
		if (fabs(complex_number.im - 1) < eps)
		{
			stream << "i";
		}
		if (fabs(complex_number.im + 1) < eps)
		{
			stream << "-i";
		}
		if ((fabs(complex_number.im - 1) > eps) && (fabs(complex_number.im + 1) > eps))
		{
			stream << complex_number.im << "i";
		}
	}

	return stream;
}