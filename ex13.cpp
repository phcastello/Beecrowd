#include<iostream>
using namespace std;

int abs(double x){
    if (x<0)
        return x*(-1);
    else
        return x;
}   

int Cu(double a, double b){

    double maior = (a+b+abs(a-b))/2;

    return maior;
}

int main(){
    int a,b,c;

    cin >> a >> b >> c;
    cout << Cu(Cu(a,b),c) << " eh o maior" <<endl;

    return 0;
}