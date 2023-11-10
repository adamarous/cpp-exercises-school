#include <iostream>

using namespace std;

int main() {
	int passwd = 7890;
	int intento;

	while (intento != passwd) {
		cout << "Introduzca su contrasena: ";
		cin >> intento;
		if (intento != passwd) {
			cout << "Se ha introducido la contrasena incorrecta." << endl;
		}
	}

	cout << "Se ha introducido la contrasena correcta.";

	return 0;
}
