#include <iostream>
#include <vector>
using namespace std;

int main(){
double calculo_de_descuento(double deuda) {
    double descuento = 0.0;
    
    double limites[4] = {60000, 150000, 300000, 800000};
    double porcentajes[4] = {0.20, 0.30, 0.40, 0.50};
    
    for (int i = 0; i < 4; ++i) {
        if (deuda > limites[i]) {
            descuento = deuda * porcentajes[i];
        }
    }
    
    return descuento;
  }
    double deuda;
    cout << "Ingrese la deuda en pesos: ";
    cin >> deuda;
    
    double descuento = calculo_del_descuento(deuda);
    double pago_total = deuda - descuento;
    
    cout << "el descuento que se hara: " << descuento << " pesos" << endl;
    cout << "pago con descuento: " << pago_total << " pesos" << endl;
    
    return 0;
}
