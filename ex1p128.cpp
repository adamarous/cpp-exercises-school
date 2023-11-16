#include <iostream>

using namespace std;

int main() {
    float n[4], counter = 0.0, average;

    // Asking for input
    cout << "Introduzca 4 numeros: " << endl;
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
        switch (i) {
            case 2:
                cout << n[i] << " y ";
                break;
            case 3:
                cout << n[i];
                break;
            default:
                cout << n[i] << ", ";
                break;
        }
    }
    cout << ", tienen media aritmetica " << average << ".";

    return 0;
}