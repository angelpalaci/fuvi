/*
Nombre del archivo: sumar, sumar y sumar
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int cantidad;
	int i;
	float n;
	int totalsuma;
	// Definir variables
	cout << "Ingrese la cantidad de numeros que desea sumar" << endl;
	cin >> cantidad;
	i = 1;
	while (i<=cantidad) {
		cout << "Ingrese el numero " << i << endl;
		cin >> n;
		totalsuma = totalsuma+n;
		i = i+1;
	}
	cout << "La suma de todos los numeros es: " << totalsuma << endl;
	cout << "Gracias" << endl;
	return 0;
}

