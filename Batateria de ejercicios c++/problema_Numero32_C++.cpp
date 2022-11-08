/*
Nombre del archivo: maximo comun divisor
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int nummaximo;
	int x;
	cout << "Calcula el maximo comun divisor" << endl;
	cout << "Ingrese dos numeros" << endl;
	cin >> num1 >> num2;
	if (num1>0 && num2>0) {
		nummaximo = 1;
		x = 1;
		while (x<=num1) {
			if (num1%x==0 && num2%x==0) {
				if (x>nummaximo) {
					nummaximo = x;
				}
			}
			x = x+1;
		}
		cout << "El Maximo común divisor es de: " << nummaximo << endl;
	} else {
		cout << "Debes ingresar numeros mayores a cero" << endl;
	}
	return 0;
}

