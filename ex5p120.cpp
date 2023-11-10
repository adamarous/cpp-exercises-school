#include <iostream>

using namspace std;

int main()
{
	int numero;

	cout << "Introduzca una nota evaluada del 1 al 10: ";
	cin >> numero;

	switch(numero) {
		case 1:
			case 2:
				cout << "Insuficiente.";
				break;
		case 3:
			case 4:
				cout << "Suficiente.";
				break;
		case 5:
			case 6:
				cout << "Bien.";
				break.
		case 7:
			case 8:
				cout << "Notable.";
				break;
		case 9:
			case 10:
				cout << "Sobresaliente.";
				break;
		default:
			cout << "El valor introducido no se encuentre en el rango de valores solicitado.";
	}

	return 0;
}
