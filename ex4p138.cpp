#include <iostream>

int main() {
    int positionNum = 1, n[10];

    // Asking for input
    for (int i=0; i<10; i++) {
        std::cout << "Introduzca un numero entero: ";
        std::cin >> n[i];
    }

    // Computing numbers for their position
    while (positionNum != 0) {
        std::cout << "Dime un numero: ";
        std::cin >> positionNum;
        if (positionNum != 0) {
            for (int i=0; i<10; i++) {
                if (positionNum == n[i]) {
                    std::cout << "Esta en la posicion " << i+1 << "." << std::endl;
                }
            }
        }
    }

    std::cout << "Hasta luego!";

    return 0;
}