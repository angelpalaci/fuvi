/*
Nombre del archivo: Micro finaciera
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	string nombre;
	int sueldo;
	// variables
	cout << "Bienvenido a Finaciera AR" << endl;
	cout << "Ingrese su nombre estimado usuario" << endl;
	getline(cin,nombre);
	cout << "Introduzca su sueldo mensual" << endl;
	cin >> sueldo;
	if ((sueldo<=200000)) {
		cout << "   " << nombre << "  usted no puede tener derecho a un credito su salario minimo debe ser de C$200,000" << endl;
	}
	if ((sueldo>200000)) {
		if ((sueldo<=500000)) {
			cout << "  " << nombre << " usted tiene derecho a un credito de C$500,000" << endl;
		}
	}
	if ((sueldo>500000)) {
		if ((sueldo<1000000)) {
			cout << "  " << nombre << " usted tiene derecho a un credito de C$2,000,000" << endl;
		}
	}
	cout << "Gracias por utilizar nuestros cervicios." << endl;
	return 0;
}

