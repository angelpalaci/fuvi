/*
Nombre del archivo: Empresa
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	float extra;
	float montooras;
	float normal;
	float oras;
	float total;
	string trabajador;
	cout << "Ingrese su nombre estimado colaborador" << endl;
	getline(cin,trabajador);
	cout << "Ingrese el numero de oras que realizo en esta semana recuerde que una hora son 6U$" << endl;
	cin >> oras;
	if ((oras>48)) {
		extra = oras-48;
		montooras = extra*(6+(6*0.35));
		normal = 48*6;
		total = montooras+normal;
		cout << "   " << trabajador << "  " << "Usted realizo " << extra << " oras extra" << endl;
		cout << " Su salario semanal es de " << total << "U$" << endl;
	} else {
		normal = oras*6;
		cout << "    " << trabajador << "No presenta ninguna ora extra" << endl;
		cout << "Su salario semanal es de " << total << "U$" << endl;
	}
	return 0;
}

