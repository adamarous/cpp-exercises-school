#include <iostream>

int main() {
    int num, n[1000];

    // Asking for input
    std::cout << "Dime un numero: ";
    std::cin >> num;

    // Computing and outputting results
    std::cout << "Sus divisores son: ";
    for (int i=1; i<=num; i++) {
        if (num % i == 0) {
            n[i] = num / i;
            std::cout << n[i] << " ";
        }
    }

    return 0;
}