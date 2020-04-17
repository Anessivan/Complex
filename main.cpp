#include <iostream>
#include "Complex.h"
#include <locale>
int main()
{
	Complex a, b(1, 1), c(b) , d(2.0, 15.0);
	setlocale(LC_ALL, "rus");
	c = b + d;
	std::cout << "Изначальное число:" << a << std::endl << "Введите число: ";
	std::cin >> a;
	std::cout << "Введеное число: " << a << std::endl;
	std::cout << "Изначальное b: " << b << std::endl;
	b = c;
	std::cout << "Измененная b: " << b << std::endl;
	return 0;
}