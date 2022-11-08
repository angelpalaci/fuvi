/*
Nombre del archivo: Numero par o impar
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	float ayuda1;
	int num;
	int respuesta;
	// Definir variables
	cout << "Averigue si su numero es par o impar"<< endl;
	cout << " " << endl;
	cout << "Ingrese el numero" << endl;
	cin >> num;
	if ((num>=0)) {
		ayuda1 = num%2;
		if ((ayuda1==0)) {
			cout << "El numero " << num << " es par" << endl;
		} else {
			cout << "El numero que usted ingreso no es par" << endl;
		}
	} else {
		cout << "El valor numerico que ingreso no es valido" << endl;
	}
	cout << "Gracias por utilizar nuestros cervicios <3" << endl;
	return 0;
}

