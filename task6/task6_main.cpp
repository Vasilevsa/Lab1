#include <iostream> 

using namespace std;

extern double x; // ����� �������� ���������� �� ������ ������ � ������� ���������� ����� extern
extern double result;
void f(void);

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