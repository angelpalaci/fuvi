/*
Nombre del archivo: Ecuacion de segundo grado
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<cmath>
using namespace std;


int main() {
	float a;
	float b;
	float c;
	float d;
	float raiz1;
	float raiz2;
	cout << "Ecuacion de segundo grado de tipo ax^2 + bx + c = 0  " << endl;
	cout << "Ingrese el valor de a" << endl;
	cin >> a;
	while (a==0) {
		cout << "Escriba nuevamente por que a no puede ser 0 " << endl;
		cin >> a;
	}
	cout << "Ingrese el valor de b" << endl;
	cin >> b;
	cout << "Ingrese el valor de c" << endl;
	cin >> c;
	d = (pow(b,2))-((4)*(a)*(c));
	cout << "La discriminante de la ecuacion es de: " << d << endl;
	if (d==0) {
		cout << "La respuesta es: x= " << d << endl;
	} else {
		if (d>0) {
			raiz1 = (-b+(sqrtf(d)))/(2*a);
			raiz2 = (-b-(sqrtf(d)))/(2*a);
			cout << "La raiz positiva es de" << raiz1 << endl;
			cout << "La raiz negativa es de" << raiz2 << endl;
		}
	}
	return 0;
}

