#include <iostream>

using namespace std;

int main() {
	int intento = 0, limite = 100, inicio=0, num, numUser, eval;
	
	// srand() utiliza el valor variable del tiempo a partir de la implementacion que le da C++ como semilla para la funcion rand() utilizada en la declaracion siguiente; rand() utiliza un algoritmo sencillo que se basa en el valor de la semilla que genera srand(), casi asegurando un numero aleatorio porque la semilla se basa en el paso del tiempo. El manejo del tiempo se realiza a traves de las marcas temporales de C++, y basicamente cuenta el numero de segundos que han pasado desde el 1 de enero 1970 a las 00:00:00; esto debido a la definicion que se dio originalmente al tiempo desde el que contaban los primeros sistemas Unix.
	srand((unsigned) time(NULL)); // Puesto que se hace uso de un valor muy grande de segundos, se decide usar el tiempo unsigned, que almacena solo numeros positivos (los unicos posibles para el concepto de segundos que utilizamos en este caso)
	num = inicio + (rand() % limite+1); 
	cout << num << endl;

	while (intento < 6) {
		cout << "Intente adivinar el numero: ";
		cin >> numUser;

		intento++;
		eval = intento==6 ? 0:1;

		if (numUser == num) {
			eval = 1;
			break;
		} else {
			if (numUser < num) {
				cout << "Te has quedado corto." << endl;
			} else {
				cout << "Te has pasado." << endl;
			}
		}
	}

	if (eval == 1) {
		cout << "Adivinaste el numero despues de " << intento << " intento(s).";
	} else {
		cout << "No adivinaste el numero. Era " << num << ".";
	}

	return 0;
}
