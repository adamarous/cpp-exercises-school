#include <iostream>

void saludarVariasVeces(int times) {
    for (int i=0; i<times; i++) {
        if (i == times-1) {
            std::cout << "Hola";
        } else {
            std::cout << "Hola ";
        }
    }
}

int main() {
    int option = 0;

    std::cout << "Veces que se desea decir \"Hola\": ";
    std::cin >> option;
    
    saludarVariasVeces(option);
    
    return 0;
}