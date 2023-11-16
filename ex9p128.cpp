#include <iostream>

int main() {
    int matrix[3][3], matrixDet, matrixMinor[2][2];

    // Asking for input
    for (int r=0; r<3; r++) {
        for (int c=0; c<3; c++) {
            std::cout << "Introduzca el valor de ";
            switch (c) {
                case 0:
                    std::cout << "la primera columna";
                    break;
                case 1:
                    std::cout << "la segunda columna";
                    break;
                case 3:
                    std::cout << "la tercera columna";
                    break;
            }
            std::cout << " de ";
            switch (r) {
                case 0:
                    std::cout << "la primera fila: ";
                    break;
                case 1:
                    std::cout << "la segunda fila: ";
                    break;
                case 3:
                    std::cout << "la tercera fila: ";
                    break;
            }
            std::cin >> matrix[r][c];
        }
    }

    // Computing the determinant
    for (int r=0; r<3; r++) {
        matrixMinor[r][0] = matrix[]
        // for (int c=0; c<3; c++) {
        //     matrixMinor[r][c] = matrix[r+1][c+1];
        // }
        // matrixDet = matrix[r][0] * matrix[r+1][1];
    }

    return 0;
}