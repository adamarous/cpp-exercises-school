#include <iostream>

int main() {
    int width, height;

    std::cout << "Dime el ancho: ";
    std::cin >> width;
    std::cout << "Dime el alto: ";
    std::cin >> height;

    for (int r=0; r<height; r++) {
        for (int c=0; c<width; c++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}