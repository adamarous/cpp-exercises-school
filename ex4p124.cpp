#include <iostream>

using namespace std;

int main() {
	int userCorrecto = 1024, paswwdCorrecto = 7890, user, passwd;

	while (user != 1024 && passwd != 7890) {
		cout << "Introduzca su usuario y contrasena:" << endl;
		cin >> user >> passwd;

		if (user == userCorrecto && passwd == paswwdCorrecto) {
			break;
		}

		cout << "Usuario y contrasena incorrectos. Vuelva a intentarlo." << endl;
	}
	
	cout << "Bienvenido al sistema.";

	return 0;
}