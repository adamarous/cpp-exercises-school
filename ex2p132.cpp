#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string filename, line, option;
    int numLine = 1, repeat = 0;

    std::cout << "Introduzca un nombre de fichero: ";
    getline(std::cin, filename);
    std::cout << std::endl;

    std::ifstream file(filename.c_str());

    while (!file.eof()) {
        getline(file, line);
        if (!file.eof()) {
            if (numLine != 25 && repeat != 1) {
                std::cout << line << std::endl;
                numLine++;
            } else {
                std::cout << std::endl << "Desea continuar con el programa... S/N" << std::endl;
                getline(std::cin, option);
                if (option == "S") {
                    std::cout << std::endl;
                    repeat = 0;
                    numLine = 1;
                    continue;
                } else {
                    if (option == "N") {
                        break;
                    } else {
                        repeat = 1;
                    }
                }
            }
        }
    }
    file.close();

    return 0;
}