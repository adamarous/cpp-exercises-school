#include <iostream>

int main() {
    int matrix[2][2], matrixTransposed[2][2];

    // Asking for input
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            std::cout << "Introduzca el valor de ";
            switch (c) {
                case 0:
                    std::cout << "la primera columna";
                    break;
                case 1:
                    std::cout << "la segunda columna";
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
            }
            std::cin >> matrix[r][c];
        }
    }

    // Computing transposed of matrix
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            matrixTransposed[r][c] = matrix[c][r];
        }
    }

    // Outputting results
    std::cout << "La matriz introducida es:" << std::endl;
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            std::cout << matrix[r][c] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Y la matriz traspuesta de la matriz introducida es:" << std::endl;
    for (int r=0; r<2; r++) {
        for (int c=0; c<2; c++) {
            std::cout << matrixTransposed[r][c] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}