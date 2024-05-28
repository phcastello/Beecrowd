#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const double pi = 3.14159;
    double r,A;

    cin >> r;
    A = r*r*pi;

    cout << fixed << setprecision(4) << "A=" << A << endl;

    return 0;
}