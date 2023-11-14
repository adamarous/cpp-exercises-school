#include <iostream>

int main() {
    int matrix[2][2], matrixTransposed[2][2];

    // Asking for input
    std::cout << "Introduzca el valor del elemento ";
    for (int r=0; r<2; r++) {
        if (r == 0) {
            for (int c=0; c<2; c++) {
                switch (c) {
                    case 0:
                        std::cout << "a1";
                        break;
                    case 1:
                        std::cout << "a2";
                        break;
                }
            }
        }
        if (r == 1) {
            for (int c=0; c<2; c++) {
                switch (c) {
                    case 0:
                        std::cout << "a3";
                        break;
                    case 1:
                        std::cout << "a4";
                        break;
                }
            }
        }
    }
    std::cout << " de la matriz "

    // Computing transposed of matrix
    for (int i=0; i<2; i++) {
        
    }

    return 0;
}