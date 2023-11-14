#include <iostream>

using namespace std;

int main() {
    int vectors[2][2], vectorsSubs[1][2] = {0, 0};

    // Asking for input
    for (int i=0; i<2; i++) {
        for (int d=0; d<2; d++) {
            cout << "Introduzca la componente ";
            switch (d) {
                case 0:
                    cout << "x";
                    break;
                case 1:
                    cout << "y";
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

    // Computing
    for (int i=0; i<2; i++) {
        vectorsSubs[0][i] = vectors[0][i] - vectors[1][i];
    }

    // Outputting results
    cout << "El vector diferencia de los vectores introducidos es (";
    for (int i=0; i<2; i++) {
        if (i == 0) {
            cout << vectorsSubs[0][i] << ", ";
        } else {
            cout << vectorsSubs[0][i];
        }
    }
    cout << ").";

    return 0;
}