/*
Nombre del archivo: descuento si descuento no
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	double calculo;
	double compra;
	double preciototal;
	// Definir variables
	cout << "Bien venido a tienda Abarrotes Angel" << endl;
	cout << "Ingrese el valor de su compra " << endl;
	cin >> compra;
	if ((compra>0)) {
		cout << "Usted a resivido un descuento del 15% en su compra " << endl;
		calculo = (compra/100)*15;
		preciototal = compra-calculo;
		cout << "Su nuevo precio es de: " << preciototal << endl;
	} else {
		cout << "El valor que usted ingreso no es valido " << endl;
	}
	cout << "Gracias por preferir nuestros servicios <3 " << endl;
	return 0;
}

