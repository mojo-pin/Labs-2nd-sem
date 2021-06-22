#include "PAIR.h"
#include <iostream>
using namespace std;

void PAIR::raw()
{
	if (first == second) cout << "Числа равны" << endl;
	else cout << "Числа не равны" << endl;
}

void PAIR::umn()
{
	cout << "Произведение чисел = " << first * second << endl;
}

void PAIR::in()
{
	cout << "Введи 2 числа: "; cin >> first; cin >> second;
}

void PAIR::in1()
{
	cout << "Введи еще 2 числа: "; cin >> first1; cin >> second1;
}

void PAIR::raz()
{
	cout << "Разность по формуле: " << first - second << "," << first1 - second1 << endl;
}

void PAIR::raz1()
{
	cout << "Разность по формуле: " << ch - zn << "," << ch1 - zn1 << endl;
}

void PAIR::in2()
{
	cout << "Введи 2 дробных числа: "; cin >> ch; cin >> zn;
}

void PAIR::in3()
{
	cout << "Введи еще 2 дробных числа: "; cin >> ch1; cin >> zn1;
}

void PAIR::sum()
{
	cout << "Сумма 2ух дробных чисел: " << ch + zn << endl;
}

void PAIR::umn1()
{
	cout << "Произведение 2ух дробных чисел: " << ch * zn << endl;
}
