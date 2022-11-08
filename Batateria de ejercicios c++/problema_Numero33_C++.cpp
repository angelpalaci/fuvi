/*
Nombre del archivo: colegio mi casita 
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	string familia;
	float matricula;
	float mensualidad;
	int numhijos;
	float total1;
	float total2;
	float total3;
	// variables
	cout << "Colegio Mi Casita" << endl;
	cout << "Matricula 30U$" << endl;
	cout << "Mensualidad de 20U$" << endl;
	cout << "Ingrese la familia" << endl;
	cin >> familia;
	cout << "Ingrese la cantidad de hijos que tiene en nuestra escuela." << endl;
	cin >> numhijos;
	mensualidad = 20;
	matricula = 30;
	if ((numhijos==1)) {
		total1 = numhijos*mensualidad*matricula;
		cout << "Monto total a pagar es de: " << total1 << "U$" << endl;
	}
	if ((numhijos==2)) {
		total1 = numhijos*mensualidad*matricula;
		total2 = (total2*0.10);
		cout << "Familia " << familia << " a resivido un  descuento de 10% por cantidad de hijos registrados" << endl;
		cout << "Monto total a pagar es de: " << total2 << "U$" << endl;
	}
	if ((numhijos>=3)) {
		total1 = numhijos*matricula*mensualidad;
		total2 = total1*0.20;
		cout << "Familia " << familia << " a resivido un  descuento de 20% por cantidad de hijos registrados" << endl;
		cout << "Monto total a pagar es de: " << total2 << "U$" << endl;
	} else {
		cout << "El numero que ingreso no es valido" << endl;
	}
	return 0;
}

