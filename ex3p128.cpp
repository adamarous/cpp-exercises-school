#include <iostream>

using namespace std;

int main() {
    int months[12][32], total = 0, day = 0, month = 0, checkMonth = 0, checkDay = 0, janCheck = 0;

    // Preparing month data; up to 30 filled with days, 1 or 3 empty spaces for non-31 months, and the 31st place with the total days
    for (int i=0; i<12; i++) {
        total = 0;
        switch (i) {
            case 1:
                for (int d=0; d<28; d++) {
                    months[i][d] = d+1;
                    total += 1;
                }
                months[i][28] = 0;
                months[i][29] = 0;
                months[i][30] = 0;
                break;
            case 3:
                case 5:
                    case 8:
                        case 10:
                            for (int d=0; d<30; d++) {
                                months[i][d] = d+1;
                                total += 1;
                            }
                            months[i][30] = 0;
                            break;
            default:
                for (int d=0; d<31; d++) {
                    months[i][d] = d+1;
                    total += 1;
                }
                break;
        }
        months[i][31] = total;
    }

    // Getting input from user
    cout << "Introduzca un valor para el dia y un valor para el mes: " << endl;
    cin >> day >> month;

    // Processing input with prepared data
    total = 0;
    for (int i=0; i<12; i++) {
        if (month == i+1) {
            for (int d=0; d<30; d++) {
                if (day == d+1) {
                    cout << "El dia " << day << " del mes " << month << " es el dia ";
                    for (int m=0; m<12; m++) {
                        if (m < i) {
                            total += months[m][31];
                            janCheck = 0;
                        } else {
                            total = months[i][d];
                            janCheck = 1;
                        }
                    }
                    if (janCheck == 0) {
                        cout << total + months[i][d] << " del año.";
                    } else {
                        cout << total << " del año.";
                    }
                    checkDay = 1;
                }
            }
            checkMonth = 1;
        }
    }

    // Error handling
    if (checkMonth != 1 && checkDay != 1) {
        cout << "Los valores introducidos no son correctos.";
    } else {
        if (checkMonth != 1) {
            cout << "El valor del mes es incorrecto.";
        }
        if (checkDay != 1) {
            cout << "El valor del día es incorrecto.";
        }
    }

    return 0;
}