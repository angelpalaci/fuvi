/*
Nombre del archivo: escalera invertida de asteriscos
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
using namespace std;


int main() {
	int a;
	int b;
	int c;
	int n;
	cout << "Escalera invertida de astericos." << endl;
	cout << "Ingrese el numero" << endl;
	cin >> n;
	for (a=1;a<=n;a++) {
		for (b=a;b<=n;b++) {
			cout << "* ";
		}
		cout << " " << endl;
	}
	return 0;
}

