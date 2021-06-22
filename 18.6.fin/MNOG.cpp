#include "MNOG.h"
#include <iostream>
using namespace std;
Vector::Vector(int s)
{
	int k;
	size = s;
	data = new int[size];
	cout << "����� �������� ���������" << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
}

int Vector::give(int index)
{
	if (index > size - 1) { cout << "\n������ ����� "; return 404; }
	else return data[index];
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
			if (data[i] == data[j])
				k++;
		}
		if (k != 0)
			cout << "\n������� " << data[i] << " ����������� " << k + 1 << " ���";
		k = 0;
	}
		
}

void Vector::end()
{
	delete [] data;
	data = 0;
}

void Vector::pred(int i)
{
	if (i == 0) cout << "\n������ ������ �������";
	else cout << "\n���������� ������� = " << data[i-1] << " ��� ������: " << i-1;
}