/*
Nombre del archivo: 9 numeros cuadrados
Autor: Angel Palacio
Lugar: ITV
*/
#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float num1;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	int numoriginal;
	float variable1;
	float variable2;
	float variable3;
	float variable4;
	float variable5;
	float variable6;
	float variable7;
	float variable8;
	float variable9;
	// Definir variables
	// Logica
	cout << "Con el siguiente programa podra calcular el cuadrado de los primeros 9 numeros" << endl;
    cout << "Ingrese un el numero anterior del que desea iniciar." << endl;
	cin >> numoriginal;
	// Problema
	if ((numoriginal>=0)) {
		num1 = (numoriginal+1);
		variable1 = pow(num1,2);
		cout << "Primer digito" << endl;
		cout << num1 << endl;
		cout << "Cuadrado" << endl;
		cout << variable1 << endl;
		num2 = (numoriginal+2);
		variable2 = pow(num2,2);
		cout << "Segundo digito" << endl;
		cout << num2 << endl;
		cout << "Cuadrado" << endl;
		cout << variable2 << endl;
		num3 = (numoriginal+3);
		variable3 = pow(num3,2);
		cout << "Tercer digito" << endl;
		cout << num3 << endl;
		cout << "Cuadrado" << endl;
		cout << variable3 << endl;
		num4 = (numoriginal+4);
		variable4 = pow(num4,2);
		cout << "Cuarto digito" << endl;
		cout << num4 << endl;
		cout << "Cuadrado" << endl;
		cout << variable4 << endl;
		num5 = (numoriginal+5);
		variable5 = pow(num5,2);
		cout << "Quinto digito" << endl;
		cout << num5 << endl;
		cout << "Cuadrado" << endl;
		cout << variable5 << endl;
		num6 = (numoriginal+6);
		variable6 = pow(num6,2);
		cout << "Sexto digito" << endl;
		cout << num6 << endl;
		cout << "Cuadrado" << endl;
		cout << variable6 << endl;
		num7 = (numoriginal+6);
		variable7 = pow(num7,2);
		cout << "Septimo digito" << endl;
		cout << num7 << endl;
		cout << "Cuadrado" << endl;
		cout << variable7 << endl;
		num8 = (numoriginal+8);
		variable8 = pow(num8,2);
		cout << "Octavo digito" << endl;
		cout << num8 << endl;
		cout << "Cuadrado" << endl;
		cout << variable8 << endl;
		num9 = (numoriginal+9);
		variable9 = pow(num9,2);
		cout << "Noveno digito" << endl;
		cout << num9 << endl;
		cout << "Cuadrado" << endl;
		cout << variable9 << endl;
	} else {
		cout << "El valor que usted ingreso no es valido" << endl;
	}
	cout << "Gracias por utilizar nuestro programa <3" << endl;
	return 0;
}

