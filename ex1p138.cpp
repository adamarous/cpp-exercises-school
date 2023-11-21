#include <iostream>

int main() {
    int num;

    // Asking for input
    std::cout << "Dime un numero: ";
    std::cin >> num;

    // Computing and outputting results
    std::cout << "Sus divisores son: ";
    for (int i=num; i>=1; i--) {
        if (num % i == 0) {
            std::cout << num/i << " ";
        }
    }

    return 0;
}