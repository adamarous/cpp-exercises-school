#include <iostream>

using namespace std;

int main() {
    int months[12][31], days = 0;
    
    for (int i=0; i<12; i++) {
        if (i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i == 11) {
            months[i][days] = days+1;
            days++;
        } else {
            months[i][days] = days+1;
            days++;
        }
    }

    // Requesting input
    cout << "Introduzca un mes del año: ";
    
    
    return 0;
}