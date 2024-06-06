#include<iostream>
using namespace std;

int main(){
    double valor;

    cin >> valor;

    int centavos = valor*100;

    int notas100 = centavos / 10000;
    centavos %= 10000;

    int notas50 = centavos / 5000;
    centavos %= 5000;

    int notas20 = centavos / 2000;
    centavos %= 2000;

    int notas10 = centavos / 1000;
    centavos %= 1000;

    int notas5 = centavos / 500;
    centavos %= 500;

    int notas2 = centavos / 200;
    centavos %= 200;

    int moeda1 = centavos / 100;
    centavos %= 100;

    int moeda50 = centavos / 50;
    centavos %= 50;

    int moeda25 = centavos / 25;
    centavos %= 25;

    int moeda10 = centavos / 10;
    centavos %= 10;

    int moeda05 = centavos / 5;
    centavos %= 5;

    int moeda01 = centavos;


    cout << "NOTAS:" <<endl;
    cout << notas100 << " nota(s) de R$ 100.00" <<endl;
    cout << notas50 << " nota(s) de R$ 50.00" <<endl;
    cout << notas20 << " nota(s) de R$ 20.00" <<endl;
    cout << notas10 << " nota(s) de R$ 10.00" <<endl;
    cout << notas5 << " nota(s) de R$ 5.00" <<endl;
    cout << notas2 << " nota(s) de R$ 2.00" <<endl;
    cout << "MOEDAS:" <<endl;
    cout << moeda1 << " moeda(s) de R$ 1.00" <<endl;
    cout << moeda50 << " moeda(s) de R$ 0.50" <<endl;
    cout << moeda25 << " moeda(s) de R$ 0.25" <<endl;
    cout << moeda10 << " moeda(s) de R$ 0.10" <<endl;
    cout << moeda05 << " moeda(s) de R$ 0.05" <<endl;
    cout << moeda01 << " moeda(s) de R$ 0.01" <<endl;


    return 0;
}
