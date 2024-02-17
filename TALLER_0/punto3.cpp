#include <iostream>
using namespace std;

int main() {
    double sueldo;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;

    if (sueldo < 1000000) {
        double aumento = sueldo * 0.15;
        double sueldo_con_aumento = sueldo + aumento;
        cout << "El nuevo sueldo es  " << sueldo_con_aumento << endl;
    }

    return 0;
}
