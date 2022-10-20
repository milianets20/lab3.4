// Lab_03_4.cpp
// < прізвище, ім’я автора >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 20
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if ((y >= (x - 2) * (x - 2) - 3) && (y > 0) && (y < x) ||
		(y >= (x - 2) * (x - 2) - 3) && (y < fabs(x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}
