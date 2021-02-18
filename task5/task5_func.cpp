#include <iostream> // подключаем библиотеку для реализации функции косинуса

double f(double x) {
	return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}