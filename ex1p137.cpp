#include <iostream>

void intercambiar(int &a, int &b) {
    a = b;
}

int main() {
    int num1 = 0, num1Source, num2 = 0, num2Source;

    for (int i=0; i<2; i++) {
        std::cout << "Introduzca un valor entero para el ";
        switch (i) {
            case 0:
                std::cout << "primer";
                break;
            case 1:
                std::cout << "segundo";
                break;
        }
        std::cout << " numero: ";
        switch (i) {
            case 0:
                std::cin >> num1Source;
                break;
            case 1:
                std::cin >> num2Source;
                break;
        }
    }

    intercambiar(num1, num2Source);
    intercambiar(num2, num1Source);
    std::cout << "Tras intercambiar los valores, se convierten en " << num1 << " y " << num2 << "." << std::endl;

    return 0;
}