#include "fraction.h"
#include <cmath>
#include <exception>
#include <iostream>
#include "iomanip"
#include <sstream>

Fraction::Fraction(const int numerator, const int dominator)
	:numerator{ numerator }
	, dominator { dominator }
{

};

Fraction::Fraction(const int number)
	: numerator { number }
	, dominator { 1 }
{

};
Fraction::Fraction(const double decFraction)
{
	const int Precision = 1000000;
	numerator 
};
Fraction(const Fraction& fraction);