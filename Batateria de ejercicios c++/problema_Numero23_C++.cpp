/*
Nombre del archivo: menu
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	float suma1;
	float suma2;
	float suma3;
	float sumatotal;
	int unidades;
	cout<< "Var juelacien maraca" << endl;
	cout << "Ingrese la cantidad de Bocadillos de jamon que consumio" << endl;
	cin >> a;
	if (a>0) {
		suma1 = a*1.5;
		cout << "El costo es de: " << suma1 << "C$" << endl;
	}
	cout << "Ingrese la cantidad de frescos que consumio" << endl;
	cin >> b;
	if (b>0) {
		suma2 = b*1.05;
		cout << "El costo es de: " << suma2 << "C$" << endl;
	}
	cout << "Ingrese la cantidad de cerveza que consumio" << endl;
	cin >> c;
	if (c>0) {
		suma3 = c*0.75;
		cout << "El costo es de: " << suma3 << "C$" << endl;
	}
	sumatotal = suma1+suma2+suma3;
	cout << "El consumo total es de" << endl;
	cout << sumatotal << " C$" << endl;
	return 0;
}

