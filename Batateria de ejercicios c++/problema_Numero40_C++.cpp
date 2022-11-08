/*
Nombre del archivo: operacion
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	// variables
	cout << "Ingrese las variables" << endl;
	cout << "Variable a" << endl;
	cin >> a;
	cout << "Variable b" << endl;
	cin >> b;
	c = 0;
	c = ((a/((a-b)*b)));
	cout << "El resulatado de la operacion es de" << endl;
	cout << c << endl;
	return 0;
}

