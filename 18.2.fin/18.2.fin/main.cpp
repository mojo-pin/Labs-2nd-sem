#include <iostream>
using namespace std;

class Computer
{

public:
    string proc;
    int OP, JD;

    Computer(string proctype, int OPsize, int JDsize)
    {
        proc = proctype;
        OP = OPsize;
        JD = JDsize;
    };

    void Print()
    {
        cout << "\n" << "Òèï ïðîöåññîðà: " << proc << "\nÎáú¸ì ÎÏ: " << OP << "\nÎáú¸ì ÆÄ: " << JD;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    string proc;
    int OP, JD;
    cout << "Ââåäè íàçâàíèå ïðîöåññîðà, îáúåì ÎÏ è ÆÄ" << endl;
    cin >> proc >> OP >> JD;
    Computer a(proc, OP, JD);
    a.Print();
}
