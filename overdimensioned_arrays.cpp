#include <iostream>

using namespace std;

int main() {

    int data[1000], counter = 0, number;

    do {
        cout << "Give me a piece of data or 5555 to exit: ";
        cin >> number;

        if (number!=5555 && counter<=999) {
            data[counter] = number;
            counter++;
        }
    } while (number!=5555 && counter<=999);

    cout << "The " << counter << " pieces of data are: ";
    for (int i=0; i<counter; i++) {
        cout << data[i] << " ";
    }

    return 0;
}