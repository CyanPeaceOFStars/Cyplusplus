#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float ht, qh;
    cout << "Digite o quanto voce ganha por hora: ";
    cin >> ht;
    cout << "Digite quantas horas voce trabalha por dia: ";
    cin >> qh;

    float sb = qh * ht;
    float pd;

    if (sb <= 900) {
        pd = 0;
    } else if (sb <= 1500) {
        pd = 5;
    } else if (sb <= 2500) {
        pd = 10;
    } else {
        pd = 20;
    }

    float dc = sb * (pd / 100);
    float IR = (5 / 100.0) * sb;
    float INSS = (10 / 100.0) * sb;
    float FGT = (11 / 100.0) * sb;
    float totalD = IR + INSS;

    float sl = sb - totalD;

    cout << fixed << setprecision(2);
    cout << "Salário Bruto      : " << sb << endl;
    cout << "(-) IR (5%)        : " << IR << endl;
    cout << "(-) INSS (10%)     : " << INSS << endl;
    cout << "FGTS (11%)         : " << FGT << endl;
    cout << "Total de descontos : " << totalD << endl;
    cout << "Salário Liquido    : " << sl << endl;

    return 0;
}

