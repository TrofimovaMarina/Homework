#include "Fraction.h"

Fraction::Fraction()
{
	this->numerator = 0;
	this->denominator = 1;

}

Fraction::Fraction(long long numerator, long long denominator) : numerator(numerator), denominator(denominator) {}

Fraction::Fraction(const Fraction& fraction): numerator(fraction.numerator), denominator(fraction.denominator) {}

void Fraction::Fraction::operator=(const Fraction& fraction)
{
	this->numerator = fraction.numerator;
	this->denominator = fraction.denominator;
}

bool Fraction::operator==(const Fraction& fraction)
{
	if (this->numerator * fraction.denominator - this->denominator * fraction.numerator == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator<(const Fraction& fraction)
{
	if ((this->numerator * fraction.denominator - this->denominator * fraction.numerator) /
		this->denominator * fraction.denominator < 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator<=(const Fraction& fraction)
{
	if ((this->numerator * fraction.denominator - this->denominator * fraction.numerator) / 
		this->denominator * fraction.denominator <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator>(const Fraction& fraction)
{
	if ((this->numerator * fraction.denominator - this->denominator * fraction.numerator) /
		this->denominator * fraction.denominator > 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Fraction::operator>=(const Fraction& fraction)
{
	if ((this->numerator * fraction.denominator - this->denominator * fraction.numerator) /
		this->denominator * fraction.denominator >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//+
Fraction operator+(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.numerator * fraction2.denominator + fraction1.denominator * fraction2.numerator,
		fraction1.denominator * fraction2.denominator);
}

Fraction operator+(const long long d, const Fraction& fraction)
{
	return Fraction(d * fraction.denominator + fraction.numerator, fraction.denominator);
}

Fraction operator+(const Fraction& fraction, const long long d)
{
	return Fraction(d * fraction.denominator + fraction.numerator, fraction.denominator);
}

//*
Fraction operator*(const long long d, const Fraction& fraction)
{
	return Fraction(d * fraction.numerator, fraction.denominator);
}

Fraction operator*(const Fraction& fraction, const long long d)
{
	return Fraction(d * fraction.numerator, fraction.denominator);
}

Fraction operator*(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.numerator * fraction2.numerator, fraction1.denominator * fraction2.denominator);
}

//-
Fraction operator-(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction((fraction1.numerator * fraction2.denominator - fraction1.denominator * fraction2.numerator)
		/ fraction1.denominator * fraction2.denominator);
}

Fraction operator-(const Fraction& fraction, const long long d)
{
	return Fraction(fraction.numerator - d * fraction.denominator, fraction.denominator);
}

Fraction operator-(const long long d, const Fraction& fraction)
{
	return Fraction(d * fraction.denominator - fraction.numerator, fraction.denominator);
}

Fraction Fraction::operator-()
{
	return Fraction(-this->numerator, -this->denominator);
}

// / 
Fraction operator/(const Fraction& fraction1, const Fraction& fraction2)
{
	return Fraction(fraction1.numerator * fraction2.denominator, fraction1.denominator * fraction2.numerator);
}

Fraction operator/(const long long d, const Fraction& fraction)
{
	return Fraction(d * fraction.denominator, fraction.numerator);
}

Fraction operator/(const Fraction& fraction, const long long d)
{
	return Fraction(fraction.numerator, fraction.denominator * d);
}

//<<
std::ostream& operator<<(std::ostream& stream, const Fraction& fraction)
{
	stream << fraction.numerator;
	if (fraction.denominator < 0)
	{
		stream << "/(" << fraction.denominator << ")" << " ";
	} 
	else
	{
		stream << "/" << fraction.denominator << " ";
	}

	return stream;
}

//функции
Fraction Fraction::reverse()
{
	return Fraction(this->denominator, this->numerator);
}

Fraction Fraction::abs()
{
	long long a = 0;
	long long b = 0;

	if (this->numerator > 0)
	{
		a = this->numerator;
	}
	else
	{
		a = -this->numerator;
	}

	if (this->denominator > 0)
	{
		b = this->denominator;
	}
	else
	{
		b = -this->denominator;
	}

	return Fraction(a, b);
}

Fraction Fraction::exponentation(const int n)
{
	long long a = 1;
	long long b = 1;

	for (int i = 0; i < n; ++i)
	{
		a = this->numerator * a;
		b = this->denominator * b;
	}

	return Fraction(a, b);
}