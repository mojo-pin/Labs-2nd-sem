#include <iostream>
using namespace std;

class Func
{
    public:
        double x, first, second;

        double function(double first, double second, double x)
        {
            return first * x + second;
        }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Func Urav;
    cout << "Ïîèñê çíà÷åíèÿ ôóíêöèè y=Ax+B, ïðè ðàçëè÷íûõ çíà÷åíèÿõ A, B, x" << endl;
    cout << "Ââåäè x" << endl;
    cin >> Urav.x;
    cout << "Ââåäè A" << endl;
    cin >> Urav.first;
    cout << "Ââåäè B" << endl;
    cin >> Urav.second;

    cout << "Îòâåò: " << Urav.function(Urav.first, Urav.second, Urav.x);
}
