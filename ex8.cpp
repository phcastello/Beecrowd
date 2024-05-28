#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int fun, horas_t;
    float sph, sal; //salario por hora

    cin >> fun >> horas_t >> sph;

    sal = horas_t*sph;

    cout << "NUMBER = " << fun <<endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << sal <<endl;

    return 0;
}