#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int main() {
    // Entradas y variables
    srand(time(0)); 

    // Proceso
    cout << "Pon tu opcion: Piedra, Papel o  Tijera: \n ";

    // Opcion del jugador
    int jugador;
    cin >> jugador;

    // Opcion de la maquina
    int maquina = rand() % 3 + 1;

    // Salida
    if (jugador == maquina)
        cout << "Empate";
    else if ((jugador == 1 && maquina == 3) || (jugador == 2 && maquina == 1) || (jugador == 3 && maquina == 2))
        cout << "Ganaste";
    else
        cout << "Perdiste";

    return 0;
}
