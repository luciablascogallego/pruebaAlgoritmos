#include <iostream>
using namespace std;

int main() {
    int NUMERO;

    // Leer el número
    cout << "LEER NUMERO: ";
    cin >> NUMERO;

    // Verificar si el número es par o impar
    if (NUMERO % 2 == 0) {
        cout << "Par " << "\n";
        for (int i = NUMERO; i >= 0; i -= 2) {
            cout << i << " ";
        }
    } else {
        cout << "Imar " << "\n";
        for (int i = NUMERO; i >= 1; i -= 2) {
            cout << i << " ";
        }
    }

    return 0;
}
