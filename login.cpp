
#include <iostream>
#include <string>

using namespace std;

int main() {
    //Variables 
    string usuario = "laura.ippolito";
    string contrasena = "Laura.123";
    string input_usuario, input_contrasena;
    
    // Entradas
    cout << "Ingresa tu usuario: ";
    cin >> input_usuario;
    cout << "Ingresa tu contraseña: ";
    cin >> input_contrasena;
    
    //Proceso y salida 
    if (input_usuario == usuario && input_contrasena == contrasena) {
        cout << "Iniciaste sesion" ;
    } else {
        cout << "Usuario o contraseña incorrectos. Reintentalo";
    }

    return 0;
}
