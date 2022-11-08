/*
Nombre del archivo: suma de numeros pares
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int num;
	int sumapar;
	int var;
	// Definir variables
	cout << "Ingrese el numero limite hasta el caul desea conocer la suma de los numeros pares que contiene en esa cantidad" << endl;
	cin >> num;
	sumapar = 0;
	for (var=1;var<=num;var++) {
		if (var%2==0) {
			sumapar = sumapar+var;
		}
	}
	cout << "La suma de los " << num << " Numeros pares es: " << sumapar << endl;
	return 0;
	cout << "Gracias por utilizar nuestros servicios <3" << endl;
}

