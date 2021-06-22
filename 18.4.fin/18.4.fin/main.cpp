
#include <iostream>
#include "Pair.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int f, s;
    
    cout << "Ââåäè ïåðâîå ÷èñëî: "; cin >> f;
    cout << "Ââåäè âòîðîå ÷èñëî: "; cin >> s;

    PAIR a(f,s);
    a.RAW();
    a.UM();

    cout << endl << "Ââåäè ïåðâîå ÷èñëî: "; cin >> f;
    cout << "Ââåäè âòîðîå ÷èñëî: "; cin >> s;

    PAIR b(f, s);
    b.RAW();
    b.UM();

    a.VI(a.first, a.second, b.first, b.second);
    a.sum(a.first, a.second, b.first, b.second);
    a.pr(a.first, a.second, b.first, b.second);
}
