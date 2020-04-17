#include "Complex.h"
#include <iostream>
Complex::Complex()
{
	Re = 0;
	Im = 0;
}
Complex::Complex(double a, double b)
{
	Re = a;
	Im = b;
}

Complex::Complex(double a)
{
	Re = a;
	Im = 0;
}

Complex::Complex(int& a)
{
	Re = a;
	Im = 0;
}

Complex::Complex(float& a)
{
	Re = a;
	Im = 0;
}

Complex::Complex(const Complex& c)
{
	Re = c.Re;
	Im = c.Im;
}

const Complex Complex::operator+(const Complex& c) const
{
	double re = Re + c.Re;
	double im = Im + c.Im;
	Complex a(re, im);
	return a;
}

const Complex Complex::operator-(const Complex& c) const
{
	double re = Re - c.Re;
	double im = Im - c.Im;
	Complex a(re,im);
	return a;
}

const Complex Complex::operator*(const Complex& c) const
{
	double re = Re * c.Re - Im * c.Im;
	double im = Re * c.Im + Im * c.Re;
	Complex a(re,im);
	return a;
}

const Complex Complex::operator*(const double& c) const
{
	double re = c * Re;
	double im = c * Im;
	Complex a(re, im);
	return a;
}

const Complex Complex::operator/(const Complex& c) const
{
	double re = (Re * c.Re + Im * c.Im) / (c.Re * c.Re - c.Im * c.Im);
	double im = (c.Re * Im - Re * Im) / (c.Re * c.Re - c.Im * c.Im);
	Complex a(re,im);
	return a;
}

const Complex Complex::operator/(const double c) const
{
	double re = Re / c;
	double im = Im / c;
	Complex a(re, im);
	return Complex();
}

Complex& Complex::operator=(const Complex& right)
{
	if (this == &right) return *this;
	this->SetRe(right.Re);
	this->SetIm(right.Im);
	return *this;
}

bool Complex::operator==(const Complex& c)
{
	if (Re == c.Re || Im == c.Im) return true;
	else return false;
}

double Complex::GetRe()
{
	return Re;
}

void Complex::SetRe(double re)
{
	Re = re;
}

double Complex::GetIm()
{
	return Im;
}

void Complex::SetIm(double im)
{
	Im = im;
}

std::ostream& operator<<(std::ostream& out, Complex& c)
{
	out << c.GetRe() << ' ' << c.GetIm();
	return out;
}

std::istream& operator>>(std::istream& in, Complex& c)
{
	double re, im;
	in >> re;
	in >> im;
	c.SetRe(re);
	c.SetIm(im);
	return in;
}
