#include "MNOG.h"
#include <iostream>
using namespace std;
Vector::Vector(int s)
{
	int k;
	size = s;
	data = new int[size];
	data1 = new int[size];
	cout << "����� ��� �����" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "����� ���������� ������ = "; cin >> data[i];
		cout << "����� ���������� ������ = "; cin >> data1[i]; cout << endl;
	}
}

int Vector::give(int index)
{
	if (index > size - 1) { cout << "\n������ ����� "; return 404; }
	else cout << "������� ����� = " << data[index] << "." << data1[index];
}

int Vector::givesize()
{
	return size;
}

void Vector::cross()
{
	int k = 0;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if ((data[i] == data[j]) && (data1[i] == data1[j]))
				k++;
		}
		if (k != 0)
			cout << "\n������� " << data[i] << "." << data1[i] << " ����������� " << k + 1 << " ���";
		k = 0;
	}
		
}

void Vector::end()
{
	delete [] data;
	data = 0;
}
