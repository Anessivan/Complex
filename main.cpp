#include <iostream>
#include "Complex.h"
#include <locale>
int main()
{
	Complex a, b(1, 1), c(b) , d(2, 15);
	setlocale(LC_ALL, "rus");
	c = b + d;
	std::cout << a << std::endl << "������� �����: ";
	std::cin >> a;
	std::cout << "�������� �����: " << a << std::endl;
	std::cout << "����������� b: " << b << std::endl;
	b = c;
	std::cout << "���������� b: " << b << std::endl;
	return 0;
}