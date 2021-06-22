#include "Money.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	long int rub = -1;
	int kop = -1;
	while (rub < 1) 
	{
		cout << "����� ���������� ������: "; cin >> rub;
	}
	
	while (kop < 1 || kop >99)
	{
		cout << "����� ���������� ������: "; cin >> kop;
	}
	Money a(rub, kop);
	a.Print(a.sum);

	rub = -1; kop = -1;
	
	while (rub < 1)
	{
		cout << endl << "����� ���������� ������: "; cin >> rub;
	}

	while (kop < 1 || kop >99)
	{
		cout << "����� ���������� ������: "; cin >> kop;
	}
	Money b(rub, kop);
	b.Print(b.sum);

	cout.precision(3);
	cout << endl << "������� ������ ����� �� ������: " << a.sum / b.sum;
	double k;
	cout << endl << "����� �����, �� ������� ����� ��������� �����: "; cin >> k;

	a.sum = a.sum * k;
	b.sum = b.sum * k;
	a.Print(a.sum);
	b.Print(b.sum);
}