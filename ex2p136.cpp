#include <iostream>

int esPrimo(int n) {
    static int i = 2;

    if (n == 0 || n == 1) {
        return 0;
    }
    if (n == i) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    i++;
    return esPrimo(n);
}

int main() {
    int num;

    std::cout << "Introduzca un numero entero: ";
    std::cin >> num;

    esPrimo(num) ? std::cout << "1" : std::cout << "0";
    std::cout << std::endl;

    return 0;
}