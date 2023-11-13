#include <iostream>

using namespace std;

int main() {
    int months[12][32], total, day, month, checkMonth, checkDay;

    // Preparing month data; up to 30 filled with days, 1 to 2 empty spaces for non-31 days, and the 31st place with the total days
    for (int i=0; i<12; i++) {
        total = 0;
        switch (i) {
            case 1:
                for (int d=0; d<28; d++) {
                    months[i][d] = d+1;
                    total += 1;
                }
                break;
            case 3:
                case 5:
                    case 8:
                        case 10:
                            for (int d=0; d<30; d++) {
                                months[i][d] = d+1;
                                total += 1;
                            }
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
    cout << "Introduzca un valor para el dia y el mes: ";
    // Pending to solve issue with character input statement
    cin >> day >> month;

    // Processing input with prepared data
    for (int i=0; i<12; i++) {
        if (month == i+1) {
            for (int d=0; d<30; i++) {
                if (day == day+1) {
                    // Pending to produce a sorting algorithm for the months prior to the one selected, to compute the day in the year
                    cout << "El dia " << day << " del " << i+1 << " es el " << 365 - (months[i-1][30] + months[i][d]);
                    checkDay = 1;
                }
            }
            checkMonth = 1;
        }
    }

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