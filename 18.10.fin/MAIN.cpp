#include <iostream>
#include "MONEY.h"
#include <windows.h>
#include <sstream>
#include <fstream>
#include <string>;
using namespace std;

int main()
{
	string path = "FILE.txt";
	ofstream fout;
	fout.open(path);
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int s = 0, r = 0, menu = 1, index, k = 0;
	double zn;
	long int c = 0;
	while (s <= 0)
	{
		cout << "����� ���������� ����: "; cin >> s;
	}
	Money* data;
	data = new Money[s];
	for (int i = 0; i < s; i++)
	{
		cout << "����� ���������� ������: "; cin >> r;
		cout << "����� ���������� ������: "; cin >> c; cout << endl;
		data[i] = Money(r, c);
		fout << data[i].Get() << " ";
		fout.close();
	}
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
	{

		cout << endl << endl << "����: \n\t1. ������� ��� ����� � ������� \n\t2. �������� ���� \n\t3. ������� ��� ������, ������ �������� \n\t4. ��������� ��� ������ � �������� ��������� � ��� ���� \n\t5. �������� K ������� � ������ �����  \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;

		if (menu == 1)
		{
			for (int i = 0; i < s; i++)
			{
				cout << data[i].Get() << " ";
			}
		}

		if (menu == 2)
		{
			fout.open(path);
			for (int i = 0; i < s; i++)
				fout << data[i].Get() << " ";
			cout << "���� ��������";
			fout.close();
		}


		if (menu == 3)
		{
			cout << "����� ��������: "; cin >> zn;
			for (int i = 0; i < s; i++)
			{
				if (data[i].sum == zn)
				{
					data[i].sum = -1;
					k++;
				}
					
			}
			Money* data1;
			data1 = new Money[s - k];
			int j = 0;
			for (int i = 0; i < s; i++)
			{
				if (data[i].sum != -1)
				{
					data1[j] = data[i];
					j++;
				}
			}
			delete[] data;
			data = data1;
			s = s - k;
			k = 0;
			cout << "�������� �������";
		}

		if (menu == 4)
		{
			cout << "����� ��������: "; cin >> zn;
			for (int i = 0; i < s; i++)
			{
				if (data[i].sum == zn)
				{
					data[i].sum = data[i].sum / 2;
				}
			}

			cout << "��������� �������";
		}

		if (menu == 5)
		{
			cout << "������� ������� ��������: "; cin >> k;
			Money* data1;
			data1 = new Money[s + k];
			for (int i = 0; i < k; i++)
			{
				cout << "����� ���������� ������: "; cin >> r;
				cout << "����� ���������� ������: "; cin >> c; cout << endl;
				data1[i] = Money(r, c);
			}
			int j = 0;
			for (int i = k; i < s + k; i++)
			{
				data1[i] = data[j];
				j++;
			}
			delete[] data;
			data = data1;
			s = s + k;
			k = 0;
			cout << "��������� �������";
		}
	}
	

	fout.close();
}