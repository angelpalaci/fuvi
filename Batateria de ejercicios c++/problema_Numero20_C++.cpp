/*
Nombre del archivo: cuadro de asteriscos
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	cout << "Realice su cuadro de asteriscos. " << endl;
	cout << "Ingrese la cantidad de digitos" << endl;
	cin >> c;
	for (a=1;a<=c;a++) {
		for (b=1;b<=c;b++) {
			if (a>1 && a<c && b>1 && b<c) {
				cout << "  ";
			} else {
				cout << "* ";
			}
		}
		cout << " " << endl;
	}
	return 0;
}

