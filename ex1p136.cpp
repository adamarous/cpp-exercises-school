#include <iostream>

double suma(double n1, double n2, double n3) {
    return n1 + n2 + n3;
}

int main() {
    double num1, num2, num3;

    for (int i=0; i<3; i++) {
        std::cout << "Introduzca el valor del ";
        switch (i) {
            case 0:
                std::cout << "primer";
                break;
            case 1:
                std::cout << "segundo";
                break;
            case 2:
                std::cout << "tercer";
                break;
        }
        std::cout << " numero: ";
        switch (i) {
            case 0:
                std::cin >> num1;
                break;
            case 1:
                std::cin >> num2;
                break;
            case 2:
                std::cin >> num3;
                break;
        }
    }

    std::cout << std::endl;
    std::cout << "La suma de los tres valores introducidos es: ";
    std::cout << suma(num1, num2, num3) << "." << std::endl;

    return 0;
}