#include <iostream>

void escribirTabla(int n) {
    for (int i=0; i<10; i++) {
        std::cout << n << " x " << (i+1) << " = ";
        std::cout << n * (i+1) << std::endl;
    }
}

int main() {
    int num;

    std::cout << "Introduzca un numero entero: ";
    std:: cin >> num;

    std::cout << std::endl;
    escribirTabla(num);

    return 0;
}