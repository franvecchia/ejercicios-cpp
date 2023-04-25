#include <iostream>
using namespace std;

string tendencia(int nroA, int nroB) {
    int diferencia = nroB - nroA;

    if (diferencia < 0)
    {
        return "Decreciente";
    }

    if (diferencia < nroA * 0.02)
    {
        return "Estable";
    }

    if (diferencia < nroA * 0.05)
    {
        return "Leve ascenso";
    }

    return "En ascenso";
}

int main() {
    cout << tendencia(20, 10);
    system("pause");
    return 0;
}