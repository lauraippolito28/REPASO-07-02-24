#include <iostream>
#include <vector>
using namespace std;

int main(){
double calculo_del_descuento(double deuda, double porcentajes[], double limites[], int size) {
    double descuento = 0.0;
    
    for (int i = 0; i < size; ++i) {
        if (deuda > limites[i]) {
            descuento = deuda * porcentajes[i];
        }
    } 
    return descuento;
}
    double deuda;
    cout << "Ingrese la deuda: ";
    cin >> deuda;
    
    double descuento = 0.0;
    
    double limites[4] = {800000, 300000, 150000, 60000};
    double porcentajes[4] = {0.50, 0.40, 0.30, 0.20};
    
    descuento = calculo_del_descuento(deuda, porcentajes, limites, 4);
    double pago_total = deuda - descuento;
    
    cout << "el descuento es de " << descuento << " pesos" << endl;
    cout << "el pago total es de " << pago_total << " pesos" << endl;
    
    return 0;
}
