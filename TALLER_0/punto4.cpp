#include <iostream>
using namespace std;

int main() {
    int sueldo_hora = 40000;
    int sueldo_extra = 5000;
    int horas_sin_extra = 35;

    int horas_totales;
    cout << "Ingresa las horas de trabajo en la semana ";
    cin >> horas_totales;

    int sueldo_semana;

    if (horas_totales <= horas_sin_extra) {
        sueldo_semana = sueldo_hora * horas_totales;
    } else {
        sueldo_semana = sueldo_hora * horas_sin_extra + (horas_totales - horas_sin_extra) * sueldo_extra;
    }

    cout << "El sueldo semanal es " << sueldo_semana << endl;

    return 0;
}
