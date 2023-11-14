#include <iostream>

int main() {
    int vectors[2][2];

    // Asking for input
    for (int i=0; i<2; i++) {
        for (int d=0; d<2; d++) {
            std::cout << "Introduzca la componente ";
            switch (d) {
                case 0:
                    std::cout << "x";
                    break;
                case 1:
                    std::cout << "y";
                    break;
            }
            std::cout << " del "; 
            switch (i) {
                case 0:
                    std::cout << "primer";
                    break;
                case 1:
                    std::cout << "segundo";
                    break;
            }
            std::cout << " vector: ";
            std::cin >> vectors[i][d];
        }
    }

    // Computing for proportionality of the components
    if (vectors[1][0] / vectors[0][0] == vectors[1][1] / vectors[0][1]) {
        std::cout << "Los vectores introducidos son linearmente dependientes.";
    } else {
        std::cout << "Los vectores introducidos no son linearmente dependientes.";
    }

    return 0;
}