#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex(double r, double i);
	Complex();
	~Complex();
	friend Complex operator+(const Complex& cmpl1, const Complex& cmpl2);
	friend Complex operator-(const Complex& cmpl1, const Complex& cmpl2);
	friend Complex operator*(double n, const Complex& cmpl);
	friend Complex operator*(const Complex& cmpl1, const Complex& cmpl2);
	friend Complex operator~(const Complex& cmpl);
	friend std::ostream& operator<<(std::ostream& os, const Complex& cmpl);
	friend std::istream& operator>>(std::istream& is, Complex& cmpl);
};

#endif COMPLEX0_H
