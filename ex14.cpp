#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float km, l, KmL;
    
    cin >> km >> l;
    KmL = km/l;
    cout << fixed << setprecision(3) << KmL << " km/l" <<endl;

    return 0;
}