#include<iostream>
using namespace std;

int abs(double x){
    if (x<0)
        return x*(-1);
    else
        return x;
}   

int Max(double a, double b){

    double maior = (a+b+abs(a-b))/2;

    return maior;
}

int main(){
    int a,b,c;

    cin >> a >> b >> c;
    cout << Max(Max(a,b),c) << " eh o maior" <<endl;

    return 0;
}