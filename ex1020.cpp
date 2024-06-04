#include<iostream>
using namespace std;

int main(){
    int idade_dias;
    int dias, meses, anos;

    cin >> idade_dias;

    anos = idade_dias / 365;
    meses = (idade_dias % 365) /30;
    dias = (idade_dias % 365) % 30;

    cout << anos << " ano(s)" <<endl;
    cout << meses << " mes(es)" <<endl;
    cout << dias << " dia(s)" <<endl;


    return 0;
}
