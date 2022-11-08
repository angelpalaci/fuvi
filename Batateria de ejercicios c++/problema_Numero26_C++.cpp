/*
Nombre del archivo: producto
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int i;
	int producto;
	int res;
	cout << "Calcule el producto de los numeros" << endl;
	cout << "Recuerda que el programa finaliza cuando escriba 0" << endl;
	i = 1;
	producto = 0;
	res = 1;
	while (i!=0) {
		cout << "Ingrese un numero" << endl;
		cin >> i;
		if (i!=0) {
			res = res*i;
			producto = res;
		}
	}
	cout << "El producto de los números es de: " << producto << endl;
	return 0;
}

