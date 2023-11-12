#include <iostream>

using namespace std;

int main() {
    int months[12][1], month, total, check = 0;
    
    // Populating the array, and leaving empty the last indexes for non-31 day months
    for (int i=0; i<12; i++) {
        total = 0;
        if (i == 3 || i == 5 || i == 8 || i == 10) {
            for (int d=0; d<30; d++) {
                total += 1;
            }
        } else {
            if (i == 1) {
                for (int d=0; d<28; d++) {
                    total += 1;
                }
            } else {
                for (int d=0; d<31; d++) {
                    total += 1;
                }
            }
        }
        months[i][0] = total;
    }

    // Requesting input
    cout << "Introduzca un mes del año, del 1 al 12: ";
    cin >> month;

    // Computing user input
    for (int i=0; i<12; i++) {
        if (month == i+1) {
            cout << "El mes indicado tiene " << months[i][0] << " dias.";
            check = 1;
            break;
        }
    }

    // Error handling
    if (check != 1) {
        cout << "Ha introducido un valor incorrecto.";
    }
    
    return 0;
}