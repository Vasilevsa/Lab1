#include <iostream>

using namespace std;

double f(double x); // ���������� "������" �������

void main()
{
	setlocale(LC_ALL, "Rus");

	double x = 2;

	cout << "x= " << x << "; f= " << f(x) << "\n";

	cout << "������� �������� �" << "\n";
	cin >> x;
	cout << "x= " << x << "; f= " << f(x);
}