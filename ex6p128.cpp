#include <iostream>

int main() {
    int vectors[2][3];

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

    // Dot product logic (gotta multiply each component with the one for the other vector and sum the result of each)


    return 0;
}