#include <iostream>
#include <cstdlib>
#include <ctime>  

using namespace std;

int main() {
    // Entrada y variables
    srand(time(0));

    // Lanzamiento 
    int resultado_moneda = rand() % 2;

    // Opcion del jugador 
    int opcion_jugador;
    cout << "Elige cara o sello:\n ";
    cin >> opcion_jugador;

    // Mostrar el resultado del lanzamiento
    cout << "Resultado del lanzamiento: ";
    if (resultado_moneda == opcion_jugador)
        cout << "Ganaste";
    else
        cout << "Perdiste";

    return 0;
}
