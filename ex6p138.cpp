#include <iostream>

int main() {
    double num[1000], n;
    int indexer = 0, exit = 0;

    // Populating the array with 0 to check for non-empty places when adding data
    for (int i=0; i<1000; i++) {
        num[i] = 0;
    }

    // Add data (to do integration)
    while (1) {
        std::cout << "Introduzca un dato real de doble precision: ";
        std::cin >> n;
        num[indexer] = n;
        indexer++;
        break;
    }

    // Menu
    while (exit == 0) {
        std::cout << "1. " << std::endl;
        std::cout << "2. " << std::endl;
        std::cout << "3. " << std::endl;
        std::cout << "4. " << std::endl;
    }

    return 0;
}