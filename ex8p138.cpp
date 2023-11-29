#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream file("triangulo.txt");
    std::string line;
    int size;

    std::cout << "Introduzca un tamano para el triangulo: ";
    std::cin >> size;

    while (size != 0) {
        for (int d=0; d<size; d++) {
            file << "#";
        }
        file << std::endl;
        size--;
    }
    // for (int i=0; i<size; i++) {
    //     for (int d=0; d<size; d++) {
    //         file << "#";
    //     }
    //     file << std::endl;
    //     size--;
    // }
    file.close();

    return 0;
}