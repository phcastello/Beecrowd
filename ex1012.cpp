#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const double pi=3.14159;
    double a, b, c;

    cin >> a >> b >> c;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << (a*c)/2 <<endl;
    cout << "CIRCULO: " << c*c*pi <<endl;
    cout << "TRAPEZIO: " << ((a+b)*c)/2 <<endl;
    cout << "QUADRADO: " << b*b <<endl;
    cout << "RETANGULO: " << a*b <<endl;

    return 0;
}