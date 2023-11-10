#include <iostream>

using namespace std;

int main()
{
	int numero;

	cout << "Introduzca un valor entre 1 a 10: ";
	cin >> numero;

	switch(numero) {
		case 1:
			case 2:
				case 3:
					case 4:
						case 5:
							case 6:
								case 7:
									case 8:
										case 9:
											case 10:
												if (numero % 3 == 0) {
													cout << "El numero introducido es multiplo de 3.";
													break;
												} else {
													cout << "El numero introducido no es multiplo de 3.";
													break;
												}
		default:
			cout << "El valor introducido no se encuentra en el rango de valores solicitado.";
	}

	return 0;
}
