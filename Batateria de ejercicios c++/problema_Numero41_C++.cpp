/*
Nombre del archivo: gasolinera

Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	float a;
	float cantidadlitros;
	int opciones;
	float total;
	cout << "Bienvenido a gasolinera Angel" << endl;
	cout << "Elija cual de las opciones necesita" << endl;
	cout << (1) << "- Gasolina regular" << endl;
	cout << (2) << "- Gasolina Súper" << endl;
	cout << (3) << "- Diesel" << endl;
	cin >> opciones;
	switch (opciones) {
	case 1:
		cout << "Ingrese la cantidad de litros que desea" << endl;
		cin >> cantidadlitros;
		total = cantidadlitros*32.85;
		cout << "El monto total a pagar sera de C$" << total << endl;
		break;
	case 2:
		cout << "Ingrese la cantidad de litros que desea" << endl;
		cin >> cantidadlitros;
		total = cantidadlitros*33.48;
		cout << "El monto total a pagar sera de C$" << total << endl;
		break;
	case 3:
		cout << "Ingrese la cantidad de litros que desea" << endl;
		cin >> cantidadlitros;
		total = cantidadlitros*28.45;
		cout << "El monto total a pagar sera de C$" << total << endl;
		break;
	}
	return 0;
}

