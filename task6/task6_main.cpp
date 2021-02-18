#include <iostream> 

using namespace std;

extern double x; // поиск значени€ переменной из других файлов с помощью служебного слова extern
extern double result;
void f(void);

void main()
{
	setlocale(LC_ALL, "Rus");

	f();
	cout << "x= " << x << "; f= " << result << "\n";

	cout << "¬ведите значени€ х" << "\n";
	cin >> x;
	f();
	cout << "x= " << x << "; f= " << result;

}