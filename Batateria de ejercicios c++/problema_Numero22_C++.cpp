/*
Nombre del archivo: año bisiesto
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int ano;
	cout << "Averigua si el año es bisiesto" << endl;
	cout << "Ingrese el año " << endl;
	cin >> ano;
	if (ano%4==0) {
		if (ano%100==0) {
			if (ano%400==0) {
				cout << "El ano " << ano << " es bisiesto" << endl;
			} else {
				cout << "El ano " << ano << " no es bisiesto" << endl;
			}
		} else {
			cout << "El ano " << ano << " es bisiesto" << endl;
		}
	} else {
		cout << "El ano " << ano << " no es bisiesto" << endl;
	}
	return 0;
}

