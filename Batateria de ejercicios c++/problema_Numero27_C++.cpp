/*
Nombre del archivo: valor de pasaje
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	float calculo;
	float calculo2;
	float numd;
	float numv;
	float precio;
	cout << "Ingrese el numero de dias por el cual desea estar fuera del pais" << endl;
	cin >> numd;
	if ((numd>=7)) {
		cout << "Si sus dias son superior a 7 usted tiene que viajar mas de 1000 Kilometros" << endl;
		cout << "Ingrese el numero de kilometros del vuelo" << endl;
		cin >> numv;
		if ((numv>1000)) {
			precio = (numv*8.50);
			calculo = precio*0.30;
			calculo2 = precio-calculo;
			cout << "El precio de su voleto es de " << precio << "U$" << endl;
			cout << "Pero usted resivio el descuento por kilometros a recorrer " << calculo2 << "U$" << endl;
		}
	} else {
		cout << "Ingrese el numero de kilometros a recorre r" << endl;
		cin >> numv;
		precio = (numv*8.50);
		cout << "El precio de su voleto es de: " << precio << "U$" << endl;
	}
	return 0;
}

