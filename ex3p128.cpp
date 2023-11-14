#include <iostream>

int main() {
    int months[12][32], total = 0, day = 0, month = 0, checkMonth = 0, checkDay = 0, janCheck = 0;

    // Preparing month data; up to 30 filled with days, 1 or 3 empty spaces for non-31 months, and the 31st place with the total days
    for (int i=0; i<12; i++) {
        total = 0;
        if (i == 1) {
            for (int d=0; d<28; d++) {
                months[i][d] = d+1;
                total += 1;
            }
            months[i][28] = 0;
            months[i][29] = 0;
            months[i][30] = 0;
        } else {
            if (i == 3 || i == 5 || i == 8 || i == 10) {
                for (int d=0; d<30; d++) {
                    months[i][d] = d+1;
                    total += 1;
                }
                months[i][30] = 0;
            } else {
                for (int d=0; d<31; d++) {
                    months[i][d] = d+1;
                    total += 1;
                }
            }
        }
        months[i][31] = total;
    }

    // Getting input from user
    std::cout << "Introduzca un valor para el dia y un valor para el mes: " << std::endl;
    std::cout << "Dia >> ";
    std::cin >> day;
    std::cout << "Mes >> ";
    std::cin >> month;

    // Processing input with prepared data
    total = 0;
    for (int i=0; i<12; i++) {
        if (month == i+1) {
            for (int d=0; d<31; d++) {
                if (day == d+1) {
                    std::cout << "El dia " << day << " de ";
                    switch (i) {
                        case 0:
                            std::cout << "enero";
                            break;
                        case 1:
                            std::cout << "febrero";
                            break;
                        case 2:
                            std::cout << "marzo";
                            break;
                        case 3:
                            std::cout << "abril";
                            break;
                        case 4:
                            std::cout << "mayo";
                            break;
                        case 5:
                            std::cout << "junio";
                            break;
                        case 6:
                            std::cout << "julio";
                            break;
                        case 7:
                            std::cout << "agosto";
                            break;
                        case 8:
                            std::cout << "septiembre";
                            break;
                        case 9:
                            std::cout << "octubre";
                            break;
                        case 10:
                            std::cout << "noviembre";
                            break;
                        case 11:
                            std::cout << "diciembre";
                            break;
                    }
                    std::cout << " es el dia ";
                    for (int m=0; m<12; m++) {
                        if (m < i) {
                            total += months[m][31];
                        } else {
                            if (i == 0) {
                                total = months[i][d];
                                janCheck = 1;
                            }
                            break;
                        }
                    }
                    if (janCheck == 0) {
                        std::cout << total + months[i][d] << " del ano.";
                    } else {
                        std::cout << total << " del ano.";
                    }
                    checkDay = 1;
                    break;
                }
            }
            checkMonth = 1;
            break;
        }
    }

    // Error handling
    if (checkMonth != 1 && checkDay != 1) {
        std::cout << "Los valores introducidos no son correctos.";
    } else {
        if (checkMonth != 1) {
            std::cout << "El valor del mes es incorrecto.";
        }
        if (checkDay != 1) {
            std::cout << "El valor del dia es incorrecto.";
        }
    }

    return 0;
}