// Lab_03_2.cpp
// < Konchak olia >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 14 

#include <iostream>

using namespace std;

int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b{}; // ������� ��������
	double c; // ������� ��������
	double F; //��������� ���������� ������

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> c;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;
	// ����� 1 ������������ � ��������� ���� 
	if (x < 0 && b != 0)
		F = -(a * x * x - b);
	if (x > 0 && b ==0)
		F = (x - a) / (x - c);
	if (!(x<0 && b!=0) && !(x>0 && b==0))
	F = (x / c) + (c / x);
	cout << endl;
	cout << "1) F = " << F << endl;

	// ����� 2 ������������ � ����� ���� 
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
