/*
Nombre del archivo: suma o producto
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;



int main() {
	double contar;
	double num1;
	double num2;
	double num3;
	// Definir variables
	
	cout << "Ingrese los datos"<< endl;
	cout << "Si suprimer datos es negativo se calculara producto"<< endl;
	cout << "Si su primer datos es positivo se sumaran los digitos." << endl;
	cout <<" "<< endl;
	cout << "Ingrese el primer valor" << endl;
	cin >> num1;
	cout << "ingrese el sengundo valor" << endl;
	cin >> num2;
	cout << "Ingrese el tercer valor" << endl;
	cin >> num3;
	if ((num1<0)) {
		contar = num2*num3*num1;
		cout << "El producto del sengudo valor y del tercero es de: " << contar << endl;
	} else {
		contar = num1+num2+num3;
		cout << "La suma de los tres valores es de: " << contar << endl;
	}
	cout << "Gracias por utilizar nuestros servicios" << endl;
	return 0;
}

