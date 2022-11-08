/*
Nombre del archivo: contraseña
Autor: Angel Palacio
Lugar: ITV
*/
#include <stdlib.h>
#include<iostream>
#include <conio.h>
using namespace std;


int main() {
	string contra;
	int ingreso;
	int intentos;
	// Definir variables
	ingreso = 0;
	intentos = 0;
	while ((intentos<3 && ingreso==0)) {
		cout << "Ingrese la contraseña del sistema" << endl;
		cin >> contra;
		if ((contra=="Tuani")) {
			cout << " Usted a podido ingresar al sistema" << endl;
			cout << "Gracias por utilizar nuestros cervicios "<< endl;
			intentos = intentos+8;
		} else {
			system("cls"); // no hay forma directa de borrar la pantalla con C++ estandar
			intentos = intentos+1;
		}
	}
	return 0;
	cout <<"Fin del programa <3"<< endl;
}

