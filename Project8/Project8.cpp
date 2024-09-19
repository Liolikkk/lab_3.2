// Lab_03_2.cpp
// < Konchak olia >
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 14 

#include <iostream>

using namespace std;

int main()
{
	double x; // вхідний аргумент
	double a; // вхідний аргумент
	double b{}; // вхідний аргумент
	double c; // вхідний аргумент
	double F; //результат обчислення виразу

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> c;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// спосіб 1 розгалуження в скороченій формі 
	if (x < 0 && b != 0)
		F = -(a * x * x - b);
	if (x > 0 && b ==0)
		F = (x - a) / (x - c);
	if (!(x<0 && b!=0) && !(x>0 && b==0))
	F = (x / c) + (c / x);
	cout << endl;
	cout << "1) F = " << F << endl;

	// спосіб 2 розгалуження в повній формі 
	if (x < 0 && b != 0)
		F = -(a * x * x - b);
	else
		if (x > 0 && b == 0)
			F = (x - a) / (x - c);
		else
			F = (x / c) + (c / x);
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;

}
