#include <iostream>
#include <vector>
#include <queue>
#include "CLASS.h"
#include <list>
#include <deque>
using namespace std; 

void Vectorr()
{
	float check = 1, menu = 1;
	float min = 32000, max = -32000;
	vector<float> Vector;
	cout << "����� �������� �������. ��������� ����� - 0" << endl;
	while (check != 0)
	{
		cin >> check;
		if (check != 0)
			Vector.push_back(check);
		else break;
	}
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{

		cout << "����: \n\t1. ������� ������\n\t2. ����� ������� � �������� � ����� \n\t3. ����� ������� � ������� \n\t4. � ������� �������� �������� ����� ��������� � �������� \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;

		if (menu == 1)
		{
			for (int i = 0; i < Vector.size(); i++)
			{
				cout << i + 1 << ") " << Vector[i] << "\t";
			}
			cout << endl;
		}

		if (menu == 2)
		{
			for (int i = 0; i < Vector.size(); i++)
			{
				if (Vector[i] < min)
					min = Vector[i];
			}
			Vector.push_back(min);
			cout << "������� ��������" << endl;
		}

		if (menu == 3)
		{
			vector<float>::iterator iter = Vector.begin();
			cout << "����� �������: "; cin >> check;
			for (int i = 0; i < Vector.size(); i++)
			{
				if (Vector[i] == check)
					Vector.erase(iter + i);
			}
			cout << "������� ������" << endl;
		}

		if (menu == 4)
		{
			for (int i = 0; i < Vector.size(); i++)
			{
				if (Vector[i] > max) max = Vector[i];
				if (Vector[i] < min) min = Vector[i];
			}
			for (int i = 0; i < Vector.size(); i++)
				Vector[i] = Vector[i] + max + min;
			cout << "\n��������� ���������" << endl;
		}
	}
}



void Moneyy()
{
	int s = 0, r = 0, menu = 1, index, k = 0;
	double zn, min = 32000, max = -32000;
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
	}
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{

		cout << "����: \n\t1. ������� ��� �����\n\t2. ����� ������� � �������� � ����� \n\t3. ����� ������� � ������� \n\t4. � ������� �������� �������� ����� ��������� � �������� \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;

		if (menu == 1)
		{
			for (int i = 0; i < s; i++)
			{
				cout << data[i].Get() << " ";
			}
			cout << endl;
		}

		if (menu == 2)
		{
			for (int i = 0; i < s; i++)
			{
				if (data[i].sum < min)
					min = data[i].sum;
			}
			Money* data1;
			data1 = new Money[s + 1];
			for (int i = 0; i < s; i++)
			{
				data1[i] = data[i];
			}
			data1[s].sum = min;
			delete[] data;
			data = data1;
			cout << "������� ��������" << endl;
			s++;
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
			cout << "�������� �������" << endl;
		}

		if (menu == 4)
		{

			for (int i = 0; i < s; i++)
			{
				if (data[i].sum > max) max = data[i].sum;
				if (data[i].sum < min) min = data[i].sum;
			}
			for (int i = 0; i < s; i++)
				data[i].sum = data[i].sum + max + min;
			cout << "\n��������� ���������" << endl;
		
		}
	}
}



void Vectorrr()
{
	int s, in, menu = 4;
	cout << "����� ���������� ���� "; cin >> s;
	Vector a(s);
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{

		cout << "����: \n\t1. ������� ������\n\t2. ����� ������� � �������� � ����� \n\t3. ����� ������� � ������� \n\t4. � ������� �������� �������� ����� ��������� � �������� \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;
		if (menu == 1)
		{
			for (int i = 0; i < a.givesize(); i++)
				cout << a.give(i) << " ";
			cout << endl;
		}

		if (menu == 2)
		{
			a.pushback(a.min());
			cout << "������� ��������" << endl;
		}

		if (menu == 3)
		{
			int el;
			cout << "����� �������: "; cin >> el;
			for (int i = 0; i < a.givesize(); i++)
			{
				if (a.give(i) == el)
					a.del(i);
			}
			cout << "������� ������" << endl;
		}

		if (menu == 4)
		{
			for (int i = 0; i < a.givesize(); i++)
			{
				a.bred(a.max(), a.min(), i);
			}
			cout << "��������� �������" << endl;
		}

		if (menu == 0)
		{
			a.end();
			break;
		}
	}
}


void Queue()
{
	int min = 32000; int max = -32000;
	list<int> l;
	int check = 1, menu = 1;
	cout << "����� �������� �������. 0 - ����� �����" << endl;
	while (check != 0)
	{
		cin >> check;
		if (check != 0)
			l.push_back(check);
		else break;
	}
	list<int>::iterator iter = l.begin();
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{
		cout << "����: \n\t1. ������� �������\n\t2. ����� ������� � �������� � ����� \n\t3. ����� ������� � ������� \n\t4. � ������� �������� �������� ����� ��������� � �������� \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;
		if (menu == 1)
		{
			for (int i : l)
				cout << i << " ";
			cout << endl;
		}

		if (menu == 2)
		{
			for (iter = l.begin(); iter != l.end(); iter++)
			{
				if (*iter < min)
					min = *iter;
			}
			l.push_back(min);
			cout << "������� ��������" << endl;
		}

		if (menu == 3)
		{
			int k = 0;
			cout << "����� �������: "; cin >> check;
			for (iter = l.begin(); iter != l.end(); iter++)
			{
				if (check == *iter)
				{
					l.erase(iter);
					break;
				}
					
			}
			cout << "������� ������" << endl;
		}

		if (menu == 4)
		{
			min = 32000; max = -32000;
			for (iter = l.begin(); iter != l.end(); iter++)
			{
				if (*iter < min)
					min = *iter;
				if (*iter > max)
					max = *iter;
			}
			
			list<int> l1;
			list<int>::iterator iter1 = l1.begin();
			for (iter = l.begin(); iter != l.end(); iter++)
			{
				l1.push_back(*iter+max+min);
			}
			l.clear();
			for (iter1 = l1.begin(); iter1 != l1.end(); iter1++)
			{
				l.push_back(*iter1);
			}
			cout << "��������� ��������� " << endl;
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int menu = 1;

	while (menu == 1 || menu == 2 || menu == 3 || menu == 4 || menu == 5)
	{

		cout << "����: \n\t1. ������ STL\n\t2. Money \n\t3. ������������������� ������ \n\t4. ������� \n\n\t0. �����";
		cout << endl << "������ ����� ����: "; cin >> menu;

		if (menu == 1)
			Vectorr();

		if (menu == 2)
			Moneyy();

		if (menu == 3)
			Vectorrr();

		if (menu == 4)
			Queue();

	}


}