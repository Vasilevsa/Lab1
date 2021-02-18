#include <iostream> 
#include "task7_func.h" // указание на голову

using namespace std;

extern double x;
extern double result;

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "По очереди введите значения х" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}