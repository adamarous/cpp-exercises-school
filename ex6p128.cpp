#include <iostream>

using namespace std;

int main() {
    int vectors[2][3], scalarProduct = 0;

    // Asking for input
    for (int i=0; i<2; i++) {
        for (int d=0; d<3; d++) {
            cout << "Introduzca la componente ";
            switch (d) {
                case 0:
                    cout << "x";
                    break;
                case 1:
                    cout << "y";
                    break;
                case 2:
                    cout << "z";
                    break;
            }
            cout << " del "; 
            switch (i) {
                case 0:
                    cout << "primer";
                    break;
                case 1:
                    cout << "segundo";
                    break;
            }
            cout << " vector: ";
            cin >> vectors[i][d];
        }
    }

    // Dot product logic
    for (int i=0; i<3; i++) {
        scalarProduct += vectors[0][i] * vectors[1][i];
    }
    cout << "El producto escalar de los vectores introducidos es " << scalarProduct << ".";

    return 0;
}