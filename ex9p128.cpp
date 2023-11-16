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
                case 2:
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
                case 2:
                    std::cout << "la tercera fila: ";
                    break;
            }
            std::cin >> matrix[r][c];
        }
    }

    // Computing the determinant
    for (int r=0; r<3; r++) {
        for (int r_=0; r_<2; r_++) {
            for (int c_=0; c_<2; c_++) {
                switch (r) {
                    // Cases 0 and 1 can be made to follow a general form
                    case 0:
                        matrixMinor[r_][c_] = matrix[r_+1][c_+1];
                        break;
                    case 1:
                        matrixMinor[r_][c_] = matrix[(r+r_)*r_][c_+r];
                        break;
                    case 2:
                        matrixMinor[r_][c_] = matrix[(r+r_)*r_][c_+r]; /* [f(2, 0, 0) = 0][...] binary equivalent 000 = 0
                                                                          [f(2, 0, 1) = 0][...] binary equivalent 001 = 1
                                                                          f[(2, 1, 0) = 1][...] binary equivalent 010 = 2
                                                                          f[(2, 1, 1) = 1][...] binary equivalent 011 = 3
                                                                        */ 
                        break;
                }
            }
        }
    }

    return 0;
}