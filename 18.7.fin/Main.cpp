#include <iostream>
#include "MNOG.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int s, in, menu = 4;
	cout << "����� ���������� ���� "; cin >> s;
	Vector a(s);
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{
		
		cout << endl << endl << "����: \n\t1. �������� ������� �� ������� \n\t2. �������� ������ ��������� \n\t3. �������� ����������� ��������� \n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;
		if (menu == 1)
		{
			cout << "����� ������ ��������, ������� ������ ��������: "; cin >> in;
			a.give(in);
		}

		if (menu == 2)
			cout << "������ = " << a.givesize();

		if (menu == 3)
			a.cross();

		if (menu == 0)
		{
			a.end();
			break;
		}
	}
}