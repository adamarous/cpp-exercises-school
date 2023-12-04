#include <iostream>
#include <string>

void EscribirNVeces(int n, std::string t) {
    for (int i=0; i<n; i++) {
        std::cout << t;
    }
}

int main() {
    int times;
    std::string text;

    std::cout << "Introduzca el texto que quiere repetir: ";
    std::getline(std::cin, text);
    std::cout << std::endl << "Introduzca ahora el numero de veces que quiere repetir el texto anterior: ";
    std::cin >> times;
    std::cout << std::endl;

    EscribirNVeces(times, text);
    std::cout << std::endl;

    return 0;
}