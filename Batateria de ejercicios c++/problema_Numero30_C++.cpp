/*
Nombre del archivo: adivina
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<conio.h>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	int variable[10];
	cout << "Ingresan al algoritmo adivina numero y posicion" << endl;
	for (a=1;a<=10;a++) {
		cout << "Ingrese un número" << endl;
		cin >> variable[a-1];
	}
	cout << "Ingrese el numero a buscar" << endl;
	cin >> c;
		system("cls");
	b = 0;
	for (a=1;a<=10;a++) {
		system("cls");
		if (c==variable[a-1]) {
				
			cout << "El numero " << c << " se encuentra en la posicion " << a << endl;
			b = 1;
		
		}
	}
	
	if (b==0) {
		cout << "El numero" << c << " no se encuentra en la variable" << endl;
	}
	return 0;
}

