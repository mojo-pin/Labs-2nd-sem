#include <iostream>
using namespace std;

int board[8][8];
int rcount = 0;

void doska() //Èíèöèàëèçàöèÿ äâóìåðíîãî ìàññèâà ââèäå øàõìàòíîé äîñêè
{
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}
// Ïðîâåðêà ñîâïàäåíèå ñ õîäàìè äðóãèõ ôåðçåé
bool check(int a, int b)
{
    for (int i = 0; i < a; i++) {
        if (board[i][b]) return false;//Ïðîâåðêà ñîâïàäåíèé ïî ãîðèçîíòàëè è âåðòèêàëè
    }
    for (int i = 1; i <= a && b - i >= 0; i++) {
        if (board[a - i][b - i]) return false;//Ïðîâåðêà ãëàâíîé äèàãîíàëè
    }
    for (int i = 1; i <= a && b + i < 8; i++) {
        if (board[a - i][b + i]) return false;//Ïðîâåðêà ïîáî÷íîé äèàãîíàëè
    }
    return true;
}

void variants(int a) {
    if (a == 8) {
        doska();
        cout << "Âàðèàíò ðåøåíèÿ çàäà÷è: " << ++rcount << endl;
    }
    for (int i = 0; i < 8; i++) {
        if (check(a, i)) {
            board[a][i] = 1;
            variants(a + 1);
            board[a][i] = 0;
        }
    }
}
int main()
{
    setlocale(LC_ALL, "ru");
    variants(0);
    system("pause");
    return 0;
}
