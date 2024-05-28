#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main(){
    string nome;
    double sal, vendas, bonus;

    cin >> nome;
    cin >> sal >> vendas;

    bonus = vendas*0.15;

    cout << fixed << setprecision(2) << "TOTAL = R$ " << sal+bonus << endl;

    return 0;
}