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
                        case 1:
                            matrixMinor[r_][c_] = matrix[pow(r_, r+1)+pow(r*r_, r)][c_+pow(r, r)];
                            break;
                    case 2:
                        matrixMinor[r_][c_] = matrix[r_][c_+1];
                        break;
                }
            }
        }
    }

    return 0;
}