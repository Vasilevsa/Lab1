#include <iostream> 

using namespace std;

double x = 2, result = 0;

void f(void); // ���������� "������" �������. ��������, ��� ��� void, �.�. ��� ������ ���������� �� �����
// ������ ���,  �� �������� � ����������� �����������

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "������� �������� �" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}

void f(void) {
	result = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}