
#include <iostream>
class Complex
{
	double Re, Im;
public:
	Complex();
	Complex(double a, double b);
	Complex(double& a);
	Complex(int& a);
	Complex(float& a);
	Complex(const Complex &c);
	const Complex operator+(const Complex& c) const;
	const Complex operator-(const Complex& c) const;
	const Complex operator*(const Complex& c) const;
	const Complex operator*(const double c) const;
	const Complex operator/(const Complex& c) const;
	const Complex operator/(const double c) const;
	Complex& operator=(const Complex& right);
	bool operator==(const Complex& c);
	double GetRe();
	void SetRe(double re);
	double GetIm();
	void SetIm(double im);
	friend std::ostream& operator<< (std::ostream& out, Complex& c);
	friend std::istream& operator>> (std::istream& in, Complex& c);
};
