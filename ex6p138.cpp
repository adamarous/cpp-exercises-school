#include <iostream>

int main() {
    double num[1000], n;
    int indexer = 0;

    // Populating the array with 0 to check for non-empty places when adding data
    for (int i=0; i<1000; i++) {
        num[i] = 0;
    }

    // Add data
    while (1) {
        std::cout << "Introduzca un dato real de doble precision: ";
        std::cin >> n;
        for (int i=counter; i<n; i++) {
            // counter should increase right before adding it to the array, and then break out of the loop, though this possibly makes the loop useless
            // if (num[i] == 0 && n != 0) {
            //     num[i] = n;
            // } else {
            //     if (n == 0) {
            //         // if the input number is 0, then an index or counter should be ketp of previously used numbers, though this would void the purpose of checking for input 0
            //     }
            // }
        }
    }

    return 0;
}