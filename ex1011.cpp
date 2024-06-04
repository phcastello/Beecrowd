#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    const double pi=3.14159;
    double r, V;

    cin >> r;

    V = (4.0/3.0)*pi*pow(r,3);

    cout << fixed << setprecision(3) << "VOLUME = " << V <<endl;

    return 0;
}