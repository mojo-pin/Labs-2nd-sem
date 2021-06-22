#include <iostream>
#include "MNOG.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int s, in, menu = 4;
	cout << "Введи количество элементов множества: "; cin >> s;
	Vector a(s);
	while (menu == 1 || menu == 2 || menu == 3 || menu == 4)
	{
		
		cout << endl << endl << "Меню: \n\t1. Получить элемент по индексу \n\t2. Получить размер множества \n\t3. Получить пересечения множества \n\t4. Получить предыдущий элемент \n\t0. Выход";
		cout << endl << "Выбери пункт меню: "; cin >> menu;
		if (menu == 1)
		{
			cout << "Введи индекс элемента, который хочешь получить: "; cin >> in;
			cout << "Искомый элемент = " << a.give(in);
		}

		if (menu == 2)
			cout << "Размер = " << a.givesize();

		if (menu == 3)
			a.cross();

		if (menu == 4)
		{
			cout << "Введи индекс элемента: "; cin >> in;
			a.pred(in);
		}

		if (menu == 0)
		{
			a.end();
			break;
		}
	}
}