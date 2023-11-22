#include <iostream>

int main() {
    double num[1000], n, average = 0.0;
    int indexer = 0, exit = 0, option, number;

    // Populating the array with 0 to avoid memory errors
    for (int i=0; i<1000; i++) {
        num[i] = 0;
    }

    // Menu
    while (exit != 1) {
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
                if (indexer <= 1000) {
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
                        if (i == 0 && indexer > 1) {
                            std::cout << num[i] << ", ";
                        } else {
                            if (i == indexer-1) {
                                std::cout << num[i] << "." << std::endl;
                            } else {
                                std::cout << num[i] << " ";
                            }
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
                exit = 1;
                break;
            default:
                std::cout << "No se ha introducido una de las opciones ofrecidas." << std::endl << std::endl;
        }
    }

    return 0;
}