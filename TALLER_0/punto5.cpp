#include <iostream>
using namespace std;

int main() {
    double velocidad_A, velocidad_B, distancia_AB;

    cout << "Ingrese la velocidad del carro A: ";
    cin >> velocidad_A;

    cout << "Ingrese la velocidad del carro B: ";
    cin >> velocidad_B;

    cout << "Ingrese la distancia entre A y B (ciudades): ";
    cin >> distancia_AB;

    double tiempo_A = distancia_AB / velocidad_A;
    double tiempo_B = distancia_AB / velocidad_B;

    double tiempo_en_encontrarse = max(tiempo_A, tiempo_B);

    cout << "Los carros se encuentran en " << tiempo_en_encontrarse << " horas" << endl;

    return 0;
}
