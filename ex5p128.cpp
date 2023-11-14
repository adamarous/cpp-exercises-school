#include <iostream>

using namespace std;

int main() {
    int vectors[2][3], vectorsSubs[1][3] = {0, 0, 0};

    // Asking for input
    for (int i=0; i<2; i++) {
        for (int d=0; d<3; d++) {
            cout << "Introduzca el valor ";
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

    // Computing
    for (int d=0; d<3; d++)
        vectorsSubs[0][d] = vectors[0][d] - vectors[1][d];
    }

    // Outputting results
    cout << "La diferencia entre los vectores introducidos es " << vectorsSubs;

    return 0;
}