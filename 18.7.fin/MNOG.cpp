#include "MNOG.h"
#include <iostream>
using namespace std;
Vector::Vector(int s)
{
	int k;
	size = s;
	data = new int[size];
	data1 = new int[size];
	cout << "¬веди все суммы" << endl;
	for (int i = 0; i < size; i++)
	{
		cout << "¬веди количество рублей = "; cin >> data[i];
		cout << "¬веди количество копеек = "; cin >> data1[i]; cout << endl;
	}
}

int Vector::give(int index)
{
	if (index > size - 1) { cout << "\nќшибка ввода "; return 404; }
	else cout << "»скома€ сумма = " << data[index] << "." << data1[index];
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
			cout << "\nЁлемент " << data[i] << "." << data1[i] << " встречаетс€ " << k + 1 << " раз";
		k = 0;
	}
		
}

void Vector::end()
{
	delete [] data;
	data = 0;
}
