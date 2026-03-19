#include <iostream>

#pragma once
class Fraction
{
public:
	Fraction() = default;
	Fraction(const int numerator, const int dominator);
	Fraction(const int number);
	Fraction(const double decFraction);
	Fraction(const Fraction& fraction);

	Fraction& operator += (const Fraction& other);
	Fraction operator+(const Fraction& other) const;
	Fraction operator-() const;
	Fraction& operator-=(const Fraction& other);
	Fraction operator-(const Fraction& other) const;
	Fraction& operator*=(const Fraction& other);
	Fraction operator*(const Fraction& other) const;
	Fraction operator-();
	Fraction& operator/=(const Fraction& other);
	Fraction& operator/=(const double number);
	Fraction operator/(const Fraction& other) const;

	friend std::istream& operator>>(std::istream& is, const Fraction& fraction);

private:
	const int numerator;
	const int dominator;
	void normalize();
};

std::ostream& operator<<(std::ostream& os, const Fraction& fraction);
