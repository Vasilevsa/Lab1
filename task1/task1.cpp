#include <iostream>  // ���������� ��� ������

using namespace std; // ����������� ��� ��� ������

void main() // ������� ���������� �������
{
	setlocale(LC_ALL, "Rus"); // ��� ������ ������� ��������

	double x = 2; //2.00000 - ������ �����.

	double f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x); // func
	cout << "x= " << x << "; f= " << f << "\n"; // �����. "\n" - ������� �� ����� ������

	cout << "������� �������� �" << "\n";
	cin >> x; // ���� �� �������
	f = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x); // func
	cout << "x= " << x << "; f= " << f;

}