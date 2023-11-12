#include <iostream>

using namespace std;

int main() {
    float n[4], counter = 0.0, average;

    // Asking for input
    cout << "Introduzca 4 numeros: ";
    for (int i=0; i<4; i++) {
        cin >> n[i];
    }

    // Computing
    for (int i=0; i<4; i++) {
        counter += n[i];
    }
    average = counter/4;

    // Outputting results
    cout << "Los datos introducidos, ";
    for (int i=0; i<4; i++) {
        if (i == 2) {
            cout << n[i] << " y ";
        } else {
            if (i == 3) {
                cout << n[i] << " ";
            } else {
                cout << n[i] << ", ";
            }
        }
    }
    cout << "tienen media aritmetica " << average << ".";

    return 0;
}