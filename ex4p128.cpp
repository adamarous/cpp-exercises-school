#include <iostream>

int main() {
    int n[10], greatest;

    // Asking for input
    for (int i=0; i<10; i++) {
        cout << "Introduzca un numero entero: ";
        cin >> n[i];
    }
    
    // Sorting through the array to find the greatest number
    for (int i=0; i<10; i++) {
        if (i >= 0 && i <= 8) {
            if (n[i] > n[i+1]) {
                greatest = n[i];
            }
        } else {
            greatest = n[9];
        }
    }

    // Outputting results
    cout << "El numero mas grande es " << greatest;

    return 0;
}