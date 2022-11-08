
/*
Nombre del archivo: Potencia y Raiz
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double num1;
	double potencia;
	double raiz_;
	// Definir variables
	cout << "Raiz y potencia de un numero positivo"<< endl;
	cout << " "<< endl;
	cout << "Ingrese el numero que desee" << endl;
	cin >> num1;
	if ((num1<=0)) {
		cout << "El numero que usted ingreso no es valido en el sistema " << endl;
	} else {
		potencia = pow(num1,2);
		raiz_ = sqrtf(num1);
		cout << "El cuadrado del numero " << num1 << " es: " << potencia << endl;
		cout << "La raiz del numero " << num1 << " es de: " << raiz_ << endl;
	}
	cout << "Gracias por utilizar nuestros servicios <3" << endl;
	return 0;
}

