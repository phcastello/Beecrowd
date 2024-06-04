#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float horas, vm, D, kmL=12, L;

    cin >> horas >> vm;

    D = horas*vm;
    L = D/kmL;

    cout << fixed << setprecision(3) << L <<endl;

    return 0;
}