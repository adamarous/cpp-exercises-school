#include <iostream>

using namespace std;

int main() {
	float num = 0;
	float suma;

	while (num >= 0) {
		cout << "Introduzca un numero positivo: ";
		cin >> num;

		if (num < 0 || num == 0) {
			break;
		}
		
		suma += num;
	}

	cout << "La suma de los numeros introducidos es " << suma;

	return 0;
}