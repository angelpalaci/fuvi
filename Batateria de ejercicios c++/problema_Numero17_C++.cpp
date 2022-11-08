/*
Nombre del archivo: multiplo de 1 a 100
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	cout << "Numeros multiplos de 1 a 100" << endl;
	int a;
	int b;
	int c;
	a = 1;
	b = 0;
	c = 0;
	while (a<=100) {
		if (a%2==0) {
			cout << a << endl;
			b = b+1;
		}
		if (a%3==0) {
			cout << a << endl;
			c = c+1;
		}
		a = a+1;
	}
	cout << "Numeros multiplos de 2: " << b << endl;
	cout << "Numeros multilpos de 3: " << c << endl;
	return 0;
}

