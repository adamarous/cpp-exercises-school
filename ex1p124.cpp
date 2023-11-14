#include <iostream>

using namespace std;

int main() {
	int passwd = 7890;
	int intento = 0;

	while (intento != passwd) {
		cout << "Introduzca su contrasena: ";
		cin >> intento;
		if (intento != passwd) {
			cout << "Se ha introducido la contrasena incorrecta." << endl;
			continue;
		} else {
			cout << "Se ha introducido la contrasena correcta.";
			break;
		}
	}

	return 0;
}