/*
Nombre del archivo: suma igual
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int num1;
	int num2;
	int num3;
	int sumatotal;
	// Definir variables
	cout << "Seran iguales o distintos" << endl;
	cout << "Ingrese el primer digito" << endl;
	cin >> num1;
	cout << "Ingrese el segundo digito" << endl;
	cin >> num2;
	cout << "Ingrese el tercer digito" << endl;
	cin >> num3;
	sumatotal = num1+num2;
	if ((num3==sumatotal)) {
		cout << "La suma de los dos primeros digitos que es = " << sumatotal << " es igual al tercero " << num3 << endl;
	cout << "Quiere decir que los dos primeros digitos son iguales" << endl;
	} else {
		cout << "Los numeros son distintos" << endl;
	}
	return 0;
}

