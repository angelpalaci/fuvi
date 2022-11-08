/*
Nombre del archivo: Numero mayor, menor o iguales
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;



int main() {
	float num1;
	float num2;
	// variables
	// Desarollo
	cout << "Determine si el numero es mayor o igual" << endl;
	cout << "Ingrese el valor del numero 1 " << endl;
	cin >> num1;
	cout << "Ingrese el valor del numero 2 " << endl;
	cin >> num2;
	if ((num1>num2)) {
		cout << "El numero mayor es " << num1 << endl;
	}
	if ((num1<num2)) {
		cout << "El numero mayor es " << num2 << endl;
	}
	if ((num1==num2)) {
		cout << "Los numeros son iguales" << " " << num1 << " = " << num2 << endl;
	}
	cout << "Gracias por utilizar nuestros servicios <3" << endl;
	return 0;
}

