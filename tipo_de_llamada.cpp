
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variables
    string tipo_Llamada;
    double costo_Por_Minuto = 0.0;

    // Solicitar tipo de llamada
    cout << "Ingrese el tipo de llamada: ";
    cin >> tipo_Llamada;

    // Costo por minuto
    if (tipo_Llamada == "fija")
        costo_Por_Minuto = 200.0;
    else if (tipo_Llamada == "celular")
        costo_Por_Minuto = 300.0;
    else if (tipo_Llamada == "internacional")
        costo_Por_Minuto = 500.0;
    else {
        cout << "Tipo de llamada no válido." << endl;
        return 1;  
    }

    // Mostrar el costo 
    cout << "Costo por minuto: $" << costo_Por_Minuto << endl;

    return 0;
}