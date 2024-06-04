#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int p1, np1, p2, np2;
    double vp1, vp2, total;

    cin >> p1 >> np1 >> vp1;
    cin >> p2 >> np2 >> vp2;

    total = np1*vp1 + np2*vp2;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;

    return 0;
}