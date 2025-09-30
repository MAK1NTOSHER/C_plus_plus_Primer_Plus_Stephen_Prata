#include "complex0.h"
#include <iostream>

Complex::Complex(double r, double i)
{
	real = r;
	imaginary = i;
}

Complex::Complex()
{
	real = imaginary = 0;
}

Complex::~Complex()
{
}

Complex operator+(const Complex& cmpl1, const Complex& cmpl2)
{
	return Complex(cmpl1.real + cmpl2.real, cmpl1.imaginary + cmpl2.imaginary);
}

Complex operator-(const Complex& cmpl1, const Complex& cmpl2)
{
	return Complex(cmpl1.real - cmpl2.real, cmpl1.imaginary - cmpl2.imaginary);
}

Complex operator*(double n, const Complex& cmpl)
{
	return Complex(n * cmpl.real, n * cmpl.imaginary);
}

Complex operator*(const Complex& cmpl1, const Complex& cmpl2)
{
	return Complex(cmpl1.real * cmpl2.real - cmpl1.imaginary * cmpl2.imaginary, cmpl1.real * cmpl2.imaginary + cmpl1.imaginary * cmpl2.real);
}

Complex operator~(const Complex& cmpl)
{
	return Complex(cmpl.real, -cmpl.imaginary);
}

std::ostream& operator<<(std::ostream& os, const Complex& cmpl)
{
	os << "(" << cmpl.real << "," << cmpl.imaginary << "i)";
	return os;
}

std::istream& operator>>(std::istream& is, Complex& cmpl)
{
	double real, imaginary;
	std::cout << "real: ";
	if (is >> cmpl.real)
	{
		std::cout << "imaginary: ";
		is >> cmpl.imaginary;
	}
	return is;
}