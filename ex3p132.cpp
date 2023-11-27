#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("numeros.txt");
    std::string line;
    int sum = 0;

    while (!file.eof()) {
        getline(file, line);
        if (!file.eof()) {
            sum += std::stoi(line);
        }
    }
    file.close();

    std::cout << "La suma de los numeros en numeros.txt es " << sum << ".";

    return 0;
}