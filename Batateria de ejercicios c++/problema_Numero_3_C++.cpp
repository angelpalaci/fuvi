/*
Nombre del archivo: Numero mayor
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;



int main() {
	double num1;
	double num2;
	double num3;
	// Definir variables
	// Desarrollo
	cout <<" Ingrese los digitos para determinar el numero que es mayor."<< endl:
	cout << "Ingrese el primer valor" << endl;
	cin >> num1;
	cout << "ingrese el sengundo valor" << endl;
	cin >> num2;
	cout << "Ingrese el tercer valor" << endl;
	cin >> num3;
	if ((num1>num2)) {
		if ((num1>num3)) {
			cout << "El numero que es mayor es " << num1 << endl;
		}
	}
	if ((num2>num3)) {
		if ((num2>num1)) {
			cout << "El numero que es mayor es " << num2 << endl;
		}
	}
	if ((num3>num2)) {
		if ((num3>num1)) {
			cout << "El numero que es mayor es " << num3 << endl;
		}
	}
	cout << "Gracias por utilizar nuestros servicios <3" << endl;
	return 0;
}

