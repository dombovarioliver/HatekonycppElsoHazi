#include <iostream>
#include "fraction.h"

int main()
{
    Fraction f1 = Fraction{ 1,2};
	Fraction f2 = Fraction{ 1,2 };

	std::cout << (f1 += f2) << std::endl;
}
