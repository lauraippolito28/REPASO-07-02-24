#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int suma = 0;

    while (n <= 100) {
        suma += n; 
        n++;
    }

    cout << "La suma de los numeroas (1-100): " << suma << endl;

    return 0;
}
