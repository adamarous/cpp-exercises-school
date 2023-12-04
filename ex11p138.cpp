#include <iostream>

void ObtenerMaximo(int n, int a[]) {
    int greatest = 0;
    for (int i=0; i<n; i++) {
        if (i == 0) {
            if (a[i] > a[i+1]) {
                greatest = a[i];
            }
        } else {
            if (a[i] > a[i+1] && a[i] > greatest) {
                greatest = a[i];
            }
        }
    }
    std::cout << greatest;
}

int main() {
    int data = 0, array[1000];

    // Populating the array
    for (int i=0; i<1000; i++) {
        int input;
        std::cout << "Introduzca un valor para el array o escriba 0 para acabar la asignacion: ";
        std::cin >> input;
        if (input != 0) {
            array[i] = input;
            data++;
        } else {
            break;
        }
    }

    std::cout << std::endl << "El valor mayor entre los introducidos es: ";
    ObtenerMaximo(data, array);
    std::cout << ".";

    return 0;
}