#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream numbers("numeros.txt");
    std::string line;
    int num = 0;

    do {
        std::cout << "Introduzca un numero: ";
        std::cin >> num;
        if (num != 0) {
            numbers << num << " ";
        }
    } while (num != 0);

    numbers.close();

    return 0;
}