/*
Nombre del archivo: supongo que calculo XD
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float funcioxmas;
	float funcioxmenos;
	float x;
	// variables
	cout << "Ingrese un numero" << endl;
	cin >> x;
	funcioxmas = ((pow((x-2),2))/2)+((pow((x-4),4))/4)+((pow((x-6),6))/6);
	cout << "La el valor positivo del resultado es de: " << funcioxmas << endl;
	funcioxmenos = ((pow((x+2),2))/2)+((pow((x+4),4))/4)+((pow((x+6),6))/6);
	cout << "La el valor negativo del resultado es de: " << funcioxmenos << endl;
	return 0;
}

