#include <iostream>
#include <fstream>
#include <string>

int main() {
    double num[1000], n, average = 0.0;
    int indexer = 0, quit = 0, option;
    std::string filename, line;

    // Asking for filename and adding current numbers if file exists
    std::cout << std::endl << "Introduzca un nombre para el archivo de destino o el nombre del archivo existente: ";
    std::getline(std::cin, filename);
    std::ifstream file(filename);
    if (!file.fail()) {
        while (!file.eof()) {
            std::getline(file, line);
            if (!file.eof()) {
                num[indexer] = std::stod(line);
                indexer++;
            }
        }
        file.close();
    }
    std::ofstream newFile(filename);
    std::cout << std::endl;

    // Menu
    while (quit != 1) {
        std::cout << "1. Anadir un dato" << std::endl;
        std::cout << "2. Ver todos los datos" << std::endl;
        std::cout << "3. Mostrar media aritmetica" << std::endl;
        std::cout << "0. Terminar" << std::endl;

        std::cout << std::endl;
        std::cout << ">> ";
        std::cin >> option;
        std::cout << std::endl;
        switch (option) {
            case 1:
                if (indexer < 1000) {
                    std::cout << "Introduzca un dato real de doble precision: ";
                    std::cin >> n;
                    std::cout << std::endl;
                    num[indexer] = n;
                    indexer++;
                } else {
                    std::cout << "No hay espacio para mas valores." << std::endl << std::endl;
                }
                break;
            case 2:
                if (indexer != 0) {
                    for (int i=0; i<indexer; i++) {
                        if (i == indexer-1) {
                            std::cout << num[i] << "." << std::endl;
                        } else {
                            std::cout << num[i] << ", ";
                        }
                    }
                    std::cout << std::endl;
                } else {
                    std::cout << "No se han introducido datos." << std::endl << std::endl;
                }
                break;
            case 3:
                if (indexer > 1) {
                    for (int i=0; i<indexer; i++) {
                        average += num[i];
                    }
                    average /= indexer;
                    std::cout << "La media artimetica es " << average << "." << std::endl;
                } else {
                    if (indexer == 0) {
                        std::cout << "No se han introducido datos." << std::endl;
                    } else {
                        std::cout << "Introduzca mas de un dato." << std::endl;
                    }
                }
                std::cout << std::endl;
                break;
            case 0:
				for (int i=0; i<indexer; i++) {
                    newFile << std::to_string(num[i]) << std::endl;
            	}
            	newFile.close();
                quit = 1;
                break;
            default:
                std::cout << "No se ha introducido una de las opciones ofrecidas." << std::endl << std::endl;
        }
    }

    return 0;
}
