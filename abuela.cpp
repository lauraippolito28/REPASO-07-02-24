#include <iostream>

using namespace std; // Agrega esta línea para usar cout y cin sin std::

int main() { 
    // Variables 
    double grados_fahrenheit; 
    double grados_centigrados; 
    
    // Entradas 
    cout << "Ingrese los grados Fahrenheit que deseas convertir a grados centígrados: ";
    cin >> grados_fahrenheit; 
    
    // Proceso 
    grados_centigrados = (grados_fahrenheit - 32) / 1.8 ;
    
    // Salida 
    cout <<"La temperatura que debes colocar en tu horno es: " << grados_centigrados << " grados centígrados." << endl; 
    
    return 0; // Corregido "returno" a "return 0"
}
