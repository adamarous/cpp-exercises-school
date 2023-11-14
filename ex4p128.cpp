#include <iostream>

using namespace std;

int main() {
    int n[10], greatest = 0;

    // Asking for input
    for (int i=0; i<10; i++) {
        cout << "Introduzca un numero entero: ";
        cin >> n[i];
    }
    
    // Sorting through the array to find the greatest number
    for (int i=0; i<10; i++) {
        for (int d=0; d<10; d++) {
            if (n[i] > n[d]) {
                greatest = n[i];
                break;
            }
        }
    }

    // Outputting results
    cout << "El numero mas grande es " << greatest;

    return 0;
}