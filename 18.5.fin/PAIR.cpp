#include "PAIR.h"
#include <iostream>
using namespace std;

void PAIR::raw()
{
	if (first == second) cout << "����� �����" << endl;
	else cout << "����� �� �����" << endl;
}

void PAIR::umn()
{
	cout << "������������ ����� = " << first * second << endl;
}

void PAIR::in()
{
	cout << "����� 2 �����: "; cin >> first; cin >> second;
}

void PAIR::in1()
{
	cout << "����� ��� 2 �����: "; cin >> first1; cin >> second1;
}

void PAIR::raz()
{
	cout << "�������� �� �������: " << first - second << "," << first1 - second1 << endl;
}

void PAIR::raz1()
{
	cout << "�������� �� �������: " << ch - zn << "," << ch1 - zn1 << endl;
}

void PAIR::in2()
{
	cout << "����� 2 ������� �����: "; cin >> ch; cin >> zn;
}

void PAIR::in3()
{
	cout << "����� ��� 2 ������� �����: "; cin >> ch1; cin >> zn1;
}

void PAIR::sum()
{
	cout << "����� 2�� ������� �����: " << ch + zn << endl;
}

void PAIR::umn1()
{
	cout << "������������ 2�� ������� �����: " << ch * zn << endl;
}
