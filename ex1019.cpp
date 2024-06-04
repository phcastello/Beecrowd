#include<iostream>
using namespace std;

int main(){
    int tempo_segundos;
    int horas, minutos, segundos;

    cin >> tempo_segundos;
    horas = tempo_segundos/3600;
    minutos = (tempo_segundos % 3600) / 60;
    segundos = tempo_segundos % 60;

    cout << horas << ":" << minutos << ":" << segundos <<endl;

    return 0;
}