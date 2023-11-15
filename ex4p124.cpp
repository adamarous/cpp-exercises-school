#include <iostream>

using namespace std;

int main() {
	int userCorrecto = 1024, passwdCorrecto = 7890, user = 0, passwd = 0;

	while (user != 1024 && passwd != 7890) {
		cout << "Introduzca su usuario y contrasena:" << endl;
		cout << "Usuario >> ";
		cin >> user;
		cout << "Contrasena >> ";
		cin >> passwd;

		if (user == userCorrecto && passwd == passwdCorrecto) {
			break;
		}

		cout << "Usuario y/o contrasena incorrectos. Vuelva a intentarlo." << endl;
	}
	
	cout << "Bienvenido al sistema.";

	return 0;
}